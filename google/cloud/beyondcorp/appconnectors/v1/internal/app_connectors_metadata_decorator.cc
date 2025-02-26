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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#include "google/cloud/beyondcorp/appconnectors/v1/internal/app_connectors_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appconnectors_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectorsServiceMetadata::AppConnectorsServiceMetadata(
    std::shared_ptr<AppConnectorsServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<
    google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsResponse>
AppConnectorsServiceMetadata::ListAppConnectors(
    grpc::ClientContext& context, google::cloud::beyondcorp::appconnectors::v1::
                                      ListAppConnectorsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAppConnectors(context, request);
}

StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceMetadata::GetAppConnector(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnectors::v1::GetAppConnectorRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetAppConnector(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceMetadata::AsyncCreateAppConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateAppConnector(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceMetadata::AsyncUpdateAppConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const& request) {
  SetMetadata(*context, "app_connector.name=" + request.app_connector().name());
  return child_->AsyncUpdateAppConnector(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceMetadata::AsyncDeleteAppConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteAppConnector(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceMetadata::AsyncReportStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  SetMetadata(*context, "app_connector=" + request.app_connector());
  return child_->AsyncReportStatus(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AppConnectorsServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AppConnectorsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void AppConnectorsServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnectors_v1_internal
}  // namespace cloud
}  // namespace google
