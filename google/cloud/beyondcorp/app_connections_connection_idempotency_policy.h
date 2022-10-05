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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/beyondcorp/appconnections/v1/app_connections_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AppConnectionsServiceConnectionIdempotencyPolicy {
 public:
  virtual ~AppConnectionsServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AppConnectionsServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListAppConnections(
      google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
          request);

  virtual google::cloud::Idempotency GetAppConnection(
      google::cloud::beyondcorp::appconnections::v1::
          GetAppConnectionRequest const& request);

  virtual google::cloud::Idempotency CreateAppConnection(
      google::cloud::beyondcorp::appconnections::v1::
          CreateAppConnectionRequest const& request);

  virtual google::cloud::Idempotency UpdateAppConnection(
      google::cloud::beyondcorp::appconnections::v1::
          UpdateAppConnectionRequest const& request);

  virtual google::cloud::Idempotency DeleteAppConnection(
      google::cloud::beyondcorp::appconnections::v1::
          DeleteAppConnectionRequest const& request);

  virtual google::cloud::Idempotency ResolveAppConnections(
      google::cloud::beyondcorp::appconnections::v1::
          ResolveAppConnectionsRequest request);
};

std::unique_ptr<AppConnectionsServiceConnectionIdempotencyPolicy>
MakeDefaultAppConnectionsServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APP_CONNECTIONS_CONNECTION_IDEMPOTENCY_POLICY_H
