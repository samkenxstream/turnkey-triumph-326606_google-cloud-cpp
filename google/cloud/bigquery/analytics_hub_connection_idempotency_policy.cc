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

#include "google/cloud/bigquery/analytics_hub_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AnalyticsHubServiceConnectionIdempotencyPolicy::
    ~AnalyticsHubServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<AnalyticsHubServiceConnectionIdempotencyPolicy>
AnalyticsHubServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<AnalyticsHubServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::ListDataExchanges(
    google::cloud::bigquery::analyticshub::v1::
        ListDataExchangesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
AnalyticsHubServiceConnectionIdempotencyPolicy::ListOrgDataExchanges(
    google::cloud::bigquery::analyticshub::v1::
        ListOrgDataExchangesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::GetDataExchange(
    google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::CreateDataExchange(
    google::cloud::bigquery::analyticshub::v1::
        CreateDataExchangeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::UpdateDataExchange(
    google::cloud::bigquery::analyticshub::v1::
        UpdateDataExchangeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::DeleteDataExchange(
    google::cloud::bigquery::analyticshub::v1::
        DeleteDataExchangeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::ListListings(
    google::cloud::bigquery::analyticshub::v1::ListListingsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::GetListing(
    google::cloud::bigquery::analyticshub::v1::GetListingRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::CreateListing(
    google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::UpdateListing(
    google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::DeleteListing(
    google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::SubscribeListing(
    google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency AnalyticsHubServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<AnalyticsHubServiceConnectionIdempotencyPolicy>
MakeDefaultAnalyticsHubServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<AnalyticsHubServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
