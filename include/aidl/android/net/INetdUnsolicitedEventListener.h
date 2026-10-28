/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/INetdUnsolicitedEventListener.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace net {
class INetdUnsolicitedEventListenerDelegator;

class INetdUnsolicitedEventListener : public ::ndk::ICInterface {
public:
  typedef INetdUnsolicitedEventListenerDelegator DefaultDelegator;
  static const char* descriptor;
  INetdUnsolicitedEventListener();
  virtual ~INetdUnsolicitedEventListener();

  static constexpr uint32_t TRANSACTION_onInterfaceClassActivityChanged = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_onQuotaLimitReached = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_onInterfaceDnsServerInfo = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_onInterfaceAddressUpdated = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_onInterfaceAddressRemoved = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_onInterfaceAdded = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_onInterfaceRemoved = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_onInterfaceChanged = FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_onInterfaceLinkStateChanged = FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_onRouteChanged = FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_onStrictCleartextDetected = FIRST_CALL_TRANSACTION + 10;

  static std::shared_ptr<INetdUnsolicitedEventListener> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<INetdUnsolicitedEventListener>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<INetdUnsolicitedEventListener>* instance);
  static bool setDefaultImpl(const std::shared_ptr<INetdUnsolicitedEventListener>& impl);
  static const std::shared_ptr<INetdUnsolicitedEventListener>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus onInterfaceClassActivityChanged(bool in_isActive, int32_t in_timerLabel, int64_t in_timestampNs, int32_t in_uid) = 0;
  virtual ::ndk::ScopedAStatus onQuotaLimitReached(const std::string& in_alertName, const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceDnsServerInfo(const std::string& in_ifName, int64_t in_lifetimeS, const std::vector<std::string>& in_servers) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceAddressUpdated(const std::string& in_addr, const std::string& in_ifName, int32_t in_flags, int32_t in_scope) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceAddressRemoved(const std::string& in_addr, const std::string& in_ifName, int32_t in_flags, int32_t in_scope) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceAdded(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceRemoved(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceChanged(const std::string& in_ifName, bool in_up) = 0;
  virtual ::ndk::ScopedAStatus onInterfaceLinkStateChanged(const std::string& in_ifName, bool in_up) = 0;
  virtual ::ndk::ScopedAStatus onRouteChanged(bool in_updated, const std::string& in_route, const std::string& in_gateway, const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus onStrictCleartextDetected(int32_t in_uid, const std::string& in_hex) = 0;
private:
  static std::shared_ptr<INetdUnsolicitedEventListener> default_impl;
};
class INetdUnsolicitedEventListenerDefault : public INetdUnsolicitedEventListener {
public:
  ::ndk::ScopedAStatus onInterfaceClassActivityChanged(bool in_isActive, int32_t in_timerLabel, int64_t in_timestampNs, int32_t in_uid) override;
  ::ndk::ScopedAStatus onQuotaLimitReached(const std::string& in_alertName, const std::string& in_ifName) override;
  ::ndk::ScopedAStatus onInterfaceDnsServerInfo(const std::string& in_ifName, int64_t in_lifetimeS, const std::vector<std::string>& in_servers) override;
  ::ndk::ScopedAStatus onInterfaceAddressUpdated(const std::string& in_addr, const std::string& in_ifName, int32_t in_flags, int32_t in_scope) override;
  ::ndk::ScopedAStatus onInterfaceAddressRemoved(const std::string& in_addr, const std::string& in_ifName, int32_t in_flags, int32_t in_scope) override;
  ::ndk::ScopedAStatus onInterfaceAdded(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus onInterfaceRemoved(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus onInterfaceChanged(const std::string& in_ifName, bool in_up) override;
  ::ndk::ScopedAStatus onInterfaceLinkStateChanged(const std::string& in_ifName, bool in_up) override;
  ::ndk::ScopedAStatus onRouteChanged(bool in_updated, const std::string& in_route, const std::string& in_gateway, const std::string& in_ifName) override;
  ::ndk::ScopedAStatus onStrictCleartextDetected(int32_t in_uid, const std::string& in_hex) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace net
}  // namespace android
}  // namespace aidl
