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

#include "google/cloud/internal/openssl_util.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

using ::testing::ElementsAre;
using ::testing::ElementsAreArray;

TEST(OpensslUtilTest, UrlsafeBase64Encode) {
  // Produced input using:
  //     echo 'TG9yZ+W0gaXBz/dW1cMACg==' | openssl base64 -d | od -t x1
  std::vector<std::uint8_t> input{
      0x4c, 0x6f, 0x72, 0x67, 0xe5, 0xb4, 0x81, 0xa5,
      0xc1, 0xcf, 0xf7, 0x56, 0xd5, 0xc3, 0x00, 0x0a,
  };
  EXPECT_EQ("TG9yZ-W0gaXBz_dW1cMACg", UrlsafeBase64Encode(input));
}

TEST(OpensslUtilTest, Base64Decode) {
  // Produced input using:
  //     echo 'TG9yZ+W0gaXBz/dW1cMACg==' | openssl base64 -d | od -t x1
  std::vector<std::uint8_t> expected{
      0x4c, 0x6f, 0x72, 0x67, 0xe5, 0xb4, 0x81, 0xa5,
      0xc1, 0xcf, 0xf7, 0x56, 0xd5, 0xc3, 0x00, 0x0a,
  };
  EXPECT_THAT(UrlsafeBase64Decode("TG9yZ-W0gaXBz_dW1cMACg").value(),
              ElementsAreArray(expected));
}

TEST(OpensslUtilTest, Base64DecodePadding) {
  // Produced input using:
  // cSpell:disable
  // $ echo -n 'A' | openssl base64 -e
  // QQ==
  // $ echo -n 'AB' | openssl base64 -e
  // QUI=
  // $ echo -n 'ABC' | openssl base64 -e
  // QUJD
  // $ echo -n 'ABCD' | openssl base64 -e
  // QUJDRAo=
  // cSpell:enable

  EXPECT_THAT(UrlsafeBase64Decode("QQ").value(), ElementsAre('A'));
  EXPECT_THAT(UrlsafeBase64Decode("QUI").value(), ElementsAre('A', 'B'));
  EXPECT_THAT(UrlsafeBase64Decode("QUJD").value(), ElementsAre('A', 'B', 'C'));
  EXPECT_THAT(UrlsafeBase64Decode("QUJDRA").value(),
              ElementsAre('A', 'B', 'C', 'D'));
}

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
