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
// source: google/devtools/cloudtrace/v2/tracing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V2_TRACE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V2_TRACE_CONNECTION_H

#include "google/cloud/trace/v2/internal/trace_retry_traits.h"
#include "google/cloud/trace/v2/trace_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/cloudtrace/v2/tracing.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace trace_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TraceServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        trace_v2_internal::TraceServiceRetryTraits>;

using TraceServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        trace_v2_internal::TraceServiceRetryTraits>;

using TraceServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        trace_v2_internal::TraceServiceRetryTraits>;

/**
 * The `TraceServiceConnection` object for `TraceServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TraceServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TraceServiceClient`.
 *
 * To create a concrete instance, see `MakeTraceServiceConnection()`.
 *
 * For mocking, see `trace_v2_mocks::MockTraceServiceConnection`.
 */
class TraceServiceConnection {
 public:
  virtual ~TraceServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual Status BatchWriteSpans(
      google::devtools::cloudtrace::v2::BatchWriteSpansRequest const& request);

  virtual StatusOr<google::devtools::cloudtrace::v2::Span> CreateSpan(
      google::devtools::cloudtrace::v2::Span const& request);
};

/**
 * A factory function to construct an object of type `TraceServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TraceServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TraceServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::trace_v2::TraceServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `TraceServiceConnection` created by
 * this function.
 */
std::shared_ptr<TraceServiceConnection> MakeTraceServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V2_TRACE_CONNECTION_H
