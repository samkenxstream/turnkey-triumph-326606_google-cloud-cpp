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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/projects_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ProjectsConnectionIdempotencyPolicy::~ProjectsConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<ProjectsConnectionIdempotencyPolicy>
ProjectsConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ProjectsConnectionIdempotencyPolicy>(*this);
}

Idempotency ProjectsConnectionIdempotencyPolicy::GetProject(
    google::cloud::resourcemanager::v3::GetProjectRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::ListProjects(
    google::cloud::resourcemanager::v3::ListProjectsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::SearchProjects(
    google::cloud::resourcemanager::v3::SearchProjectsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::CreateProject(
    google::cloud::resourcemanager::v3::CreateProjectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::UpdateProject(
    google::cloud::resourcemanager::v3::UpdateProjectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::MoveProject(
    google::cloud::resourcemanager::v3::MoveProjectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::DeleteProject(
    google::cloud::resourcemanager::v3::DeleteProjectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::UndeleteProject(
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency ProjectsConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ProjectsConnectionIdempotencyPolicy>
MakeDefaultProjectsConnectionIdempotencyPolicy() {
  return absl::make_unique<ProjectsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google
