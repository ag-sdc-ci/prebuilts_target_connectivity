/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/INetdUnsolicitedEventListener.aidl
 */
#pragma once

#include "aidl/android/net/INetdUnsolicitedEventListener.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace net {
class BnNetdUnsolicitedEventListener : public ::ndk::BnCInterface<INetdUnsolicitedEventListener> {
public:
  BnNetdUnsolicitedEventListener();
  virtual ~BnNetdUnsolicitedEventListener();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class INetdUnsolicitedEventListenerDelegator : public BnNetdUnsolicitedEventListener {
public:
  explicit INetdUnsolicitedEventListenerDelegator(const std::shared_ptr<INetdUnsolicitedEventListener> &impl) : _impl(impl) {
  }

  ::ndk::ScopedAStatus onInterfaceClassActivityChanged(bool in_isActive, int32_t in_timerLabel, int64_t in_timestampNs, int32_t in_uid) override {
    return _impl->onInterfaceClassActivityChanged(in_isActive, in_timerLabel, in_timestampNs, in_uid);
  }
  ::ndk::ScopedAStatus onQuotaLimitReached(const std::string& in_alertName, const std::string& in_ifName) override {
    return _impl->onQuotaLimitReached(in_alertName, in_ifName);
  }
  ::ndk::ScopedAStatus onInterfaceDnsServerInfo(const std::string& in_ifName, int64_t in_lifetimeS, const std::vector<std::string>& in_servers) override {
    return _impl->onInterfaceDnsServerInfo(in_ifName, in_lifetimeS, in_servers);
  }
  ::ndk::ScopedAStatus onInterfaceAddressUpdated(const std::string& in_addr, const std::string& in_ifName, int32_t in_flags, int32_t in_scope) override {
    return _impl->onInterfaceAddressUpdated(in_addr, in_ifName, in_flags, in_scope);
  }
  ::ndk::ScopedAStatus onInterfaceAddressRemoved(const std::string& in_addr, const std::string& in_ifName, int32_t in_flags, int32_t in_scope) override {
    return _impl->onInterfaceAddressRemoved(in_addr, in_ifName, in_flags, in_scope);
  }
  ::ndk::ScopedAStatus onInterfaceAdded(const std::string& in_ifName) override {
    return _impl->onInterfaceAdded(in_ifName);
  }
  ::ndk::ScopedAStatus onInterfaceRemoved(const std::string& in_ifName) override {
    return _impl->onInterfaceRemoved(in_ifName);
  }
  ::ndk::ScopedAStatus onInterfaceChanged(const std::string& in_ifName, bool in_up) override {
    return _impl->onInterfaceChanged(in_ifName, in_up);
  }
  ::ndk::ScopedAStatus onInterfaceLinkStateChanged(const std::string& in_ifName, bool in_up) override {
    return _impl->onInterfaceLinkStateChanged(in_ifName, in_up);
  }
  ::ndk::ScopedAStatus onRouteChanged(bool in_updated, const std::string& in_route, const std::string& in_gateway, const std::string& in_ifName) override {
    return _impl->onRouteChanged(in_updated, in_route, in_gateway, in_ifName);
  }
  ::ndk::ScopedAStatus onStrictCleartextDetected(int32_t in_uid, const std::string& in_hex) override {
    return _impl->onStrictCleartextDetected(in_uid, in_hex);
  }
protected:
private:
  std::shared_ptr<INetdUnsolicitedEventListener> _impl;
};

}  // namespace net
}  // namespace android
}  // namespace aidl
