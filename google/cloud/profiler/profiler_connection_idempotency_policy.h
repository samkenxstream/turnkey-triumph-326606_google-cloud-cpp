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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PROFILER_PROFILER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PROFILER_PROFILER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/devtools/cloudprofiler/v2/profiler.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace profiler {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProfilerServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ProfilerServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ProfilerServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateProfile(
      google::devtools::cloudprofiler::v2::CreateProfileRequest const& request);

  virtual google::cloud::Idempotency CreateOfflineProfile(
      google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&
          request);

  virtual google::cloud::Idempotency UpdateProfile(
      google::devtools::cloudprofiler::v2::UpdateProfileRequest const& request);
};

std::unique_ptr<ProfilerServiceConnectionIdempotencyPolicy>
MakeDefaultProfilerServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PROFILER_PROFILER_CONNECTION_IDEMPOTENCY_POLICY_H
