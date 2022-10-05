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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#include "google/cloud/dialogflow_cx/entity_types_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EntityTypesConnectionIdempotencyPolicy::
    ~EntityTypesConnectionIdempotencyPolicy() = default;

std::unique_ptr<EntityTypesConnectionIdempotencyPolicy>
EntityTypesConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<EntityTypesConnectionIdempotencyPolicy>(*this);
}

Idempotency EntityTypesConnectionIdempotencyPolicy::ListEntityTypes(
    google::cloud::dialogflow::cx::v3::ListEntityTypesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EntityTypesConnectionIdempotencyPolicy::GetEntityType(
    google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EntityTypesConnectionIdempotencyPolicy::CreateEntityType(
    google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EntityTypesConnectionIdempotencyPolicy::UpdateEntityType(
    google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EntityTypesConnectionIdempotencyPolicy::DeleteEntityType(
    google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<EntityTypesConnectionIdempotencyPolicy>
MakeDefaultEntityTypesConnectionIdempotencyPolicy() {
  return absl::make_unique<EntityTypesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
