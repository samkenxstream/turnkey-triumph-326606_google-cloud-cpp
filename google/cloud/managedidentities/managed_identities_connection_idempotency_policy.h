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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/managedidentities/v1/managed_identities_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace managedidentities {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ManagedIdentitiesServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ManagedIdentitiesServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ManagedIdentitiesServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateMicrosoftAdDomain(
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request);

  virtual google::cloud::Idempotency ResetAdminPassword(
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request);

  virtual google::cloud::Idempotency ListDomains(
      google::cloud::managedidentities::v1::ListDomainsRequest request);

  virtual google::cloud::Idempotency GetDomain(
      google::cloud::managedidentities::v1::GetDomainRequest const& request);

  virtual google::cloud::Idempotency UpdateDomain(
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request);

  virtual google::cloud::Idempotency DeleteDomain(
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request);

  virtual google::cloud::Idempotency AttachTrust(
      google::cloud::managedidentities::v1::AttachTrustRequest const& request);

  virtual google::cloud::Idempotency ReconfigureTrust(
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request);

  virtual google::cloud::Idempotency DetachTrust(
      google::cloud::managedidentities::v1::DetachTrustRequest const& request);

  virtual google::cloud::Idempotency ValidateTrust(
      google::cloud::managedidentities::v1::ValidateTrustRequest const&
          request);
};

std::unique_ptr<ManagedIdentitiesServiceConnectionIdempotencyPolicy>
MakeDefaultManagedIdentitiesServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_MANAGED_IDENTITIES_CONNECTION_IDEMPOTENCY_POLICY_H
