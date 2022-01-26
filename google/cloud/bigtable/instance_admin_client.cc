// Copyright 2018 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/bigtable/instance_admin_client.h"
#include "google/cloud/bigtable/internal/defaults.h"

namespace google {
namespace cloud {
namespace bigtable {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

class DefaultInstanceAdminClient : public InstanceAdminClient {
 public:
  DefaultInstanceAdminClient(std::string project, Options options)
      : project_(std::move(project)),
        connection_(bigtable_admin::MakeBigtableInstanceAdminConnection(
            std::move(options))) {}

  std::string const& project() const override { return project_; }

 private:
  std::shared_ptr<bigtable_admin::BigtableInstanceAdminConnection> connection()
      override {
    return connection_;
  }

  std::string project_;
  std::shared_ptr<bigtable_admin::BigtableInstanceAdminConnection> connection_;
};

}  // anonymous namespace

std::shared_ptr<InstanceAdminClient> MakeInstanceAdminClient(
    std::string project, Options options) {
  options = internal::DefaultInstanceAdminOptions(std::move(options));
  return std::make_shared<DefaultInstanceAdminClient>(std::move(project),
                                                      std::move(options));
}

std::shared_ptr<InstanceAdminClient> CreateDefaultInstanceAdminClient(
    std::string project, ClientOptions options) {
  return MakeInstanceAdminClient(std::move(project),
                                 internal::MakeOptions(std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable
}  // namespace cloud
}  // namespace google
