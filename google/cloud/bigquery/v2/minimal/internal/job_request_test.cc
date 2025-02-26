// Copyright 2023 Google LLC
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

#include "google/cloud/bigquery/v2/minimal/internal/job_request.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/format_time_point.h"
#include "google/cloud/options.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <sstream>

namespace google {
namespace cloud {
namespace bigquery_v2_minimal_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::testing_util::StatusIs;
using ::testing::HasSubstr;

ListJobsRequest GetListJobsRequest() {
  ListJobsRequest request("1");
  auto const min = std::chrono::system_clock::now();
  auto const duration = std::chrono::milliseconds(100);
  auto const max = min + duration;
  request.set_all_users(true)
      .set_max_results(10)
      .set_min_creation_time(min)
      .set_max_creation_time(max)
      .set_parent_job_id("1")
      .set_page_token("123")
      .set_projection(Projection::Full())
      .set_state_filter(StateFilter::Running());
  return request;
}

TEST(GetJobRequestTest, SuccessWithLocation) {
  GetJobRequest request("1", "2");
  request.set_location("useast");
  Options opts;
  opts.set<EndpointOption>("bigquery.googleapis.com");
  internal::OptionsSpan span(opts);

  auto actual = BuildRestRequest(request);
  ASSERT_STATUS_OK(actual);

  rest_internal::RestRequest expected;
  expected.SetPath(
      "https://bigquery.googleapis.com/bigquery/v2/projects/1/jobs/2");
  expected.AddQueryParameter("location", "useast");
  EXPECT_EQ(expected, *actual);
}

TEST(GetJobRequestTest, SuccessWithoutLocation) {
  GetJobRequest request("1", "2");
  Options opts;
  opts.set<EndpointOption>("bigquery.googleapis.com");
  internal::OptionsSpan span(opts);
  auto actual = BuildRestRequest(request);
  ASSERT_STATUS_OK(actual);

  rest_internal::RestRequest expected;
  expected.SetPath(
      "https://bigquery.googleapis.com/bigquery/v2/projects/1/jobs/2");
  EXPECT_EQ(expected, *actual);
}

TEST(GetJobRequestTest, SuccessWithEndpoint) {
  GetJobRequest request("1", "2");

  struct EndpointTest {
    std::string endpoint;
    std::string expected;
  } cases[] = {
      {"https://myendpoint.google.com",
       "https://myendpoint.google.com/bigquery/v2/projects/1/jobs/2"},
      {"http://myendpoint.google.com",
       "http://myendpoint.google.com/bigquery/v2/projects/1/jobs/2"},
      {"myendpoint.google.com",
       "https://myendpoint.google.com/bigquery/v2/projects/1/jobs/2"},
      {"https://myendpoint.google.com/",
       "https://myendpoint.google.com/bigquery/v2/projects/1/jobs/2"},
  };

  for (auto const& test : cases) {
    SCOPED_TRACE("Testing for endpoint: " + test.endpoint +
                 ", expected: " + test.expected);
    Options opts;
    opts.set<EndpointOption>(test.endpoint);
    internal::OptionsSpan span(opts);

    auto actual = BuildRestRequest(request);
    ASSERT_STATUS_OK(actual);
    EXPECT_EQ(test.expected, actual->path());
  }
}

TEST(GetJobRequestTest, EmptyProjectId) {
  GetJobRequest request("", "test-job-id");
  Options opts;
  opts.set<EndpointOption>("bigquery.googleapis.com");
  internal::OptionsSpan span(opts);

  auto rest_request = BuildRestRequest(request);
  EXPECT_THAT(rest_request, StatusIs(StatusCode::kInvalidArgument,
                                     HasSubstr("Project Id is empty")));
}

TEST(GetJobRequest, EmptyJobId) {
  GetJobRequest request("test-project-id", "");
  Options opts;
  opts.set<EndpointOption>("bigquery.googleapis.com");
  internal::OptionsSpan span(opts);

  auto rest_request = BuildRestRequest(request);
  EXPECT_THAT(rest_request, StatusIs(StatusCode::kInvalidArgument,
                                     HasSubstr("Job Id is empty")));
}

TEST(GetJobRequest, OutputStream) {
  GetJobRequest request("test-project-id", "test-job-id");
  request.set_location("test-location");
  std::string expected = absl::StrCat(
      "GetJobRequest{project_id=", request.project_id(),
      ", job_id=", request.job_id(), ", location=", request.location(), "}");
  std::ostringstream os;
  os << request;
  EXPECT_EQ(expected, os.str());
}

TEST(ListJobsRequestTest, Success) {
  auto const request = GetListJobsRequest();
  Options opts;
  opts.set<EndpointOption>("bigquery.googleapis.com");
  internal::OptionsSpan span(opts);
  auto actual = BuildRestRequest(request);
  ASSERT_STATUS_OK(actual);

  rest_internal::RestRequest expected;
  expected.SetPath(
      "https://bigquery.googleapis.com/bigquery/v2/projects/1/jobs");
  expected.AddQueryParameter("allUsers", "true");
  expected.AddQueryParameter("maxResults", "10");
  expected.AddQueryParameter(
      "minCreationTime",
      internal::FormatRfc3339(request.min_creation_time().value()));
  expected.AddQueryParameter(
      "maxCreationTime",
      internal::FormatRfc3339(request.max_creation_time().value()));
  expected.AddQueryParameter("pageToken", "123");
  expected.AddQueryParameter("projection", "FULL");
  expected.AddQueryParameter("stateFilter", "RUNNING");
  expected.AddQueryParameter("parentJobId", "1");

  EXPECT_EQ(expected, *actual);
}

TEST(ListJobsRequestTest, EmptyProjectId) {
  ListJobsRequest request("");
  Options opts;
  opts.set<EndpointOption>("bigquery.googleapis.com");
  internal::OptionsSpan span(opts);

  auto rest_request = BuildRestRequest(request);
  EXPECT_THAT(rest_request, StatusIs(StatusCode::kInvalidArgument,
                                     HasSubstr("Project Id is empty")));
}

TEST(ListJobsRequestTest, OutputStream) {
  auto const request = GetListJobsRequest();
  std::string expected =
      "ListJobsRequest{project_id=1, all_users=true, max_results=10"
      ", page_token=123, projection=FULL, state_filter=RUNNING"
      ", parent_job_id=1}";
  std::ostringstream os;
  os << request;
  EXPECT_EQ(expected, os.str());
}

TEST(GetJobRequest, DebugString) {
  GetJobRequest request("test-project-id", "test-job-id");
  request.set_location("test-location");

  EXPECT_EQ(request.DebugString("GetJobRequest", TracingOptions{}),
            R"(GetJobRequest {)"
            R"( project_id: "test-project-id")"
            R"( job_id: "test-job-id")"
            R"( location: "test-location")"
            R"( })");
  EXPECT_EQ(request.DebugString("GetJobRequest",
                                TracingOptions{}.SetOptions(
                                    "truncate_string_field_longer_than=7")),
            R"(GetJobRequest {)"
            R"( project_id: "test-pr...<truncated>...")"
            R"( job_id: "test-jo...<truncated>...")"
            R"( location: "test-lo...<truncated>...")"
            R"( })");
  EXPECT_EQ(request.DebugString("GetJobRequest", TracingOptions{}.SetOptions(
                                                     "single_line_mode=F")),
            R"(GetJobRequest {
  project_id: "test-project-id"
  job_id: "test-job-id"
  location: "test-location"
})");
}

TEST(ListJobsRequestTest, DebugString) {
  ListJobsRequest request("test-project-id");
  request.set_all_users(true)
      .set_max_results(10)
      .set_min_creation_time(
          std::chrono::system_clock::from_time_t(1585112316) +
          std::chrono::microseconds(123456))
      .set_max_creation_time(
          std::chrono::system_clock::from_time_t(1585112892) +
          std::chrono::microseconds(654321))
      .set_page_token("test-page-token")
      .set_projection(Projection::Full())
      .set_state_filter(StateFilter::Running())
      .set_parent_job_id("test-job-id");

  EXPECT_EQ(request.DebugString("ListJobsRequest", TracingOptions{}),
            R"(ListJobsRequest {)"
            R"( project_id: "test-project-id")"
            R"( all_users: true)"
            R"( max_results: 10)"
            R"( min_creation_time { "2020-03-25T04:58:36.123456Z" })"
            R"( max_creation_time { "2020-03-25T05:08:12.654321Z" })"
            R"( page_token: "test-page-token")"
            R"( projection { value: "FULL" })"
            R"( state_filter { value: "RUNNING" })"
            R"( parent_job_id: "test-job-id")"
            R"( })");
  EXPECT_EQ(request.DebugString("ListJobsRequest",
                                TracingOptions{}.SetOptions(
                                    "truncate_string_field_longer_than=7")),
            R"(ListJobsRequest {)"
            R"( project_id: "test-pr...<truncated>...")"
            R"( all_users: true)"
            R"( max_results: 10)"
            R"( min_creation_time { "2020-03-25T04:58:36.123456Z" })"
            R"( max_creation_time { "2020-03-25T05:08:12.654321Z" })"
            R"( page_token: "test-pa...<truncated>...")"
            R"( projection { value: "FULL" })"
            R"( state_filter { value: "RUNNING" })"
            R"( parent_job_id: "test-jo...<truncated>...")"
            R"( })");
  EXPECT_EQ(request.DebugString("ListJobsRequest", TracingOptions{}.SetOptions(
                                                       "single_line_mode=F")),
            R"(ListJobsRequest {
  project_id: "test-project-id"
  all_users: true
  max_results: 10
  min_creation_time {
    "2020-03-25T04:58:36.123456Z"
  }
  max_creation_time {
    "2020-03-25T05:08:12.654321Z"
  }
  page_token: "test-page-token"
  projection {
    value: "FULL"
  }
  state_filter {
    value: "RUNNING"
  }
  parent_job_id: "test-job-id"
})");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_v2_minimal_internal
}  // namespace cloud
}  // namespace google
