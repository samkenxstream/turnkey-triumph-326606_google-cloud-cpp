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
// source: google/cloud/redis/v1/cloud_redis.proto

#include "google/cloud/redis/cloud_redis_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace redis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudRedisConnectionIdempotencyPolicy::
    ~CloudRedisConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudRedisConnectionIdempotencyPolicy>
CloudRedisConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<CloudRedisConnectionIdempotencyPolicy>(*this);
}

Idempotency CloudRedisConnectionIdempotencyPolicy::ListInstances(
    google::cloud::redis::v1::ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::GetInstance(
    google::cloud::redis::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::GetInstanceAuthString(
    google::cloud::redis::v1::GetInstanceAuthStringRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::CreateInstance(
    google::cloud::redis::v1::CreateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::UpdateInstance(
    google::cloud::redis::v1::UpdateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::UpgradeInstance(
    google::cloud::redis::v1::UpgradeInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::ImportInstance(
    google::cloud::redis::v1::ImportInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::ExportInstance(
    google::cloud::redis::v1::ExportInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::FailoverInstance(
    google::cloud::redis::v1::FailoverInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::DeleteInstance(
    google::cloud::redis::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudRedisConnectionIdempotencyPolicy::RescheduleMaintenance(
    google::cloud::redis::v1::RescheduleMaintenanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<CloudRedisConnectionIdempotencyPolicy>
MakeDefaultCloudRedisConnectionIdempotencyPolicy() {
  return absl::make_unique<CloudRedisConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis
}  // namespace cloud
}  // namespace google
