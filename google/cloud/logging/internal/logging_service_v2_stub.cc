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

#include "google/cloud/logging/internal/logging_service_v2_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/logging/v2/logging.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace logging_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LoggingServiceV2Stub::~LoggingServiceV2Stub() = default;

Status DefaultLoggingServiceV2Stub::DeleteLog(
    grpc::ClientContext& client_context,
    google::logging::v2::DeleteLogRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteLog(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
DefaultLoggingServiceV2Stub::WriteLogEntries(
    grpc::ClientContext& client_context,
    google::logging::v2::WriteLogEntriesRequest const& request) {
  google::logging::v2::WriteLogEntriesResponse response;
  auto status =
      grpc_stub_->WriteLogEntries(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::logging::v2::ListLogEntriesResponse>
DefaultLoggingServiceV2Stub::ListLogEntries(
    grpc::ClientContext& client_context,
    google::logging::v2::ListLogEntriesRequest const& request) {
  google::logging::v2::ListLogEntriesResponse response;
  auto status = grpc_stub_->ListLogEntries(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::logging::v2::ListMonitoredResourceDescriptorsResponse>
DefaultLoggingServiceV2Stub::ListMonitoredResourceDescriptors(
    grpc::ClientContext& client_context,
    google::logging::v2::ListMonitoredResourceDescriptorsRequest const&
        request) {
  google::logging::v2::ListMonitoredResourceDescriptorsResponse response;
  auto status = grpc_stub_->ListMonitoredResourceDescriptors(
      &client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::logging::v2::ListLogsResponse>
DefaultLoggingServiceV2Stub::ListLogs(
    grpc::ClientContext& client_context,
    google::logging::v2::ListLogsRequest const& request) {
  google::logging::v2::ListLogsResponse response;
  auto status = grpc_stub_->ListLogs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_internal
}  // namespace cloud
}  // namespace google
