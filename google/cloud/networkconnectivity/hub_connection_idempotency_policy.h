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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_HUB_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_HUB_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/networkconnectivity/v1/hub.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class HubServiceConnectionIdempotencyPolicy {
 public:
  virtual ~HubServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<HubServiceConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListHubs(
      google::cloud::networkconnectivity::v1::ListHubsRequest request);

  virtual google::cloud::Idempotency GetHub(
      google::cloud::networkconnectivity::v1::GetHubRequest const& request);

  virtual google::cloud::Idempotency CreateHub(
      google::cloud::networkconnectivity::v1::CreateHubRequest const& request);

  virtual google::cloud::Idempotency UpdateHub(
      google::cloud::networkconnectivity::v1::UpdateHubRequest const& request);

  virtual google::cloud::Idempotency DeleteHub(
      google::cloud::networkconnectivity::v1::DeleteHubRequest const& request);

  virtual google::cloud::Idempotency ListSpokes(
      google::cloud::networkconnectivity::v1::ListSpokesRequest request);

  virtual google::cloud::Idempotency GetSpoke(
      google::cloud::networkconnectivity::v1::GetSpokeRequest const& request);

  virtual google::cloud::Idempotency CreateSpoke(
      google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
          request);

  virtual google::cloud::Idempotency UpdateSpoke(
      google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
          request);

  virtual google::cloud::Idempotency DeleteSpoke(
      google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
          request);
};

std::unique_ptr<HubServiceConnectionIdempotencyPolicy>
MakeDefaultHubServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_HUB_CONNECTION_IDEMPOTENCY_POLICY_H
