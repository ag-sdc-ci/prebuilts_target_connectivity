/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/IMDnsEventListener.aidl
 */
#pragma once

#include "aidl/android/net/mdns/aidl/IMDnsEventListener.h"

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
class BnMDnsEventListener : public ::ndk::BnCInterface<IMDnsEventListener> {
public:
  BnMDnsEventListener();
  virtual ~BnMDnsEventListener();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IMDnsEventListenerDelegator : public BnMDnsEventListener {
public:
  explicit IMDnsEventListenerDelegator(const std::shared_ptr<IMDnsEventListener> &impl) : _impl(impl) {
  }

  ::ndk::ScopedAStatus onServiceRegistrationStatus(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) {
    return _impl->onServiceRegistrationStatus(in_status);
  }
  ::ndk::ScopedAStatus onServiceDiscoveryStatus(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) {
    return _impl->onServiceDiscoveryStatus(in_status);
  }
  ::ndk::ScopedAStatus onServiceResolutionStatus(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) {
    return _impl->onServiceResolutionStatus(in_status);
  }
  ::ndk::ScopedAStatus onGettingServiceAddressStatus(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code."))) {
    return _impl->onGettingServiceAddressStatus(in_status);
  }
protected:
private:
  std::shared_ptr<IMDnsEventListener> _impl;
};

}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
