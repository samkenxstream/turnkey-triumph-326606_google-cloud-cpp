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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/hub_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

HubServiceConnectionIdempotencyPolicy::
    ~HubServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<HubServiceConnectionIdempotencyPolicy>
HubServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<HubServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency HubServiceConnectionIdempotencyPolicy::ListHubs(
    google::cloud::networkconnectivity::v1::ListHubsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::GetHub(
    google::cloud::networkconnectivity::v1::GetHubRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::CreateHub(
    google::cloud::networkconnectivity::v1::CreateHubRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::UpdateHub(
    google::cloud::networkconnectivity::v1::UpdateHubRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::DeleteHub(
    google::cloud::networkconnectivity::v1::DeleteHubRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::ListSpokes(
    google::cloud::networkconnectivity::v1::ListSpokesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::GetSpoke(
    google::cloud::networkconnectivity::v1::GetSpokeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::CreateSpoke(
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::UpdateSpoke(
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency HubServiceConnectionIdempotencyPolicy::DeleteSpoke(
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<HubServiceConnectionIdempotencyPolicy>
MakeDefaultHubServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<HubServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity
}  // namespace cloud
}  // namespace google
