# Google Cloud Storage C++ Client Library

This directory contains an idiomatic C++ client library for interacting with
[Google Cloud Storage](https://cloud.google.com/storage/) (GCS), which is
Google's Object Storage service. It allows world-wide storage and retrieval of
any amount of data at any time. You can use Cloud Storage for a range of
scenarios including serving website content, storing data for archival and
disaster recovery, or distributing large data objects to users via direct
download.

While this library is **GA**, please note that the Google Cloud C++ client libraries do **not** follow
[Semantic Versioning](http://semver.org/).

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/storage/client.h"
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Missing bucket name.\n";
    std::cerr << "Usage: quickstart <bucket-name>\n";
    return 1;
  }
  std::string const bucket_name = argv[1];

  // Create aliases to make the code easier to read.
  namespace gcs = ::google::cloud::storage;

  // Create a client to communicate with Google Cloud Storage. This client
  // uses the default configuration for authentication and project id.
  auto client = gcs::Client();

  auto writer = client.WriteObject(bucket_name, "quickstart.txt");
  writer << "Hello World!";
  writer.Close();
  if (!writer.metadata()) {
    std::cerr << "Error creating object: " << writer.metadata().status()
              << "\n";
    return 1;
  }
  std::cout << "Successfully created object: " << *writer.metadata() << "\n";

  auto reader = client.ReadObject(bucket_name, "quickstart.txt");
  if (!reader) {
    std::cerr << "Error reading object: " << reader.status() << "\n";
    return 1;
  }

  std::string contents{std::istreambuf_iterator<char>{reader}, {}};
  std::cout << contents << "\n";

  return 0;
}
```

<!-- inject-quickstart-end -->

## Build and Install

- Packaging maintainers or developers who prefer to install the library in a
  fixed directory (such as `/usr/local` or `/opt`) should consult the
  [packaging guide](/doc/packaging.md).
- Developers who prefer using a package manager such as
  [vcpkg](https://vcpkg.io), or [Conda](https://conda.io), should follow the
  instructions for their package manager.
- Developers wanting to use the libraries as part of a larger CMake or Bazel
  project should consult the [quickstart guides](#quickstart) for the library
  or libraries they want to use.
- Developers wanting to compile the library just to run some examples or
  tests should read the project's top-level
  [README](/README.md#building-and-installing).
- Contributors and developers to `google-cloud-cpp` should consult the guide to
  [set up a development workstation][howto-setup-dev-workstation].

## More Information

- Official documentation about [Google Cloud Storage][cloud-storage-docs]
- [Reference doxygen documentation][doxygen-link] for each release of this client library
- Detailed header comments in our [public `.h`][source-link] files

[cloud-storage-docs]: https://cloud.google.com/storage/docs/
[doxygen-link]: https://googleapis.dev/cpp/google-cloud-storage/latest/
[howto-setup-dev-workstation]: /doc/contributor/howto-guide-setup-development-workstation.md
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/storage
