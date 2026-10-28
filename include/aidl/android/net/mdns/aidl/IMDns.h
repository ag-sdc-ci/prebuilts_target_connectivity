/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/IMDns.aidl
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
#include <aidl/android/net/mdns/aidl/IMDnsEventListener.h>
#include <aidl/android/net/mdns/aidl/RegistrationInfo.h>
#include <aidl/android/net/mdns/aidl/ResolutionInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::net::mdns::aidl {
class DiscoveryInfo;
class GetAddressInfo;
class IMDnsEventListener;
class RegistrationInfo;
class ResolutionInfo;
}  // namespace aidl::android::net::mdns::aidl
namespace aidl {
namespace android {
namespace net {
namespace mdns {
namespace aidl {
class IMDnsDelegator;

class IMDns : public ::ndk::ICInterface {
public:
  typedef IMDnsDelegator DefaultDelegator;
  static const char* descriptor;
  IMDns();
  virtual ~IMDns();

  static constexpr uint32_t TRANSACTION_startDaemon = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_stopDaemon = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_registerService = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_discover = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_resolve = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_getServiceAddress = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_stopOperation = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_registerEventListener = FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_unregisterEventListener = FIRST_CALL_TRANSACTION + 8;

  static std::shared_ptr<IMDns> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IMDns>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IMDns>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IMDns>& impl);
  static const std::shared_ptr<IMDns>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus startDaemon() __attribute__((deprecated("unimplemented on V+."))) = 0;
  virtual ::ndk::ScopedAStatus stopDaemon() __attribute__((deprecated("unimplemented on V+."))) = 0;
  virtual ::ndk::ScopedAStatus registerService(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_info) __attribute__((deprecated("unimplemented on U+."))) = 0;
  virtual ::ndk::ScopedAStatus discover(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_info) __attribute__((deprecated("unimplemented on U+."))) = 0;
  virtual ::ndk::ScopedAStatus resolve(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_info) __attribute__((deprecated("unimplemented on U+."))) = 0;
  virtual ::ndk::ScopedAStatus getServiceAddress(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_info) __attribute__((deprecated("unimplemented on U+."))) = 0;
  virtual ::ndk::ScopedAStatus stopOperation(int32_t in_id) __attribute__((deprecated("unimplemented on U+."))) = 0;
  virtual ::ndk::ScopedAStatus registerEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) __attribute__((deprecated("unimplemented on U+."))) = 0;
  virtual ::ndk::ScopedAStatus unregisterEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) __attribute__((deprecated("unimplemented on U+."))) = 0;
private:
  static std::shared_ptr<IMDns> default_impl;
};
class IMDnsDefault : public IMDns {
public:
  ::ndk::ScopedAStatus startDaemon() override __attribute__((deprecated("unimplemented on V+.")));
  ::ndk::ScopedAStatus stopDaemon() override __attribute__((deprecated("unimplemented on V+.")));
  ::ndk::ScopedAStatus registerService(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus discover(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus resolve(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus getServiceAddress(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus stopOperation(int32_t in_id) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus registerEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus unregisterEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
