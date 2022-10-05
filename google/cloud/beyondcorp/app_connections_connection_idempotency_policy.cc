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

#include "google/cloud/beyondcorp/app_connections_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AppConnectionsServiceConnectionIdempotencyPolicy::
    ~AppConnectionsServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<AppConnectionsServiceConnectionIdempotencyPolicy>
AppConnectionsServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<AppConnectionsServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
AppConnectionsServiceConnectionIdempotencyPolicy::ListAppConnections(
    google::cloud::beyondcorp::appconnections::v1::
        ListAppConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppConnectionsServiceConnectionIdempotencyPolicy::GetAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
AppConnectionsServiceConnectionIdempotencyPolicy::CreateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AppConnectionsServiceConnectionIdempotencyPolicy::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AppConnectionsServiceConnectionIdempotencyPolicy::DeleteAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AppConnectionsServiceConnectionIdempotencyPolicy::ResolveAppConnections(
    google::cloud::beyondcorp::appconnections::v1::
        ResolveAppConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<AppConnectionsServiceConnectionIdempotencyPolicy>
MakeDefaultAppConnectionsServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<AppConnectionsServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp
}  // namespace cloud
}  // namespace google
