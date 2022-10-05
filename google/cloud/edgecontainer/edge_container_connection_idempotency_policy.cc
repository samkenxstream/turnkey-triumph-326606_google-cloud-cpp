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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/edge_container_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EdgeContainerConnectionIdempotencyPolicy::
    ~EdgeContainerConnectionIdempotencyPolicy() = default;

std::unique_ptr<EdgeContainerConnectionIdempotencyPolicy>
EdgeContainerConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<EdgeContainerConnectionIdempotencyPolicy>(*this);
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::ListClusters(
    google::cloud::edgecontainer::v1::ListClustersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::GetCluster(
    google::cloud::edgecontainer::v1::GetClusterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::CreateCluster(
    google::cloud::edgecontainer::v1::CreateClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::UpdateCluster(
    google::cloud::edgecontainer::v1::UpdateClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::DeleteCluster(
    google::cloud::edgecontainer::v1::DeleteClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::GenerateAccessToken(
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::ListNodePools(
    google::cloud::edgecontainer::v1::ListNodePoolsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::GetNodePool(
    google::cloud::edgecontainer::v1::GetNodePoolRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::CreateNodePool(
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::UpdateNodePool(
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::DeleteNodePool(
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::ListMachines(
    google::cloud::edgecontainer::v1::ListMachinesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::GetMachine(
    google::cloud::edgecontainer::v1::GetMachineRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::ListVpnConnections(
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::GetVpnConnection(
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::CreateVpnConnection(
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EdgeContainerConnectionIdempotencyPolicy::DeleteVpnConnection(
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<EdgeContainerConnectionIdempotencyPolicy>
MakeDefaultEdgeContainerConnectionIdempotencyPolicy() {
  return absl::make_unique<EdgeContainerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer
}  // namespace cloud
}  // namespace google
