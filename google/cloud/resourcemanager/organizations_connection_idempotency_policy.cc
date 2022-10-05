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
// source: google/cloud/resourcemanager/v3/organizations.proto

#include "google/cloud/resourcemanager/organizations_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

OrganizationsConnectionIdempotencyPolicy::
    ~OrganizationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<OrganizationsConnectionIdempotencyPolicy>
OrganizationsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<OrganizationsConnectionIdempotencyPolicy>(*this);
}

Idempotency OrganizationsConnectionIdempotencyPolicy::GetOrganization(
    google::cloud::resourcemanager::v3::GetOrganizationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency OrganizationsConnectionIdempotencyPolicy::SearchOrganizations(
    google::cloud::resourcemanager::v3::SearchOrganizationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency OrganizationsConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency OrganizationsConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency OrganizationsConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<OrganizationsConnectionIdempotencyPolicy>
MakeDefaultOrganizationsConnectionIdempotencyPolicy() {
  return absl::make_unique<OrganizationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google
