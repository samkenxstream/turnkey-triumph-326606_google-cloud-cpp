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
// source: google/cloud/gaming/v1/game_server_deployments_service.proto

#include "google/cloud/gameservices/game_server_deployments_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    ~GameServerDeploymentsServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<GameServerDeploymentsServiceConnectionIdempotencyPolicy>
GameServerDeploymentsServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<
      GameServerDeploymentsServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    ListGameServerDeployments(google::cloud::gaming::v1::
                                  ListGameServerDeploymentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    GetGameServerDeployment(
        google::cloud::gaming::v1::GetGameServerDeploymentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    CreateGameServerDeployment(
        google::cloud::gaming::v1::CreateGameServerDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    DeleteGameServerDeployment(
        google::cloud::gaming::v1::DeleteGameServerDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    UpdateGameServerDeployment(
        google::cloud::gaming::v1::UpdateGameServerDeploymentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    GetGameServerDeploymentRollout(
        google::cloud::gaming::v1::
            GetGameServerDeploymentRolloutRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    UpdateGameServerDeploymentRollout(
        google::cloud::gaming::v1::
            UpdateGameServerDeploymentRolloutRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerDeploymentsServiceConnectionIdempotencyPolicy::
    PreviewGameServerDeploymentRollout(
        google::cloud::gaming::v1::
            PreviewGameServerDeploymentRolloutRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
GameServerDeploymentsServiceConnectionIdempotencyPolicy::FetchDeploymentState(
    google::cloud::gaming::v1::FetchDeploymentStateRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GameServerDeploymentsServiceConnectionIdempotencyPolicy>
MakeDefaultGameServerDeploymentsServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      GameServerDeploymentsServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google
