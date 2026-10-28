/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/IMDnsEventListener.aidl
 */
#pragma once

#include "aidl/android/net/mdns/aidl/IMDnsEventListener.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace net {
namespace mdns {
namespace aidl {
class BpMDnsEventListener : public ::ndk::BpCInterface<IMDnsEventListener> {
public:
  explicit BpMDnsEventListener(const ::ndk::SpAIBinder& binder);
  virtual ~BpMDnsEventListener();

  ::ndk::ScopedAStatus onServiceRegistrationStatus(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::ScopedAStatus onServiceDiscoveryStatus(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::ScopedAStatus onServiceResolutionStatus(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
  ::ndk::ScopedAStatus onGettingServiceAddressStatus(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_status) override __attribute__((deprecated("this is implemented for backward compatibility. Don't use it in new code.")));
};
}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
