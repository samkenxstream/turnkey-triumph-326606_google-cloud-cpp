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
// source: google/cloud/oslogin/v1/oslogin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_V1_OS_LOGIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_V1_OS_LOGIN_CONNECTION_H

#include "google/cloud/oslogin/v1/internal/os_login_retry_traits.h"
#include "google/cloud/oslogin/v1/os_login_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/oslogin/v1/oslogin.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace oslogin_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using OsLoginServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        oslogin_v1_internal::OsLoginServiceRetryTraits>;

using OsLoginServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        oslogin_v1_internal::OsLoginServiceRetryTraits>;

using OsLoginServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        oslogin_v1_internal::OsLoginServiceRetryTraits>;

/**
 * The `OsLoginServiceConnection` object for `OsLoginServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `OsLoginServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `OsLoginServiceClient`.
 *
 * To create a concrete instance, see `MakeOsLoginServiceConnection()`.
 *
 * For mocking, see `oslogin_v1_mocks::MockOsLoginServiceConnection`.
 */
class OsLoginServiceConnection {
 public:
  virtual ~OsLoginServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::oslogin::common::SshPublicKey>
  CreateSshPublicKey(
      google::cloud::oslogin::v1::CreateSshPublicKeyRequest const& request);

  virtual Status DeletePosixAccount(
      google::cloud::oslogin::v1::DeletePosixAccountRequest const& request);

  virtual Status DeleteSshPublicKey(
      google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request);

  virtual StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      google::cloud::oslogin::v1::GetLoginProfileRequest const& request);

  virtual StatusOr<google::cloud::oslogin::common::SshPublicKey>
  GetSshPublicKey(
      google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request);

  virtual StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request);

  virtual StatusOr<google::cloud::oslogin::common::SshPublicKey>
  UpdateSshPublicKey(
      google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request);
};

/**
 * A factory function to construct an object of type `OsLoginServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of OsLoginServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `OsLoginServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::oslogin_v1::OsLoginServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `OsLoginServiceConnection` created by
 * this function.
 */
std::shared_ptr<OsLoginServiceConnection> MakeOsLoginServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_V1_OS_LOGIN_CONNECTION_H
