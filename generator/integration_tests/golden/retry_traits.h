// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_RETRY_TRAITS_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_RETRY_TRAITS_H

#include "google/cloud/status.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace golden_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
/// Define the gRPC status code semantics for retrying requests.
struct GoldenThingAdminRetryTraits {
  static inline bool IsPermanentFailure(google::cloud::Status const& status) {
    return status.code() != StatusCode::kOk &&
           status.code() != StatusCode::kDeadlineExceeded &&
           status.code() != StatusCode::kUnavailable;
  }
};

struct GoldenKitchenSinkRetryTraits {
  static inline bool IsPermanentFailure(google::cloud::Status const& status) {
    return status.code() != StatusCode::kOk &&
           status.code() != StatusCode::kDeadlineExceeded &&
           status.code() != StatusCode::kUnavailable;
  }
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_RETRY_TRAITS_H
