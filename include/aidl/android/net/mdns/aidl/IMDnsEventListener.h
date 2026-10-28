/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/IMDnsEventListener.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/net/mdns/aidl/DiscoveryInfo.h>
#include <aidl/android/net/mdns/aidl/GetAddressInfo.h>
#include <aidl/android/net/mdns/aidl/RegistrationInfo.h>
#include <aidl/android/net/mdns/aidl/ResolutionInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::net::mdns::aidl {
class DiscoveryInfo;
class GetAddressInfo;
class RegistrationInfo;
class ResolutionInfo;
}  // namespace aidl::android::net::mdns::aidl
namespace aidl {
namespace android {
namespace net {
namespace mdns {
namespace aidl {
class IMDnsEventListenerDelegator;

class IMDnsEventListener : public ::ndk::ICInterface {
public:
  typedef IMDnsEventListenerDelegator DefaultDelegator;
  static const char* descriptor;
  IMDnsEventListener();
  virtual ~IMDnsEventListener();

  enum : int32_t { SERVICE_DISCOVERY_FAILED = 602 };
  enum : int32_t { SERVICE_FOUND = 603 };
  enum : int32_t { SERVICE_LOST = 604 };
  enum : int32_t { SERVICE_REGISTRATION_FAILED = 605 };
  enum : int32_t { SERVICE_REGISTERED = 606 };
  enum : int32_t { SERVICE_RESOLUTION_FAILED = 607 };
  enum : int32_t { SERVICE_RESOLVED = 608 };
  enum : int32_t { SERVICE_GET_ADDR_FAILED = 611 };
  enum : int32_t { SERVICE_GET_ADDR_SUCCESS = 612 };
  static constexpr uint32_t TRANSACTION_onServiceRegistrationStatus = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_onServiceDiscoveryStatus = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_onServiceResolutionStatus = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_onGettingServiceAddressStatus = FIRST_CALL_TRANSACTION + 3;

  static std::shared_ptr<IMDnsEventListener> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IMDnsEventListener>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IMDnsEventListener>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IMDnsEventListener>& impl);
  static const std::shared_ptr<IMDnsEventListener>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus onServiceRegistrationStatus(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_status) __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) = 0;
  virtual ::ndk::ScopedAStatus onServiceDiscoveryStatus(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_status) __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) = 0;
  virtual ::ndk::ScopedAStatus onServiceResolutionStatus(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_status) __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) = 0;
  virtual ::ndk::ScopedAStatus onGettingServiceAddressStatus(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_status) __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) = 0;
private:
  static std::shared_ptr<IMDnsEventListener> default_impl;
};
class IMDnsEventListenerDefault : public IMDnsEventListener {
public:
  ::ndk::ScopedAStatus onServiceRegistrationStatus(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::ScopedAStatus onServiceDiscoveryStatus(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::ScopedAStatus onServiceResolutionStatus(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::ScopedAStatus onGettingServiceAddressStatus(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
