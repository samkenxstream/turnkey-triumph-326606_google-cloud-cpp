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
// source: google/cloud/dialogflow/cx/v3/version.proto

#include "google/cloud/dialogflow_cx/versions_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

VersionsConnectionIdempotencyPolicy::~VersionsConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<VersionsConnectionIdempotencyPolicy>
VersionsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<VersionsConnectionIdempotencyPolicy>(*this);
}

Idempotency VersionsConnectionIdempotencyPolicy::ListVersions(
    google::cloud::dialogflow::cx::v3::ListVersionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VersionsConnectionIdempotencyPolicy::GetVersion(
    google::cloud::dialogflow::cx::v3::GetVersionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VersionsConnectionIdempotencyPolicy::CreateVersion(
    google::cloud::dialogflow::cx::v3::CreateVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VersionsConnectionIdempotencyPolicy::UpdateVersion(
    google::cloud::dialogflow::cx::v3::UpdateVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VersionsConnectionIdempotencyPolicy::DeleteVersion(
    google::cloud::dialogflow::cx::v3::DeleteVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VersionsConnectionIdempotencyPolicy::LoadVersion(
    google::cloud::dialogflow::cx::v3::LoadVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VersionsConnectionIdempotencyPolicy::CompareVersions(
    google::cloud::dialogflow::cx::v3::CompareVersionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<VersionsConnectionIdempotencyPolicy>
MakeDefaultVersionsConnectionIdempotencyPolicy() {
  return absl::make_unique<VersionsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
