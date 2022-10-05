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
// source: google/cloud/retail/v2/search_service.proto

#include "google/cloud/retail/search_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SearchServiceConnectionIdempotencyPolicy::
    ~SearchServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<SearchServiceConnectionIdempotencyPolicy>
SearchServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<SearchServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency SearchServiceConnectionIdempotencyPolicy::Search(
    google::cloud::retail::v2::SearchRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<SearchServiceConnectionIdempotencyPolicy>
MakeDefaultSearchServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<SearchServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google
