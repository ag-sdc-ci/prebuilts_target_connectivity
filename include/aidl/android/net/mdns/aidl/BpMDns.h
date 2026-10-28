/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/IMDns.aidl
 */
#pragma once

#include "aidl/android/net/mdns/aidl/IMDns.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace net {
namespace mdns {
namespace aidl {
class BpMDns : public ::ndk::BpCInterface<IMDns> {
public:
  explicit BpMDns(const ::ndk::SpAIBinder& binder);
  virtual ~BpMDns();

  ::ndk::ScopedAStatus startDaemon() override __attribute__((deprecated("unimplemented on V+.")));
  ::ndk::ScopedAStatus stopDaemon() override __attribute__((deprecated("unimplemented on V+.")));
  ::ndk::ScopedAStatus registerService(const ::aidl::android::net::mdns::aidl::RegistrationInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus discover(const ::aidl::android::net::mdns::aidl::DiscoveryInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus resolve(const ::aidl::android::net::mdns::aidl::ResolutionInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus getServiceAddress(const ::aidl::android::net::mdns::aidl::GetAddressInfo& in_info) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus stopOperation(int32_t in_id) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus registerEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) override __attribute__((deprecated("unimplemented on U+.")));
  ::ndk::ScopedAStatus unregisterEventListener(const std::shared_ptr<::aidl::android::net::mdns::aidl::IMDnsEventListener>& in_listener) override __attribute__((deprecated("unimplemented on U+.")));
};
}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
