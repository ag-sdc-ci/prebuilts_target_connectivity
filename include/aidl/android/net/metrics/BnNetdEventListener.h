/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/metrics/INetdEventListener.aidl
 */
#pragma once

#include "aidl/android/net/metrics/INetdEventListener.h"

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
namespace metrics {
class BnNetdEventListener : public ::ndk::BnCInterface<INetdEventListener> {
public:
  BnNetdEventListener();
  virtual ~BnNetdEventListener();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class INetdEventListenerDelegator : public BnNetdEventListener {
public:
  explicit INetdEventListenerDelegator(const std::shared_ptr<INetdEventListener> &impl) : _impl(impl) {
  }

  ::ndk::ScopedAStatus onDnsEvent(int32_t in_netId, int32_t in_eventType, int32_t in_returnCode, int32_t in_latencyMs, const std::string& in_hostname, const std::vector<std::string>& in_ipAddresses, int32_t in_ipAddressesCount, int32_t in_uid) override {
    return _impl->onDnsEvent(in_netId, in_eventType, in_returnCode, in_latencyMs, in_hostname, in_ipAddresses, in_ipAddressesCount, in_uid);
  }
  ::ndk::ScopedAStatus onPrivateDnsValidationEvent(int32_t in_netId, const std::string& in_ipAddress, const std::string& in_hostname, bool in_validated) override {
    return _impl->onPrivateDnsValidationEvent(in_netId, in_ipAddress, in_hostname, in_validated);
  }
  ::ndk::ScopedAStatus onConnectEvent(int32_t in_netId, int32_t in_error, int32_t in_latencyMs, const std::string& in_ipAddr, int32_t in_port, int32_t in_uid) override {
    return _impl->onConnectEvent(in_netId, in_error, in_latencyMs, in_ipAddr, in_port, in_uid);
  }
  ::ndk::ScopedAStatus onWakeupEvent(const std::string& in_prefix, int32_t in_uid, int32_t in_ethertype, int32_t in_ipNextHeader, const std::vector<uint8_t>& in_dstHw, const std::string& in_srcIp, const std::string& in_dstIp, int32_t in_srcPort, int32_t in_dstPort, int64_t in_timestampNs) override {
    return _impl->onWakeupEvent(in_prefix, in_uid, in_ethertype, in_ipNextHeader, in_dstHw, in_srcIp, in_dstIp, in_srcPort, in_dstPort, in_timestampNs);
  }
  ::ndk::ScopedAStatus onTcpSocketStatsEvent(const std::vector<int32_t>& in_networkIds, const std::vector<int32_t>& in_sentPackets, const std::vector<int32_t>& in_lostPackets, const std::vector<int32_t>& in_rttUs, const std::vector<int32_t>& in_sentAckDiffMs) override {
    return _impl->onTcpSocketStatsEvent(in_networkIds, in_sentPackets, in_lostPackets, in_rttUs, in_sentAckDiffMs);
  }
  ::ndk::ScopedAStatus onNat64PrefixEvent(int32_t in_netId, bool in_added, const std::string& in_prefixString, int32_t in_prefixLength) override {
    return _impl->onNat64PrefixEvent(in_netId, in_added, in_prefixString, in_prefixLength);
  }
protected:
private:
  std::shared_ptr<INetdEventListener> _impl;
};

}  // namespace metrics
}  // namespace net
}  // namespace android
}  // namespace aidl
