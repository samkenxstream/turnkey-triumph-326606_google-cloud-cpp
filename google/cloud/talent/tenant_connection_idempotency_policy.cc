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
// source: google/cloud/talent/v4/tenant_service.proto

#include "google/cloud/talent/tenant_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TenantServiceConnectionIdempotencyPolicy::
    ~TenantServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<TenantServiceConnectionIdempotencyPolicy>
TenantServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<TenantServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency TenantServiceConnectionIdempotencyPolicy::CreateTenant(
    google::cloud::talent::v4::CreateTenantRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TenantServiceConnectionIdempotencyPolicy::GetTenant(
    google::cloud::talent::v4::GetTenantRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TenantServiceConnectionIdempotencyPolicy::UpdateTenant(
    google::cloud::talent::v4::UpdateTenantRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TenantServiceConnectionIdempotencyPolicy::DeleteTenant(
    google::cloud::talent::v4::DeleteTenantRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TenantServiceConnectionIdempotencyPolicy::ListTenants(
    google::cloud::talent::v4::ListTenantsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<TenantServiceConnectionIdempotencyPolicy>
MakeDefaultTenantServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<TenantServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google
