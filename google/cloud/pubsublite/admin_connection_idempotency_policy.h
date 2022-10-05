// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/pubsublite/v1/admin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AdminServiceConnectionIdempotencyPolicy {
 public:
  virtual ~AdminServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AdminServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateTopic(
      google::cloud::pubsublite::v1::CreateTopicRequest const& request);

  virtual google::cloud::Idempotency GetTopic(
      google::cloud::pubsublite::v1::GetTopicRequest const& request);

  virtual google::cloud::Idempotency GetTopicPartitions(
      google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request);

  virtual google::cloud::Idempotency ListTopics(
      google::cloud::pubsublite::v1::ListTopicsRequest request);

  virtual google::cloud::Idempotency UpdateTopic(
      google::cloud::pubsublite::v1::UpdateTopicRequest const& request);

  virtual google::cloud::Idempotency DeleteTopic(
      google::cloud::pubsublite::v1::DeleteTopicRequest const& request);

  virtual google::cloud::Idempotency ListTopicSubscriptions(
      google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest request);

  virtual google::cloud::Idempotency CreateSubscription(
      google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request);

  virtual google::cloud::Idempotency GetSubscription(
      google::cloud::pubsublite::v1::GetSubscriptionRequest const& request);

  virtual google::cloud::Idempotency ListSubscriptions(
      google::cloud::pubsublite::v1::ListSubscriptionsRequest request);

  virtual google::cloud::Idempotency UpdateSubscription(
      google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request);

  virtual google::cloud::Idempotency DeleteSubscription(
      google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request);

  virtual google::cloud::Idempotency SeekSubscription(
      google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request);

  virtual google::cloud::Idempotency CreateReservation(
      google::cloud::pubsublite::v1::CreateReservationRequest const& request);

  virtual google::cloud::Idempotency GetReservation(
      google::cloud::pubsublite::v1::GetReservationRequest const& request);

  virtual google::cloud::Idempotency ListReservations(
      google::cloud::pubsublite::v1::ListReservationsRequest request);

  virtual google::cloud::Idempotency UpdateReservation(
      google::cloud::pubsublite::v1::UpdateReservationRequest const& request);

  virtual google::cloud::Idempotency DeleteReservation(
      google::cloud::pubsublite::v1::DeleteReservationRequest const& request);

  virtual google::cloud::Idempotency ListReservationTopics(
      google::cloud::pubsublite::v1::ListReservationTopicsRequest request);
};

std::unique_ptr<AdminServiceConnectionIdempotencyPolicy>
MakeDefaultAdminServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_ADMIN_CONNECTION_IDEMPOTENCY_POLICY_H
