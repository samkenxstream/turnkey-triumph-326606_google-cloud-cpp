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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/datacatalog/v1/policytagmanager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerConnectionIdempotencyPolicy {
 public:
  virtual ~PolicyTagManagerConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<PolicyTagManagerConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateTaxonomy(
      google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request);

  virtual google::cloud::Idempotency DeleteTaxonomy(
      google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request);

  virtual google::cloud::Idempotency UpdateTaxonomy(
      google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request);

  virtual google::cloud::Idempotency ListTaxonomies(
      google::cloud::datacatalog::v1::ListTaxonomiesRequest request);

  virtual google::cloud::Idempotency GetTaxonomy(
      google::cloud::datacatalog::v1::GetTaxonomyRequest const& request);

  virtual google::cloud::Idempotency CreatePolicyTag(
      google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request);

  virtual google::cloud::Idempotency DeletePolicyTag(
      google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request);

  virtual google::cloud::Idempotency UpdatePolicyTag(
      google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request);

  virtual google::cloud::Idempotency ListPolicyTags(
      google::cloud::datacatalog::v1::ListPolicyTagsRequest request);

  virtual google::cloud::Idempotency GetPolicyTag(
      google::cloud::datacatalog::v1::GetPolicyTagRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);
};

std::unique_ptr<PolicyTagManagerConnectionIdempotencyPolicy>
MakeDefaultPolicyTagManagerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_POLICY_TAG_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
