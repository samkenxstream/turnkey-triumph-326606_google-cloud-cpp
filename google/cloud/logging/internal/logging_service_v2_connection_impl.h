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
// source: google/logging/v2/logging.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_INTERNAL_LOGGING_SERVICE_V2_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_INTERNAL_LOGGING_SERVICE_V2_CONNECTION_IMPL_H

#include "google/cloud/logging/internal/logging_service_v2_retry_traits.h"
#include "google/cloud/logging/internal/logging_service_v2_stub.h"
#include "google/cloud/logging/logging_service_v2_connection.h"
#include "google/cloud/logging/logging_service_v2_connection_idempotency_policy.h"
#include "google/cloud/logging/logging_service_v2_options.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LoggingServiceV2ConnectionImpl
    : public logging::LoggingServiceV2Connection {
 public:
  ~LoggingServiceV2ConnectionImpl() override = default;

  LoggingServiceV2ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<logging_internal::LoggingServiceV2Stub> stub,
      Options options);

  Options options() override { return options_; }

  Status DeleteLog(
      google::logging::v2::DeleteLogRequest const& request) override;

  StatusOr<google::logging::v2::WriteLogEntriesResponse> WriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request) override;

  StreamRange<google::logging::v2::LogEntry> ListLogEntries(
      google::logging::v2::ListLogEntriesRequest request) override;

  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::logging::v2::ListMonitoredResourceDescriptorsRequest request)
      override;

  StreamRange<std::string> ListLogs(
      google::logging::v2::ListLogsRequest request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::logging::v2::TailLogEntriesRequest,
      google::logging::v2::TailLogEntriesResponse>>
      AsyncTailLogEntries(ExperimentalTag) override;

  future<StatusOr<google::logging::v2::WriteLogEntriesResponse>>
  AsyncWriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request) override;

 private:
  std::unique_ptr<logging::LoggingServiceV2RetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<logging::LoggingServiceV2RetryPolicyOption>()) {
      return options.get<logging::LoggingServiceV2RetryPolicyOption>()->clone();
    }
    return options_.get<logging::LoggingServiceV2RetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<logging::LoggingServiceV2BackoffPolicyOption>()) {
      return options.get<logging::LoggingServiceV2BackoffPolicyOption>()
          ->clone();
    }
    return options_.get<logging::LoggingServiceV2BackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<logging::LoggingServiceV2ConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            logging::LoggingServiceV2ConnectionIdempotencyPolicyOption>()) {
      return options
          .get<logging::LoggingServiceV2ConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<logging::LoggingServiceV2ConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<logging_internal::LoggingServiceV2Stub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_INTERNAL_LOGGING_SERVICE_V2_CONNECTION_IMPL_H
