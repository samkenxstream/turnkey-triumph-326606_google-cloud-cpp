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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICS_HUB_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICS_HUB_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/analyticshub/v1/analyticshub.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AnalyticsHubServiceConnectionIdempotencyPolicy {
 public:
  virtual ~AnalyticsHubServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AnalyticsHubServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest
          request);

  virtual google::cloud::Idempotency ListOrgDataExchanges(
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesRequest
          request);

  virtual google::cloud::Idempotency GetDataExchange(
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request);

  virtual google::cloud::Idempotency CreateDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          CreateDataExchangeRequest const& request);

  virtual google::cloud::Idempotency UpdateDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          UpdateDataExchangeRequest const& request);

  virtual google::cloud::Idempotency DeleteDataExchange(
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request);

  virtual google::cloud::Idempotency ListListings(
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest request);

  virtual google::cloud::Idempotency GetListing(
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
          request);

  virtual google::cloud::Idempotency CreateListing(
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request);

  virtual google::cloud::Idempotency UpdateListing(
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request);

  virtual google::cloud::Idempotency DeleteListing(
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request);

  virtual google::cloud::Idempotency SubscribeListing(
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);
};

std::unique_ptr<AnalyticsHubServiceConnectionIdempotencyPolicy>
MakeDefaultAnalyticsHubServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICS_HUB_CONNECTION_IDEMPOTENCY_POLICY_H
