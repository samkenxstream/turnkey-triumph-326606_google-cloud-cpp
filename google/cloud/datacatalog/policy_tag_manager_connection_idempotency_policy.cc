// Copyright 2022 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#include "google/cloud/datacatalog/policy_tag_manager_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

PolicyTagManagerConnectionIdempotencyPolicy::
    ~PolicyTagManagerConnectionIdempotencyPolicy() = default;

std::unique_ptr<PolicyTagManagerConnectionIdempotencyPolicy>
PolicyTagManagerConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<PolicyTagManagerConnectionIdempotencyPolicy>(*this);
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::CreateTaxonomy(
    google::cloud::datacatalog::v1::CreateTaxonomyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::DeleteTaxonomy(
    google::cloud::datacatalog::v1::DeleteTaxonomyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::UpdateTaxonomy(
    google::cloud::datacatalog::v1::UpdateTaxonomyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::ListTaxonomies(
    google::cloud::datacatalog::v1::ListTaxonomiesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::GetTaxonomy(
    google::cloud::datacatalog::v1::GetTaxonomyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::CreatePolicyTag(
    google::cloud::datacatalog::v1::CreatePolicyTagRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::DeletePolicyTag(
    google::cloud::datacatalog::v1::DeletePolicyTagRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::UpdatePolicyTag(
    google::cloud::datacatalog::v1::UpdatePolicyTagRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::ListPolicyTags(
    google::cloud::datacatalog::v1::ListPolicyTagsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::GetPolicyTag(
    google::cloud::datacatalog::v1::GetPolicyTagRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency PolicyTagManagerConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<PolicyTagManagerConnectionIdempotencyPolicy>
MakeDefaultPolicyTagManagerConnectionIdempotencyPolicy() {
  return absl::make_unique<PolicyTagManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google
