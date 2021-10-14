// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#include "google/cloud/iam/internal/iam_credentials_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/iam/credentials/v1/iamcredentials.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMCredentialsMetadata::IAMCredentialsMetadata(
    std::shared_ptr<IAMCredentialsStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
IAMCredentialsMetadata::GenerateAccessToken(
    grpc::ClientContext& context,
    google::iam::credentials::v1::GenerateAccessTokenRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GenerateAccessToken(context, request);
}

StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
IAMCredentialsMetadata::GenerateIdToken(
    grpc::ClientContext& context,
    google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GenerateIdToken(context, request);
}

StatusOr<google::iam::credentials::v1::SignBlobResponse>
IAMCredentialsMetadata::SignBlob(
    grpc::ClientContext& context,
    google::iam::credentials::v1::SignBlobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->SignBlob(context, request);
}

StatusOr<google::iam::credentials::v1::SignJwtResponse>
IAMCredentialsMetadata::SignJwt(
    grpc::ClientContext& context,
    google::iam::credentials::v1::SignJwtRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->SignJwt(context, request);
}

void IAMCredentialsMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
