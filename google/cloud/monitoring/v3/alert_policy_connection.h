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
// source: google/monitoring/v3/alert_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_ALERT_POLICY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_ALERT_POLICY_CONNECTION_H

#include "google/cloud/monitoring/v3/alert_policy_connection_idempotency_policy.h"
#include "google/cloud/monitoring/v3/internal/alert_policy_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/alert_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AlertPolicyServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        monitoring_v3_internal::AlertPolicyServiceRetryTraits>;

using AlertPolicyServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        monitoring_v3_internal::AlertPolicyServiceRetryTraits>;

using AlertPolicyServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        monitoring_v3_internal::AlertPolicyServiceRetryTraits>;

/**
 * The `AlertPolicyServiceConnection` object for `AlertPolicyServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AlertPolicyServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AlertPolicyServiceClient`.
 *
 * To create a concrete instance, see `MakeAlertPolicyServiceConnection()`.
 *
 * For mocking, see `monitoring_v3_mocks::MockAlertPolicyServiceConnection`.
 */
class AlertPolicyServiceConnection {
 public:
  virtual ~AlertPolicyServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::monitoring::v3::AlertPolicy> ListAlertPolicies(
      google::monitoring::v3::ListAlertPoliciesRequest request);

  virtual StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      google::monitoring::v3::GetAlertPolicyRequest const& request);

  virtual StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      google::monitoring::v3::CreateAlertPolicyRequest const& request);

  virtual Status DeleteAlertPolicy(
      google::monitoring::v3::DeleteAlertPolicyRequest const& request);

  virtual StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      google::monitoring::v3::UpdateAlertPolicyRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `AlertPolicyServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AlertPolicyServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AlertPolicyServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::monitoring_v3::AlertPolicyServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AlertPolicyServiceConnection`
 * created by this function.
 */
std::shared_ptr<AlertPolicyServiceConnection> MakeAlertPolicyServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_ALERT_POLICY_CONNECTION_H
