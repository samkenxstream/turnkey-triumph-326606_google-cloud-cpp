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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_BIGQUERY_READ_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_BIGQUERY_READ_METADATA_DECORATOR_H

#include "google/cloud/bigquery/internal/bigquery_read_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigQueryReadMetadata : public BigQueryReadStub {
 public:
  ~BigQueryReadMetadata() override = default;
  explicit BigQueryReadMetadata(std::shared_ptr<BigQueryReadStub> child);

  StatusOr<google::cloud::bigquery::storage::v1::ReadSession> CreateReadSession(
      grpc::ClientContext& context,
      google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
          request) override;

  std::unique_ptr<internal::StreamingReadRpc<
      google::cloud::bigquery::storage::v1::ReadRowsResponse>>
  ReadRows(std::unique_ptr<grpc::ClientContext> context,
           google::cloud::bigquery::storage::v1::ReadRowsRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
  SplitReadStream(
      grpc::ClientContext& context,
      google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
          request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  std::shared_ptr<BigQueryReadStub> child_;
  std::string api_client_header_;
};  // BigQueryReadMetadata

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_BIGQUERY_READ_METADATA_DECORATOR_H
