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
// source: google/cloud/optimization/v1/fleet_routing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_FLEET_ROUTING_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_FLEET_ROUTING_OPTIONS_H

#include "google/cloud/optimization/fleet_routing_connection.h"
#include "google/cloud/optimization/fleet_routing_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace optimization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// Option to use with `google::cloud::Options`.
struct FleetRoutingRetryPolicyOption {
  using Type = std::shared_ptr<FleetRoutingRetryPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct FleetRoutingBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct FleetRoutingPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct FleetRoutingConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<FleetRoutingConnectionIdempotencyPolicy>;
};

using FleetRoutingPolicyOptionList =
    OptionList<FleetRoutingRetryPolicyOption, FleetRoutingBackoffPolicyOption,
               FleetRoutingPollingPolicyOption,
               FleetRoutingConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_FLEET_ROUTING_OPTIONS_H
