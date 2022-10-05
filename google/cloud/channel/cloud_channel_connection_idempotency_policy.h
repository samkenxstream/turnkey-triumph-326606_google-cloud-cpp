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
// source: google/cloud/channel/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_CLOUD_CHANNEL_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_CLOUD_CHANNEL_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/channel/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace channel {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudChannelServiceConnectionIdempotencyPolicy {
 public:
  virtual ~CloudChannelServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CloudChannelServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ListCustomers(
      google::cloud::channel::v1::ListCustomersRequest request);

  virtual google::cloud::Idempotency GetCustomer(
      google::cloud::channel::v1::GetCustomerRequest const& request);

  virtual google::cloud::Idempotency CheckCloudIdentityAccountsExist(
      google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
          request);

  virtual google::cloud::Idempotency CreateCustomer(
      google::cloud::channel::v1::CreateCustomerRequest const& request);

  virtual google::cloud::Idempotency UpdateCustomer(
      google::cloud::channel::v1::UpdateCustomerRequest const& request);

  virtual google::cloud::Idempotency DeleteCustomer(
      google::cloud::channel::v1::DeleteCustomerRequest const& request);

  virtual google::cloud::Idempotency ImportCustomer(
      google::cloud::channel::v1::ImportCustomerRequest const& request);

  virtual google::cloud::Idempotency ProvisionCloudIdentity(
      google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request);

  virtual google::cloud::Idempotency ListEntitlements(
      google::cloud::channel::v1::ListEntitlementsRequest request);

  virtual google::cloud::Idempotency ListTransferableSkus(
      google::cloud::channel::v1::ListTransferableSkusRequest request);

  virtual google::cloud::Idempotency ListTransferableOffers(
      google::cloud::channel::v1::ListTransferableOffersRequest request);

  virtual google::cloud::Idempotency GetEntitlement(
      google::cloud::channel::v1::GetEntitlementRequest const& request);

  virtual google::cloud::Idempotency CreateEntitlement(
      google::cloud::channel::v1::CreateEntitlementRequest const& request);

  virtual google::cloud::Idempotency ChangeParameters(
      google::cloud::channel::v1::ChangeParametersRequest const& request);

  virtual google::cloud::Idempotency ChangeRenewalSettings(
      google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request);

  virtual google::cloud::Idempotency ChangeOffer(
      google::cloud::channel::v1::ChangeOfferRequest const& request);

  virtual google::cloud::Idempotency StartPaidService(
      google::cloud::channel::v1::StartPaidServiceRequest const& request);

  virtual google::cloud::Idempotency SuspendEntitlement(
      google::cloud::channel::v1::SuspendEntitlementRequest const& request);

  virtual google::cloud::Idempotency CancelEntitlement(
      google::cloud::channel::v1::CancelEntitlementRequest const& request);

  virtual google::cloud::Idempotency ActivateEntitlement(
      google::cloud::channel::v1::ActivateEntitlementRequest const& request);

  virtual google::cloud::Idempotency TransferEntitlements(
      google::cloud::channel::v1::TransferEntitlementsRequest const& request);

  virtual google::cloud::Idempotency TransferEntitlementsToGoogle(
      google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
          request);

  virtual google::cloud::Idempotency ListChannelPartnerLinks(
      google::cloud::channel::v1::ListChannelPartnerLinksRequest request);

  virtual google::cloud::Idempotency GetChannelPartnerLink(
      google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request);

  virtual google::cloud::Idempotency CreateChannelPartnerLink(
      google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
          request);

  virtual google::cloud::Idempotency UpdateChannelPartnerLink(
      google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
          request);

  virtual google::cloud::Idempotency GetCustomerRepricingConfig(
      google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
          request);

  virtual google::cloud::Idempotency ListCustomerRepricingConfigs(
      google::cloud::channel::v1::ListCustomerRepricingConfigsRequest request);

  virtual google::cloud::Idempotency CreateCustomerRepricingConfig(
      google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
          request);

  virtual google::cloud::Idempotency UpdateCustomerRepricingConfig(
      google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
          request);

  virtual google::cloud::Idempotency DeleteCustomerRepricingConfig(
      google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
          request);

  virtual google::cloud::Idempotency GetChannelPartnerRepricingConfig(
      google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
          request);

  virtual google::cloud::Idempotency ListChannelPartnerRepricingConfigs(
      google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest
          request);

  virtual google::cloud::Idempotency CreateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          CreateChannelPartnerRepricingConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          UpdateChannelPartnerRepricingConfigRequest const& request);

  virtual google::cloud::Idempotency DeleteChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          DeleteChannelPartnerRepricingConfigRequest const& request);

  virtual google::cloud::Idempotency LookupOffer(
      google::cloud::channel::v1::LookupOfferRequest const& request);

  virtual google::cloud::Idempotency ListProducts(
      google::cloud::channel::v1::ListProductsRequest request);

  virtual google::cloud::Idempotency ListSkus(
      google::cloud::channel::v1::ListSkusRequest request);

  virtual google::cloud::Idempotency ListOffers(
      google::cloud::channel::v1::ListOffersRequest request);

  virtual google::cloud::Idempotency ListPurchasableSkus(
      google::cloud::channel::v1::ListPurchasableSkusRequest request);

  virtual google::cloud::Idempotency ListPurchasableOffers(
      google::cloud::channel::v1::ListPurchasableOffersRequest request);

  virtual google::cloud::Idempotency RegisterSubscriber(
      google::cloud::channel::v1::RegisterSubscriberRequest const& request);

  virtual google::cloud::Idempotency UnregisterSubscriber(
      google::cloud::channel::v1::UnregisterSubscriberRequest const& request);

  virtual google::cloud::Idempotency ListSubscribers(
      google::cloud::channel::v1::ListSubscribersRequest request);
};

std::unique_ptr<CloudChannelServiceConnectionIdempotencyPolicy>
MakeDefaultCloudChannelServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_CLOUD_CHANNEL_CONNECTION_IDEMPOTENCY_POLICY_H
