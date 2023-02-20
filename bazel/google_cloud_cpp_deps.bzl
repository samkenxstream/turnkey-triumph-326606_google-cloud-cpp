# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Load dependencies needed to compile and test the google-cloud-cpp library."""

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:utils.bzl", "maybe")

def google_cloud_cpp_deps(name = None):
    """Loads dependencies need to compile the google-cloud-cpp library.

    Application developers can call this function from their WORKSPACE file
    to obtain all the necessary dependencies for google-cloud-cpp, including
    gRPC and its dependencies. This function only loads dependencies that
    have not been previously loaded, allowing application developers to
    override the version of the dependencies they want to use.

    Args:
        name: Unused. It is conventional to provide a `name` argument to all
            workspace functions.
    """

    # Load platforms, we use it directly
    maybe(
        http_archive,
        name = "platforms",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/platforms/platforms-0.0.6.tar.gz",
            "https://mirror.bazel.build/github.com/bazelbuild/platforms/releases/download/0.0.6/platforms-0.0.6.tar.gz",
            "https://github.com/bazelbuild/platforms/releases/download/0.0.6/platforms-0.0.6.tar.gz",
        ],
        sha256 = "5308fc1d8865406a49427ba24a9ab53087f17f5266a7aabbfc28823f3916e1ca",
    )

    # Load rules_cc, used by googletest
    maybe(
        http_archive,
        name = "rules_cc",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/rules_cc/rules_cc-0.0.1.tar.gz",
            "https://github.com/bazelbuild/rules_cc/releases/download/0.0.1/rules_cc-0.0.1.tar.gz",
        ],
        sha256 = "4dccbfd22c0def164c8f47458bd50e0c7148f3d92002cdb459c2a96a68498241",
    )

    # Load Abseil
    maybe(
        http_archive,
        name = "com_google_absl",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_google_absl/20230125.1.tar.gz",
            "https://github.com/abseil/abseil-cpp/archive/20230125.1.tar.gz",
        ],
        sha256 = "81311c17599b3712069ded20cca09a62ab0bf2a89dfa16993786c8782b7ed145",
        strip_prefix = "abseil-cpp-20230125.1",
    )

    # Load a version of googletest that we know works.
    maybe(
        http_archive,
        name = "com_google_googletest",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_google_googletest/v1.13.0.tar.gz",
            "https://github.com/google/googletest/archive/v1.13.0.tar.gz",
        ],
        sha256 = "ad7fdba11ea011c1d925b3289cf4af2c66a352e18d4c7264392fead75e919363",
        strip_prefix = "googletest-1.13.0",
    )

    # Load a version of benchmark that we know works.
    maybe(
        http_archive,
        name = "com_google_benchmark",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_google_benchmark/v1.7.0.tar.gz",
            "https://github.com/google/benchmark/archive/v1.7.0.tar.gz",
        ],
        sha256 = "3aff99169fa8bdee356eaa1f691e835a6e57b1efeadb8a0f9f228531158246ac",
        strip_prefix = "benchmark-1.7.0",
    )

    # Load the googleapis dependency.
    maybe(
        http_archive,
        name = "com_google_googleapis",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_google_googleapis/ebf47e25ff363de57a6036562504db6caf3d8b89.tar.gz",
            "https://github.com/googleapis/googleapis/archive/ebf47e25ff363de57a6036562504db6caf3d8b89.tar.gz",
        ],
        sha256 = "f21b0dbb4a18b2b4af77601049dc36ecb7dd1f4b05a2e38a05f456ffd1e258cc",
        strip_prefix = "googleapis-ebf47e25ff363de57a6036562504db6caf3d8b89",
        build_file = Label("//bazel:googleapis.BUILD"),
        # Scaffolding for patching googleapis after download. For example:
        #   patches = ["googleapis.patch"]
        # NOTE: This should only be used while developing with a new
        # protobuf message. No changes to `patches` should ever be
        # committed to the main branch.
        patch_tool = "patch",
        patch_args = ["-p1"],
        patches = [],
    )

    # Load protobuf.
    maybe(
        http_archive,
        name = "com_google_protobuf",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_google_protobuf/v21.12.tar.gz",
            "https://github.com/protocolbuffers/protobuf/archive/v21.12.tar.gz",
        ],
        sha256 = "22fdaf641b31655d4b2297f9981fa5203b2866f8332d3c6333f6b0107bb320de",
        strip_prefix = "protobuf-21.12",
    )

    # Load BoringSSL. This could be automatically loaded by gRPC. But as of
    # 2023-02-01 the version loaded by gRPC-1.51 does not compile with Clang-15.
    maybe(
        http_archive,
        name = "boringssl",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/boringssl/82a53d8c902f940eb1310f76a0b96c40c67f632f.tar.gz",
            # Use https://github.com/google/boringssl instead of
            # https://boringssl.googlesource.com/boringssl as the
            # former has a (more) consistent sha256.
            "https://github.com/google/boringssl/archive/82a53d8c902f940eb1310f76a0b96c40c67f632f.tar.gz",
        ],
        sha256 = "c25e5c1ac36fa6709b2fd9095584228d48e9f82bcf97d8cd868bcbe796f90ba5",
        strip_prefix = "boringssl-82a53d8c902f940eb1310f76a0b96c40c67f632f",
    )

    # Load gRPC and its dependencies, using a similar pattern to this function.
    maybe(
        http_archive,
        name = "com_github_grpc_grpc",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_github_grpc_grpc/v1.52.1.tar.gz",
            "https://github.com/grpc/grpc/archive/v1.52.1.tar.gz",
        ],
        sha256 = "ec125d7fdb77ecc25b01050a0d5d32616594834d3fe163b016768e2ae42a2df6",
        strip_prefix = "grpc-1.52.1",
    )

    # We use the cc_proto_library() rule from @com_google_protobuf, which
    # assumes that grpc_cpp_plugin and grpc_lib are in the //external: module
    native.bind(
        name = "grpc_cpp_plugin",
        actual = "@com_github_grpc_grpc//src/compiler:grpc_cpp_plugin",
    )

    native.bind(
        name = "grpc_lib",
        actual = "@com_github_grpc_grpc//:grpc++",
    )

    # We need libcurl for the Google Cloud Storage client.
    maybe(
        http_archive,
        name = "com_github_curl_curl",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_github_curl_curl/curl-7.69.1.tar.gz",
            "https://curl.haxx.se/download/curl-7.69.1.tar.gz",
        ],
        sha256 = "01ae0c123dee45b01bbaef94c0bc00ed2aec89cb2ee0fd598e0d302a6b5e0a98",
        strip_prefix = "curl-7.69.1",
        build_file = Label("//bazel:curl.BUILD"),
    )

    # We need the nlohmann_json library
    maybe(
        http_archive,
        name = "com_github_nlohmann_json",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_github_nlohmann_json/v3.11.2.tar.gz",
            "https://github.com/nlohmann/json/archive/v3.11.2.tar.gz",
        ],
        sha256 = "d69f9deb6a75e2580465c6c4c5111b89c4dc2fa94e3a85fcd2ffcd9a143d9273",
        strip_prefix = "json-3.11.2",
        build_file = Label("//bazel:nlohmann_json.BUILD"),
    )

    # Load google/crc32c, a library to efficiently compute CRC32C checksums.
    maybe(
        http_archive,
        name = "com_github_google_crc32c",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_github_google_crc32c/1.1.2.tar.gz",
            "https://github.com/google/crc32c/archive/1.1.2.tar.gz",
        ],
        sha256 = "ac07840513072b7fcebda6e821068aa04889018f24e10e46181068fb214d7e56",
        strip_prefix = "crc32c-1.1.2",
        build_file = Label("//bazel:crc32c.BUILD"),
        patch_tool = "patch",
        patch_args = ["-p1"],
        patches = [Label("//bazel:configure_template.bzl.patch")],
    )

    # Open Telemetry
    maybe(
        http_archive,
        name = "io_opentelemetry_cpp",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/io_opentelemetry_cpp/v1.8.2.tar.gz",
            "https://github.com/open-telemetry/opentelemetry-cpp/archive/v1.8.2.tar.gz",
        ],
        sha256 = "20fa97e507d067e9e2ab0c1accfc334f5a4b10d01312e55455dc3733748585f4",
        strip_prefix = "opentelemetry-cpp-1.8.2",
    )

    # PugiXML, this is only used in the docfx internal tool.
    maybe(
        http_archive,
        name = "com_github_zeux_pugixml",
        urls = [
            "https://storage.googleapis.com/cloud-cpp-community-archive/com_github_zeux_pugixml/v1.13.tar.gz",
            "https://github.com/zeux/pugixml/archive/refs/tags/v1.13.tar.gz",
        ],
        sha256 = "5c5ad5d7caeb791420408042a7d88c2c6180781bf218feca259fd9d840a888e1",
        strip_prefix = "pugixml-1.13",
        build_file = Label("//bazel:pugixml.BUILD"),
    )
