# API Keys API C++ Client Library

This directory contains an idiomatic C++ client library for the
[API Keys API][cloud-service-docs], a service to manage the API keys associated
with developer projects.

While this library is **GA**, please note that the Google Cloud C++ client libraries do **not** follow
[Semantic Versioning](https://semver.org/).

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

For detailed instructions on how to build and install this library, see the
top-level [README](/README.md#building-and-installing).

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/apikeys/v2/api_keys_client.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " project-id\n";
    return 1;
  }

  namespace apikeys = ::google::cloud::apikeys_v2;
  auto client = apikeys::ApiKeysClient(apikeys::MakeApiKeysConnection());

  auto const parent = std::string{"projects/"} + argv[1] + "/locations/global";
  for (auto r : client.ListKeys(parent)) {
    if (!r) throw std::move(r).status();
    std::cout << r->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
```

<!-- inject-quickstart-end -->

## More Information

- Official documentation about the [API Keys API][cloud-service-docs] service
- [Reference doxygen documentation][doxygen-link] for each release of this
  client library
- Detailed header comments in our [public `.h`][source-link] files

[cloud-service-docs]: https://cloud.google.com/api-keys
[doxygen-link]: https://googleapis.dev/cpp/google-cloud-apikeys/latest/
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/apikeys
