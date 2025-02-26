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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_V1_OS_CONFIG_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_V1_OS_CONFIG_CONNECTION_H

#include "google/cloud/osconfig/v1/internal/os_config_retry_traits.h"
#include "google/cloud/osconfig/v1/os_config_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/osconfig/v1/osconfig_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using OsConfigServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        osconfig_v1_internal::OsConfigServiceRetryTraits>;

using OsConfigServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        osconfig_v1_internal::OsConfigServiceRetryTraits>;

using OsConfigServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        osconfig_v1_internal::OsConfigServiceRetryTraits>;

/**
 * The `OsConfigServiceConnection` object for `OsConfigServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `OsConfigServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `OsConfigServiceClient`.
 *
 * To create a concrete instance, see `MakeOsConfigServiceConnection()`.
 *
 * For mocking, see `osconfig_v1_mocks::MockOsConfigServiceConnection`.
 */
class OsConfigServiceConnection {
 public:
  virtual ~OsConfigServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::osconfig::v1::PatchJob> ExecutePatchJob(
      google::cloud::osconfig::v1::ExecutePatchJobRequest const& request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchJob> GetPatchJob(
      google::cloud::osconfig::v1::GetPatchJobRequest const& request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchJob> CancelPatchJob(
      google::cloud::osconfig::v1::CancelPatchJobRequest const& request);

  virtual StreamRange<google::cloud::osconfig::v1::PatchJob> ListPatchJobs(
      google::cloud::osconfig::v1::ListPatchJobsRequest request);

  virtual StreamRange<google::cloud::osconfig::v1::PatchJobInstanceDetails>
  ListPatchJobInstanceDetails(
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  CreatePatchDeployment(
      google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  GetPatchDeployment(
      google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request);

  virtual StreamRange<google::cloud::osconfig::v1::PatchDeployment>
  ListPatchDeployments(
      google::cloud::osconfig::v1::ListPatchDeploymentsRequest request);

  virtual Status DeletePatchDeployment(
      google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  UpdatePatchDeployment(
      google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  PausePatchDeployment(
      google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request);

  virtual StatusOr<google::cloud::osconfig::v1::PatchDeployment>
  ResumePatchDeployment(
      google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `OsConfigServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of OsConfigServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `OsConfigServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::osconfig_v1::OsConfigServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `OsConfigServiceConnection` created
 * by this function.
 */
std::shared_ptr<OsConfigServiceConnection> MakeOsConfigServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_V1_OS_CONFIG_CONNECTION_H
