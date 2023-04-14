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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H

#include "google/cloud/dialogflow_cx/entity_types_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/internal/entity_types_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/entity_type.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using EntityTypesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_cx_internal::EntityTypesRetryTraits>;

using EntityTypesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_cx_internal::EntityTypesRetryTraits>;

using EntityTypesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_cx_internal::EntityTypesRetryTraits>;

/**
 * The `EntityTypesConnection` object for `EntityTypesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `EntityTypesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `EntityTypesClient`.
 *
 * To create a concrete instance, see `MakeEntityTypesConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockEntityTypesConnection`.
 */
class EntityTypesConnection {
 public:
  virtual ~EntityTypesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::EntityType>
  ListEntityTypes(
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
  CreateEntityType(
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const&
          request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
  UpdateEntityType(
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const&
          request);

  virtual Status DeleteEntityType(
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const&
          request);
};

/**
 * A factory function to construct an object of type `EntityTypesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of EntityTypesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `EntityTypesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::EntityTypesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `EntityTypesConnection` created by
 * this function.
 */
std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<EntityTypesConnection> MakeEntityTypesConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_ENTITY_TYPES_CONNECTION_H
