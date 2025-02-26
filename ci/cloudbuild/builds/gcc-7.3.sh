#!/bin/bash
#
# Copyright 2021 Google LLC
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

set -euo pipefail

source "$(dirname "$0")/../../lib/init.sh"
source module ci/cloudbuild/builds/lib/cmake.sh

# We run this test in a docker image that includes the oldest GCC that we
# support, which happens to be 7.3 currently.
export CC=gcc
export CXX=g++

cmake -GNinja -H. -Bcmake-out \
  -DGOOGLE_CLOUD_CPP_ENABLE="$(features::always_build_cmake)" \
  -DGOOGLE_CLOUD_CPP_ENABLE_CCACHE=ON \
  -DGOOGLE_CLOUD_CPP_ENABLE_WERROR=ON \
  -DBUILD_SHARED_LIBS=yes
cmake --build cmake-out
mapfile -t ctest_args < <(ctest::common_args)
# Cannot use `env -C` as the version of env on Ubuntu:16.04 this does not
# support it
(
  cd cmake-out
  ctest "${ctest_args[@]}" -LE "integration-test"
)
