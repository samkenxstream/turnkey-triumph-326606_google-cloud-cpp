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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/api_keys_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace apikeys {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ApiKeysConnectionIdempotencyPolicy::~ApiKeysConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<ApiKeysConnectionIdempotencyPolicy>
ApiKeysConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ApiKeysConnectionIdempotencyPolicy>(*this);
}

Idempotency ApiKeysConnectionIdempotencyPolicy::CreateKey(
    google::api::apikeys::v2::CreateKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::ListKeys(
    google::api::apikeys::v2::ListKeysRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::GetKey(
    google::api::apikeys::v2::GetKeyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::GetKeyString(
    google::api::apikeys::v2::GetKeyStringRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::UpdateKey(
    google::api::apikeys::v2::UpdateKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::DeleteKey(
    google::api::apikeys::v2::DeleteKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::UndeleteKey(
    google::api::apikeys::v2::UndeleteKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ApiKeysConnectionIdempotencyPolicy::LookupKey(
    google::api::apikeys::v2::LookupKeyRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ApiKeysConnectionIdempotencyPolicy>
MakeDefaultApiKeysConnectionIdempotencyPolicy() {
  return absl::make_unique<ApiKeysConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys
}  // namespace cloud
}  // namespace google
