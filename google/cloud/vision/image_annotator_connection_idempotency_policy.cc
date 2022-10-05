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
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/image_annotator_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ImageAnnotatorConnectionIdempotencyPolicy::
    ~ImageAnnotatorConnectionIdempotencyPolicy() = default;

std::unique_ptr<ImageAnnotatorConnectionIdempotencyPolicy>
ImageAnnotatorConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ImageAnnotatorConnectionIdempotencyPolicy>(*this);
}

Idempotency ImageAnnotatorConnectionIdempotencyPolicy::BatchAnnotateImages(
    google::cloud::vision::v1::BatchAnnotateImagesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ImageAnnotatorConnectionIdempotencyPolicy::BatchAnnotateFiles(
    google::cloud::vision::v1::BatchAnnotateFilesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ImageAnnotatorConnectionIdempotencyPolicy::AsyncBatchAnnotateImages(
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ImageAnnotatorConnectionIdempotencyPolicy::AsyncBatchAnnotateFiles(
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ImageAnnotatorConnectionIdempotencyPolicy>
MakeDefaultImageAnnotatorConnectionIdempotencyPolicy() {
  return absl::make_unique<ImageAnnotatorConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision
}  // namespace cloud
}  // namespace google
