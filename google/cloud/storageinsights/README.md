# Storage Insights API C++ Client Library

This directory contains an idiomatic C++ client library for the
[Storage Insights API][cloud-service-docs], a service that creates and manages
inventory reports to help you manage your object storage at scale.

While this library is **GA**, please note that the Google Cloud C++ client
libraries do **not** follow [Semantic Versioning](https://semver.org/).

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/storageinsights/v1/storage_insights_client.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " project-id location-id\n";
    return 1;
  }

  namespace storageinsights = ::google::cloud::storageinsights_v1;
  auto client = storageinsights::StorageInsightsClient(
      storageinsights::MakeStorageInsightsConnection());

  auto const parent =
      std::string{"projects/"} + argv[1] + "/locations/" + argv[2];
  for (auto rc : client.ListReportConfigs(parent)) {
    if (!rc) throw std::move(rc).status();
    std::cout << rc->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
```

<!-- inject-quickstart-end -->

## More Information

- Official documentation about the [Storage Insights API][cloud-service-docs] service
- [Reference doxygen documentation][doxygen-link] for each release of this
  client library
- Detailed header comments in our [public `.h`][source-link] files

[cloud-service-docs]: https://cloud.google.com/storage/docs/insights/inventory-reports
[doxygen-link]: https://googleapis.dev/cpp/google-cloud-storageinsights/latest/
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/storageinsights
