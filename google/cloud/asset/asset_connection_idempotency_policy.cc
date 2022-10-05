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
// source: google/cloud/asset/v1/asset_service.proto

#include "google/cloud/asset/asset_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace asset {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AssetServiceConnectionIdempotencyPolicy::
    ~AssetServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<AssetServiceConnectionIdempotencyPolicy>
AssetServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<AssetServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency AssetServiceConnectionIdempotencyPolicy::ExportAssets(
    google::cloud::asset::v1::ExportAssetsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::ListAssets(
    google::cloud::asset::v1::ListAssetsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::BatchGetAssetsHistory(
    google::cloud::asset::v1::BatchGetAssetsHistoryRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::CreateFeed(
    google::cloud::asset::v1::CreateFeedRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::GetFeed(
    google::cloud::asset::v1::GetFeedRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::ListFeeds(
    google::cloud::asset::v1::ListFeedsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::UpdateFeed(
    google::cloud::asset::v1::UpdateFeedRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::DeleteFeed(
    google::cloud::asset::v1::DeleteFeedRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::SearchAllResources(
    google::cloud::asset::v1::SearchAllResourcesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::SearchAllIamPolicies(
    google::cloud::asset::v1::SearchAllIamPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::AnalyzeIamPolicy(
    google::cloud::asset::v1::AnalyzeIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
AssetServiceConnectionIdempotencyPolicy::AnalyzeIamPolicyLongrunning(
    google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::AnalyzeMove(
    google::cloud::asset::v1::AnalyzeMoveRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::QueryAssets(
    google::cloud::asset::v1::QueryAssetsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::CreateSavedQuery(
    google::cloud::asset::v1::CreateSavedQueryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::GetSavedQuery(
    google::cloud::asset::v1::GetSavedQueryRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::ListSavedQueries(
    google::cloud::asset::v1::ListSavedQueriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::UpdateSavedQuery(
    google::cloud::asset::v1::UpdateSavedQueryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AssetServiceConnectionIdempotencyPolicy::DeleteSavedQuery(
    google::cloud::asset::v1::DeleteSavedQueryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AssetServiceConnectionIdempotencyPolicy::BatchGetEffectiveIamPolicies(
    google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<AssetServiceConnectionIdempotencyPolicy>
MakeDefaultAssetServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<AssetServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset
}  // namespace cloud
}  // namespace google
