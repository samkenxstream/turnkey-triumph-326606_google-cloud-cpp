// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/idempotency_policy_generator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "absl/memory/memory.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/descriptor_utils.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

IdempotencyPolicyGenerator::IdempotencyPolicyGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("idempotency_policy_header_path",
                           "idempotency_policy_cc_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status IdempotencyPolicyGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({"google/cloud/idempotency.h",
                       "google/cloud/internal/retry_policy.h",
                       "google/cloud/version.h"});
  HeaderSystemIncludes({vars("proto_grpc_header_path"), "memory"});

  auto result = HeaderOpenNamespaces();
  if (!result.ok()) return result;

  // Abstract interface ConnectionIdempotencyPolicy base class
  HeaderPrint(  // clang-format off
    "\n"
    "class $idempotency_class_name$ {\n"
    " public:\n"
    "  virtual ~$idempotency_class_name$();\n");
  // clang-format on

  HeaderPrint(  // clang-format off
    "\n"
    "  /// Create a new copy of this object.\n"
    "  virtual std::unique_ptr<$idempotency_class_name$> clone() const;\n");
  // clang-format on

  for (auto const& method : methods()) {
    HeaderPrintMethod(
        method,
        {MethodPattern(
             {
                 // clang-format off
   {"\n"
    "  virtual google::cloud::Idempotency\n"
    "  $method_name$($request_type$ const& request);\n"}
                 // clang-format on
             },
             All(IsNonStreaming, Not(IsPaginated))),
         MethodPattern(
             {
                 // clang-format off
   // TODO(#9982) - we should pass `$request_type$ const&` here
   {"\n"
    "  virtual google::cloud::Idempotency\n"
    "  $method_name$($request_type$ request);\n"}
                 // clang-format on
             },
             All(IsNonStreaming, IsPaginated))},
        __FILE__, __LINE__);
  }

  // close abstract interface Connection base class
  HeaderPrint(  // clang-format off
    "};\n");
  // clang-format on

  HeaderPrint(  // clang-format off
      "\n"
      "std::unique_ptr<$idempotency_class_name$>\n"
      "    MakeDefault$idempotency_class_name$();\n");
  // clang-format on

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status IdempotencyPolicyGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n");
  // clang-format on

  // includes
  CcPrint("\n");
  CcLocalIncludes(
      {vars("idempotency_policy_header_path"), "absl/memory/memory.h"});
  CcSystemIncludes({"memory"});

  auto result = CcOpenNamespaces();
  if (!result.ok()) return result;

  auto is_set_iam_policy = [](google::protobuf::MethodDescriptor const& m) {
    return m.output_type()->full_name() == "google.iam.v1.Policy" &&
           m.input_type()->full_name() == "google.iam.v1.SetIamPolicyRequest";
  };

  CcPrint(R"""(
using ::google::cloud::Idempotency;

$idempotency_class_name$::~$idempotency_class_name$() = default;

std::unique_ptr<$idempotency_class_name$>
$idempotency_class_name$::clone() const {
  return absl::make_unique<$idempotency_class_name$>(*this);
}
)""");

  for (auto const& method : methods()) {
    // Streaming RPCs do not get an idempotency check. They typically need a
    // resume (as opposed to "retry") loop, and this is often custom.
    if (IsStreaming(method)) continue;

    // SetIamPolicy() methods are common. They are idempotent if the request
    // has an `ETag` pre-condition.  This is one of the few (only?) cases where
    // a policy based on the request contents is known.
    if (is_set_iam_policy(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
Idempotency $idempotency_class_name$::$method_name$(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}
)""");
      continue;
    }

    // TODO(#9982) - we should pass `$request_type$ const&` here
    if (IsPaginated(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
Idempotency $idempotency_class_name$::$method_name$($request_type$) {  // NOLINT
  return Idempotency::$default_idempotency$;
}
)""");
      continue;
    }

    CcPrintMethod(method, __FILE__, __LINE__, R"""(
Idempotency $idempotency_class_name$::$method_name$($request_type$ const&) {
  return Idempotency::$default_idempotency$;
}
)""");
  }

  CcPrint(  // clang-format off
      "\n"
      "std::unique_ptr<$idempotency_class_name$>\n"
      "    MakeDefault$idempotency_class_name$() {\n"
      "  return absl::make_unique<$idempotency_class_name$>();\n"
      "}\n");
  // clang-format on

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
