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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#include "google/cloud/gameservices/game_server_clusters_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GameServerClustersServiceConnectionIdempotencyPolicy::
    ~GameServerClustersServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<GameServerClustersServiceConnectionIdempotencyPolicy>
GameServerClustersServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<
      GameServerClustersServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
GameServerClustersServiceConnectionIdempotencyPolicy::ListGameServerClusters(
    google::cloud::gaming::v1::ListGameServerClustersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
GameServerClustersServiceConnectionIdempotencyPolicy::GetGameServerCluster(
    google::cloud::gaming::v1::GetGameServerClusterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
GameServerClustersServiceConnectionIdempotencyPolicy::CreateGameServerCluster(
    google::cloud::gaming::v1::CreateGameServerClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerClustersServiceConnectionIdempotencyPolicy::
    PreviewCreateGameServerCluster(
        google::cloud::gaming::v1::
            PreviewCreateGameServerClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
GameServerClustersServiceConnectionIdempotencyPolicy::DeleteGameServerCluster(
    google::cloud::gaming::v1::DeleteGameServerClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerClustersServiceConnectionIdempotencyPolicy::
    PreviewDeleteGameServerCluster(
        google::cloud::gaming::v1::
            PreviewDeleteGameServerClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
GameServerClustersServiceConnectionIdempotencyPolicy::UpdateGameServerCluster(
    google::cloud::gaming::v1::UpdateGameServerClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency GameServerClustersServiceConnectionIdempotencyPolicy::
    PreviewUpdateGameServerCluster(
        google::cloud::gaming::v1::
            PreviewUpdateGameServerClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GameServerClustersServiceConnectionIdempotencyPolicy>
MakeDefaultGameServerClustersServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      GameServerClustersServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google
