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
// source: google/cloud/dataplex/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_DATAPLEX_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_DATAPLEX_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dataplex/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataplexServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DataplexServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataplexServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateLake(
      google::cloud::dataplex::v1::CreateLakeRequest const& request);

  virtual google::cloud::Idempotency UpdateLake(
      google::cloud::dataplex::v1::UpdateLakeRequest const& request);

  virtual google::cloud::Idempotency DeleteLake(
      google::cloud::dataplex::v1::DeleteLakeRequest const& request);

  virtual google::cloud::Idempotency ListLakes(
      google::cloud::dataplex::v1::ListLakesRequest request);

  virtual google::cloud::Idempotency GetLake(
      google::cloud::dataplex::v1::GetLakeRequest const& request);

  virtual google::cloud::Idempotency ListLakeActions(
      google::cloud::dataplex::v1::ListLakeActionsRequest request);

  virtual google::cloud::Idempotency CreateZone(
      google::cloud::dataplex::v1::CreateZoneRequest const& request);

  virtual google::cloud::Idempotency UpdateZone(
      google::cloud::dataplex::v1::UpdateZoneRequest const& request);

  virtual google::cloud::Idempotency DeleteZone(
      google::cloud::dataplex::v1::DeleteZoneRequest const& request);

  virtual google::cloud::Idempotency ListZones(
      google::cloud::dataplex::v1::ListZonesRequest request);

  virtual google::cloud::Idempotency GetZone(
      google::cloud::dataplex::v1::GetZoneRequest const& request);

  virtual google::cloud::Idempotency ListZoneActions(
      google::cloud::dataplex::v1::ListZoneActionsRequest request);

  virtual google::cloud::Idempotency CreateAsset(
      google::cloud::dataplex::v1::CreateAssetRequest const& request);

  virtual google::cloud::Idempotency UpdateAsset(
      google::cloud::dataplex::v1::UpdateAssetRequest const& request);

  virtual google::cloud::Idempotency DeleteAsset(
      google::cloud::dataplex::v1::DeleteAssetRequest const& request);

  virtual google::cloud::Idempotency ListAssets(
      google::cloud::dataplex::v1::ListAssetsRequest request);

  virtual google::cloud::Idempotency GetAsset(
      google::cloud::dataplex::v1::GetAssetRequest const& request);

  virtual google::cloud::Idempotency ListAssetActions(
      google::cloud::dataplex::v1::ListAssetActionsRequest request);

  virtual google::cloud::Idempotency CreateTask(
      google::cloud::dataplex::v1::CreateTaskRequest const& request);

  virtual google::cloud::Idempotency UpdateTask(
      google::cloud::dataplex::v1::UpdateTaskRequest const& request);

  virtual google::cloud::Idempotency DeleteTask(
      google::cloud::dataplex::v1::DeleteTaskRequest const& request);

  virtual google::cloud::Idempotency ListTasks(
      google::cloud::dataplex::v1::ListTasksRequest request);

  virtual google::cloud::Idempotency GetTask(
      google::cloud::dataplex::v1::GetTaskRequest const& request);

  virtual google::cloud::Idempotency ListJobs(
      google::cloud::dataplex::v1::ListJobsRequest request);

  virtual google::cloud::Idempotency GetJob(
      google::cloud::dataplex::v1::GetJobRequest const& request);

  virtual google::cloud::Idempotency CancelJob(
      google::cloud::dataplex::v1::CancelJobRequest const& request);

  virtual google::cloud::Idempotency CreateEnvironment(
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request);

  virtual google::cloud::Idempotency UpdateEnvironment(
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request);

  virtual google::cloud::Idempotency DeleteEnvironment(
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request);

  virtual google::cloud::Idempotency ListEnvironments(
      google::cloud::dataplex::v1::ListEnvironmentsRequest request);

  virtual google::cloud::Idempotency GetEnvironment(
      google::cloud::dataplex::v1::GetEnvironmentRequest const& request);

  virtual google::cloud::Idempotency ListSessions(
      google::cloud::dataplex::v1::ListSessionsRequest request);
};

std::unique_ptr<DataplexServiceConnectionIdempotencyPolicy>
MakeDefaultDataplexServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_DATAPLEX_CONNECTION_IDEMPOTENCY_POLICY_H
