// Copyright 2019 Google LLC
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

#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/compiler_info.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

using ::testing::HasSubstr;

TEST(ApiClientHeaderTest, Basic) {
  for (auto const& build_identifier : {"", "build-identifier"}) {
    auto actual = ApiClientHeader(build_identifier);
    EXPECT_THAT(actual,
                HasSubstr("gl-cpp/" + google::cloud::internal::CompilerId() +
                          "-" + google::cloud::internal::CompilerVersion() +
                          "-" + google::cloud::internal::CompilerFeatures() +
                          "-" + google::cloud::internal::LanguageVersion()));
    EXPECT_THAT(actual,
                HasSubstr("gccl/" + ApiClientVersion(build_identifier)));
  }
}

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
