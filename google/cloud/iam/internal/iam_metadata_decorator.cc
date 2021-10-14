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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/internal/iam_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/iam/admin/v1/iam.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMMetadata::IAMMetadata(std::shared_ptr<IAMStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::iam::admin::v1::ListServiceAccountsResponse>
IAMMetadata::ListServiceAccounts(
    grpc::ClientContext& context,
    google::iam::admin::v1::ListServiceAccountsRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListServiceAccounts(context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccount> IAMMetadata::GetServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::GetServiceAccountRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetServiceAccount(context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMMetadata::CreateServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::CreateServiceAccountRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->CreateServiceAccount(context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccount>
IAMMetadata::PatchServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::PatchServiceAccountRequest const& request) {
  SetMetadata(context,
              "service_account.name=" + request.service_account().name());
  return child_->PatchServiceAccount(context, request);
}

Status IAMMetadata::DeleteServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::DeleteServiceAccountRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteServiceAccount(context, request);
}

StatusOr<google::iam::admin::v1::UndeleteServiceAccountResponse>
IAMMetadata::UndeleteServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::UndeleteServiceAccountRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UndeleteServiceAccount(context, request);
}

Status IAMMetadata::EnableServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::EnableServiceAccountRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->EnableServiceAccount(context, request);
}

Status IAMMetadata::DisableServiceAccount(
    grpc::ClientContext& context,
    google::iam::admin::v1::DisableServiceAccountRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DisableServiceAccount(context, request);
}

StatusOr<google::iam::admin::v1::ListServiceAccountKeysResponse>
IAMMetadata::ListServiceAccountKeys(
    grpc::ClientContext& context,
    google::iam::admin::v1::ListServiceAccountKeysRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListServiceAccountKeys(context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMMetadata::GetServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::GetServiceAccountKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetServiceAccountKey(context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMMetadata::CreateServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::CreateServiceAccountKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->CreateServiceAccountKey(context, request);
}

StatusOr<google::iam::admin::v1::ServiceAccountKey>
IAMMetadata::UploadServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::UploadServiceAccountKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UploadServiceAccountKey(context, request);
}

Status IAMMetadata::DeleteServiceAccountKey(
    grpc::ClientContext& context,
    google::iam::admin::v1::DeleteServiceAccountKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteServiceAccountKey(context, request);
}

StatusOr<google::iam::v1::Policy> IAMMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> IAMMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::iam::admin::v1::QueryGrantableRolesResponse>
IAMMetadata::QueryGrantableRoles(
    grpc::ClientContext& context,
    google::iam::admin::v1::QueryGrantableRolesRequest const& request) {
  SetMetadata(context, {});
  return child_->QueryGrantableRoles(context, request);
}

StatusOr<google::iam::admin::v1::ListRolesResponse> IAMMetadata::ListRoles(
    grpc::ClientContext& context,
    google::iam::admin::v1::ListRolesRequest const& request) {
  SetMetadata(context, {});
  return child_->ListRoles(context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMMetadata::GetRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::GetRoleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetRole(context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMMetadata::CreateRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::CreateRoleRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateRole(context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMMetadata::UpdateRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::UpdateRoleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateRole(context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMMetadata::DeleteRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::DeleteRoleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteRole(context, request);
}

StatusOr<google::iam::admin::v1::Role> IAMMetadata::UndeleteRole(
    grpc::ClientContext& context,
    google::iam::admin::v1::UndeleteRoleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UndeleteRole(context, request);
}

StatusOr<google::iam::admin::v1::QueryTestablePermissionsResponse>
IAMMetadata::QueryTestablePermissions(
    grpc::ClientContext& context,
    google::iam::admin::v1::QueryTestablePermissionsRequest const& request) {
  SetMetadata(context, {});
  return child_->QueryTestablePermissions(context, request);
}

StatusOr<google::iam::admin::v1::QueryAuditableServicesResponse>
IAMMetadata::QueryAuditableServices(
    grpc::ClientContext& context,
    google::iam::admin::v1::QueryAuditableServicesRequest const& request) {
  SetMetadata(context, {});
  return child_->QueryAuditableServices(context, request);
}

StatusOr<google::iam::admin::v1::LintPolicyResponse> IAMMetadata::LintPolicy(
    grpc::ClientContext& context,
    google::iam::admin::v1::LintPolicyRequest const& request) {
  SetMetadata(context, {});
  return child_->LintPolicy(context, request);
}

void IAMMetadata::SetMetadata(grpc::ClientContext& context,
                              std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
