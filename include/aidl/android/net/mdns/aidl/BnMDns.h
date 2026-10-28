/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/IMDns.aidl
 */
#pragma once

#include "aidl/android/net/mdns/aidl/IMDns.h"

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
namespace mdns {
namespace aidl {
class BnMDns : public ::ndk::BnCInterface<IMDns> {
public:
  BnMDns();
  virtual ~BnMDns();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IMDnsDelegator : public BnMDns {
public:
  explicit IMDnsDelegator(const std::shared_ptr<IMDns> &impl) : _impl(impl) {
  }

  ::ndk::ScopedAStatus startDaemon() override __attribute__((deprecated("unimplemented on V+."))) {
    return _impl->startDaemon();
  }
  ::ndk::ScopedAStatus stopDaemon() override __attribute__((deprecated("unimplemented on V+."))) {
    return _impl->stopDaemon();
  }
  ::ndk::ScopedAStatus registerService(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_info) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->registerService(in_info);
  }
  ::ndk::ScopedAStatus discover(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_info) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->discover(in_info);
  }
  ::ndk::ScopedAStatus resolve(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_info) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->resolve(in_info);
  }
  ::ndk::ScopedAStatus getServiceAddress(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_info) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->getServiceAddress(in_info);
  }
  ::ndk::ScopedAStatus stopOperation(int32_t in_id) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->stopOperation(in_id);
  }
  ::ndk::ScopedAStatus registerEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->registerEventListener(in_listener);
  }
  ::ndk::ScopedAStatus unregisterEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) override __attribute__((deprecated("unimplemented on U+."))) {
    return _impl->unregisterEventListener(in_listener);
  }
protected:
private:
  std::shared_ptr<IMDns> _impl;
};

}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
