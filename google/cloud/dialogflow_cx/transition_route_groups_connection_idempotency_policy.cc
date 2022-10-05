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
// source: google/cloud/dialogflow/cx/v3/transition_route_group.proto

#include "google/cloud/dialogflow_cx/transition_route_groups_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TransitionRouteGroupsConnectionIdempotencyPolicy::
    ~TransitionRouteGroupsConnectionIdempotencyPolicy() = default;

std::unique_ptr<TransitionRouteGroupsConnectionIdempotencyPolicy>
TransitionRouteGroupsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<TransitionRouteGroupsConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
TransitionRouteGroupsConnectionIdempotencyPolicy::ListTransitionRouteGroups(
    google::cloud::dialogflow::cx::v3::
        ListTransitionRouteGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
TransitionRouteGroupsConnectionIdempotencyPolicy::GetTransitionRouteGroup(
    google::cloud::dialogflow::cx::v3::GetTransitionRouteGroupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
TransitionRouteGroupsConnectionIdempotencyPolicy::CreateTransitionRouteGroup(
    google::cloud::dialogflow::cx::v3::
        CreateTransitionRouteGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TransitionRouteGroupsConnectionIdempotencyPolicy::UpdateTransitionRouteGroup(
    google::cloud::dialogflow::cx::v3::
        UpdateTransitionRouteGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
TransitionRouteGroupsConnectionIdempotencyPolicy::DeleteTransitionRouteGroup(
    google::cloud::dialogflow::cx::v3::
        DeleteTransitionRouteGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TransitionRouteGroupsConnectionIdempotencyPolicy>
MakeDefaultTransitionRouteGroupsConnectionIdempotencyPolicy() {
  return absl::make_unique<TransitionRouteGroupsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
