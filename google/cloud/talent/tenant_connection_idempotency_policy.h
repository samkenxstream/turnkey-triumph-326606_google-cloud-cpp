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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_TENANT_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_TENANT_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/talent/v4/tenant_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TenantServiceConnectionIdempotencyPolicy {
 public:
  virtual ~TenantServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TenantServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateTenant(
      google::cloud::talent::v4::CreateTenantRequest const& request);

  virtual google::cloud::Idempotency GetTenant(
      google::cloud::talent::v4::GetTenantRequest const& request);

  virtual google::cloud::Idempotency UpdateTenant(
      google::cloud::talent::v4::UpdateTenantRequest const& request);

  virtual google::cloud::Idempotency DeleteTenant(
      google::cloud::talent::v4::DeleteTenantRequest const& request);

  virtual google::cloud::Idempotency ListTenants(
      google::cloud::talent::v4::ListTenantsRequest request);
};

std::unique_ptr<TenantServiceConnectionIdempotencyPolicy>
MakeDefaultTenantServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_TENANT_CONNECTION_IDEMPOTENCY_POLICY_H
