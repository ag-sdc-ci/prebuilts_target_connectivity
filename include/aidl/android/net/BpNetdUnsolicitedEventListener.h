/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/INetdUnsolicitedEventListener.aidl
 */
#pragma once

#include "aidl/android/net/INetdUnsolicitedEventListener.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace net {
class BpNetdUnsolicitedEventListener : public ::ndk::BpCInterface<INetdUnsolicitedEventListener> {
public:
  explicit BpNetdUnsolicitedEventListener(const ::ndk::SpAIBinder& binder);
  virtual ~BpNetdUnsolicitedEventListener();

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
};
}  // namespace net
}  // namespace android
}  // namespace aidl
