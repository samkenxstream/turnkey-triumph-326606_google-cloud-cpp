// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_BIGTABLE_TABLE_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_BIGTABLE_TABLE_ADMIN_CONNECTION_H

#include "google/cloud/bigtable/admin/bigtable_table_admin_connection_idempotency_policy.h"
#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/bigtable/admin/v2/bigtable_table_admin.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using BigtableTableAdminRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        bigtable_admin_internal::BigtableTableAdminRetryTraits>;

using BigtableTableAdminLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        bigtable_admin_internal::BigtableTableAdminRetryTraits>;

using BigtableTableAdminLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        bigtable_admin_internal::BigtableTableAdminRetryTraits>;

/**
 * The `BigtableTableAdminConnection` object for `BigtableTableAdminClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BigtableTableAdminClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `BigtableTableAdminClient`.
 *
 * To create a concrete instance, see `MakeBigtableTableAdminConnection()`.
 *
 * For mocking, see `bigtable_admin_mocks::MockBigtableTableAdminConnection`.
 */
class BigtableTableAdminConnection {
 public:
  virtual ~BigtableTableAdminConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::bigtable::admin::v2::Table> CreateTable(
      google::bigtable::admin::v2::CreateTableRequest const& request);

  virtual StreamRange<google::bigtable::admin::v2::Table> ListTables(
      google::bigtable::admin::v2::ListTablesRequest request);

  virtual StatusOr<google::bigtable::admin::v2::Table> GetTable(
      google::bigtable::admin::v2::GetTableRequest const& request);

  virtual future<StatusOr<google::bigtable::admin::v2::Table>> UpdateTable(
      google::bigtable::admin::v2::UpdateTableRequest const& request);

  virtual Status DeleteTable(
      google::bigtable::admin::v2::DeleteTableRequest const& request);

  virtual future<StatusOr<google::bigtable::admin::v2::Table>> UndeleteTable(
      google::bigtable::admin::v2::UndeleteTableRequest const& request);

  virtual StatusOr<google::bigtable::admin::v2::Table> ModifyColumnFamilies(
      google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request);

  virtual Status DropRowRange(
      google::bigtable::admin::v2::DropRowRangeRequest const& request);

  virtual StatusOr<
      google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
  GenerateConsistencyToken(
      google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
          request);

  virtual StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
  CheckConsistency(
      google::bigtable::admin::v2::CheckConsistencyRequest const& request);

  virtual future<StatusOr<google::bigtable::admin::v2::Backup>> CreateBackup(
      google::bigtable::admin::v2::CreateBackupRequest const& request);

  virtual StatusOr<google::bigtable::admin::v2::Backup> GetBackup(
      google::bigtable::admin::v2::GetBackupRequest const& request);

  virtual StatusOr<google::bigtable::admin::v2::Backup> UpdateBackup(
      google::bigtable::admin::v2::UpdateBackupRequest const& request);

  virtual Status DeleteBackup(
      google::bigtable::admin::v2::DeleteBackupRequest const& request);

  virtual StreamRange<google::bigtable::admin::v2::Backup> ListBackups(
      google::bigtable::admin::v2::ListBackupsRequest request);

  virtual future<StatusOr<google::bigtable::admin::v2::Table>> RestoreTable(
      google::bigtable::admin::v2::RestoreTableRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual future<
      StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
  AsyncCheckConsistency(
      google::bigtable::admin::v2::CheckConsistencyRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `BigtableTableAdminConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * BigtableTableAdminClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BigtableTableAdminConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::bigtable_admin::BigtableTableAdminPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BigtableTableAdminConnection`
 * created by this function.
 */
std::shared_ptr<BigtableTableAdminConnection> MakeBigtableTableAdminConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_BIGTABLE_TABLE_ADMIN_CONNECTION_H
