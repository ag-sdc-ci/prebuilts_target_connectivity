/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/INetd.aidl
 */
#pragma once

#include "aidl/android/net/INetd.h"

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
class BnNetd : public ::ndk::BnCInterface<INetd> {
public:
  BnNetd();
  virtual ~BnNetd();
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class INetdDelegator : public BnNetd {
public:
  explicit INetdDelegator(const std::shared_ptr<INetd> &impl) : _impl(impl) {
  }

  ::ndk::ScopedAStatus isAlive(bool* _aidl_return) override {
    return _impl->isAlive(_aidl_return);
  }
  ::ndk::ScopedAStatus firewallReplaceUidChain(const std::string& in_chainName, bool in_isAllowlist, const std::vector<int32_t>& in_uids, bool* _aidl_return) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->firewallReplaceUidChain(in_chainName, in_isAllowlist, in_uids, _aidl_return);
  }
  ::ndk::ScopedAStatus bandwidthEnableDataSaver(bool in_enable, bool* _aidl_return) override {
    return _impl->bandwidthEnableDataSaver(in_enable, _aidl_return);
  }
  ::ndk::ScopedAStatus networkCreatePhysical(int32_t in_netId, int32_t in_permission) override __attribute__((deprecated("use networkCreate() instead."))) {
    return _impl->networkCreatePhysical(in_netId, in_permission);
  }
  ::ndk::ScopedAStatus networkCreateVpn(int32_t in_netId, bool in_secure) override __attribute__((deprecated("use networkCreate() instead."))) {
    return _impl->networkCreateVpn(in_netId, in_secure);
  }
  ::ndk::ScopedAStatus networkDestroy(int32_t in_netId) override {
    return _impl->networkDestroy(in_netId);
  }
  ::ndk::ScopedAStatus networkAddInterface(int32_t in_netId, const std::string& in_iface) override {
    return _impl->networkAddInterface(in_netId, in_iface);
  }
  ::ndk::ScopedAStatus networkRemoveInterface(int32_t in_netId, const std::string& in_iface) override {
    return _impl->networkRemoveInterface(in_netId, in_iface);
  }
  ::ndk::ScopedAStatus networkAddUidRanges(int32_t in_netId, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) override {
    return _impl->networkAddUidRanges(in_netId, in_uidRanges);
  }
  ::ndk::ScopedAStatus networkRemoveUidRanges(int32_t in_netId, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) override {
    return _impl->networkRemoveUidRanges(in_netId, in_uidRanges);
  }
  ::ndk::ScopedAStatus networkRejectNonSecureVpn(bool in_add, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) override {
    return _impl->networkRejectNonSecureVpn(in_add, in_uidRanges);
  }
  ::ndk::ScopedAStatus socketDestroy(const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges, const std::vector<int32_t>& in_exemptUids) override {
    return _impl->socketDestroy(in_uidRanges, in_exemptUids);
  }
  ::ndk::ScopedAStatus tetherApplyDnsInterfaces(bool* _aidl_return) override {
    return _impl->tetherApplyDnsInterfaces(_aidl_return);
  }
  ::ndk::ScopedAStatus tetherGetStats(std::vector<::aidl::android::net::TetherStatsParcel>* _aidl_return) override {
    return _impl->tetherGetStats(_aidl_return);
  }
  ::ndk::ScopedAStatus interfaceAddAddress(const std::string& in_ifName, const std::string& in_addrString, int32_t in_prefixLength) override {
    return _impl->interfaceAddAddress(in_ifName, in_addrString, in_prefixLength);
  }
  ::ndk::ScopedAStatus interfaceDelAddress(const std::string& in_ifName, const std::string& in_addrString, int32_t in_prefixLength) override {
    return _impl->interfaceDelAddress(in_ifName, in_addrString, in_prefixLength);
  }
  ::ndk::ScopedAStatus getProcSysNet(int32_t in_ipversion, int32_t in_which, const std::string& in_ifname, const std::string& in_parameter, std::string* _aidl_return) override {
    return _impl->getProcSysNet(in_ipversion, in_which, in_ifname, in_parameter, _aidl_return);
  }
  ::ndk::ScopedAStatus setProcSysNet(int32_t in_ipversion, int32_t in_which, const std::string& in_ifname, const std::string& in_parameter, const std::string& in_value) override {
    return _impl->setProcSysNet(in_ipversion, in_which, in_ifname, in_parameter, in_value);
  }
  ::ndk::ScopedAStatus ipSecSetEncapSocketOwner(const ::ndk::ScopedFileDescriptor& in_socket, int32_t in_newUid) override {
    return _impl->ipSecSetEncapSocketOwner(in_socket, in_newUid);
  }
  ::ndk::ScopedAStatus ipSecAllocateSpi(int32_t in_transformId, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi, int32_t* _aidl_return) override {
    return _impl->ipSecAllocateSpi(in_transformId, in_sourceAddress, in_destinationAddress, in_spi, _aidl_return);
  }
  ::ndk::ScopedAStatus ipSecAddSecurityAssociation(int32_t in_transformId, int32_t in_mode, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_underlyingNetId, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, const std::string& in_authAlgo, const std::vector<uint8_t>& in_authKey, int32_t in_authTruncBits, const std::string& in_cryptAlgo, const std::vector<uint8_t>& in_cryptKey, int32_t in_cryptTruncBits, const std::string& in_aeadAlgo, const std::vector<uint8_t>& in_aeadKey, int32_t in_aeadIcvBits, int32_t in_encapType, int32_t in_encapLocalPort, int32_t in_encapRemotePort, int32_t in_interfaceId) override {
    return _impl->ipSecAddSecurityAssociation(in_transformId, in_mode, in_sourceAddress, in_destinationAddress, in_underlyingNetId, in_spi, in_markValue, in_markMask, in_authAlgo, in_authKey, in_authTruncBits, in_cryptAlgo, in_cryptKey, in_cryptTruncBits, in_aeadAlgo, in_aeadKey, in_aeadIcvBits, in_encapType, in_encapLocalPort, in_encapRemotePort, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecDeleteSecurityAssociation(int32_t in_transformId, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override {
    return _impl->ipSecDeleteSecurityAssociation(in_transformId, in_sourceAddress, in_destinationAddress, in_spi, in_markValue, in_markMask, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecApplyTransportModeTransform(const ::ndk::ScopedFileDescriptor& in_socket, int32_t in_transformId, int32_t in_direction, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi) override {
    return _impl->ipSecApplyTransportModeTransform(in_socket, in_transformId, in_direction, in_sourceAddress, in_destinationAddress, in_spi);
  }
  ::ndk::ScopedAStatus ipSecRemoveTransportModeTransform(const ::ndk::ScopedFileDescriptor& in_socket) override {
    return _impl->ipSecRemoveTransportModeTransform(in_socket);
  }
  ::ndk::ScopedAStatus ipSecAddSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, const std::string& in_tmplSrcAddress, const std::string& in_tmplDstAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override {
    return _impl->ipSecAddSecurityPolicy(in_transformId, in_selAddrFamily, in_direction, in_tmplSrcAddress, in_tmplDstAddress, in_spi, in_markValue, in_markMask, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecUpdateSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, const std::string& in_tmplSrcAddress, const std::string& in_tmplDstAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override {
    return _impl->ipSecUpdateSecurityPolicy(in_transformId, in_selAddrFamily, in_direction, in_tmplSrcAddress, in_tmplDstAddress, in_spi, in_markValue, in_markMask, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecDeleteSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override {
    return _impl->ipSecDeleteSecurityPolicy(in_transformId, in_selAddrFamily, in_direction, in_markValue, in_markMask, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecAddTunnelInterface(const std::string& in_deviceName, const std::string& in_localAddress, const std::string& in_remoteAddress, int32_t in_iKey, int32_t in_oKey, int32_t in_interfaceId) override {
    return _impl->ipSecAddTunnelInterface(in_deviceName, in_localAddress, in_remoteAddress, in_iKey, in_oKey, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecUpdateTunnelInterface(const std::string& in_deviceName, const std::string& in_localAddress, const std::string& in_remoteAddress, int32_t in_iKey, int32_t in_oKey, int32_t in_interfaceId) override {
    return _impl->ipSecUpdateTunnelInterface(in_deviceName, in_localAddress, in_remoteAddress, in_iKey, in_oKey, in_interfaceId);
  }
  ::ndk::ScopedAStatus ipSecRemoveTunnelInterface(const std::string& in_deviceName) override {
    return _impl->ipSecRemoveTunnelInterface(in_deviceName);
  }
  ::ndk::ScopedAStatus wakeupAddInterface(const std::string& in_ifName, const std::string& in_prefix, int32_t in_mark, int32_t in_mask) override {
    return _impl->wakeupAddInterface(in_ifName, in_prefix, in_mark, in_mask);
  }
  ::ndk::ScopedAStatus wakeupDelInterface(const std::string& in_ifName, const std::string& in_prefix, int32_t in_mark, int32_t in_mask) override {
    return _impl->wakeupDelInterface(in_ifName, in_prefix, in_mark, in_mask);
  }
  ::ndk::ScopedAStatus setIPv6AddrGenMode(const std::string& in_ifName, int32_t in_mode) override {
    return _impl->setIPv6AddrGenMode(in_ifName, in_mode);
  }
  ::ndk::ScopedAStatus idletimerAddInterface(const std::string& in_ifName, int32_t in_timeout, const std::string& in_classLabel) override {
    return _impl->idletimerAddInterface(in_ifName, in_timeout, in_classLabel);
  }
  ::ndk::ScopedAStatus idletimerRemoveInterface(const std::string& in_ifName, int32_t in_timeout, const std::string& in_classLabel) override {
    return _impl->idletimerRemoveInterface(in_ifName, in_timeout, in_classLabel);
  }
  ::ndk::ScopedAStatus strictUidCleartextPenalty(int32_t in_uid, int32_t in_policyPenalty) override {
    return _impl->strictUidCleartextPenalty(in_uid, in_policyPenalty);
  }
  ::ndk::ScopedAStatus clatdStart(const std::string& in_ifName, const std::string& in_nat64Prefix, std::string* _aidl_return) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The clatd control plane moved to the mainline module starting in T. See ClatCoordinator."))) {
    return _impl->clatdStart(in_ifName, in_nat64Prefix, _aidl_return);
  }
  ::ndk::ScopedAStatus clatdStop(const std::string& in_ifName) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The clatd control plane moved to the mainline module starting in T. See ClatCoordinator."))) {
    return _impl->clatdStop(in_ifName);
  }
  ::ndk::ScopedAStatus ipfwdEnabled(bool* _aidl_return) override {
    return _impl->ipfwdEnabled(_aidl_return);
  }
  ::ndk::ScopedAStatus ipfwdGetRequesterList(std::vector<std::string>* _aidl_return) override {
    return _impl->ipfwdGetRequesterList(_aidl_return);
  }
  ::ndk::ScopedAStatus ipfwdEnableForwarding(const std::string& in_requester) override {
    return _impl->ipfwdEnableForwarding(in_requester);
  }
  ::ndk::ScopedAStatus ipfwdDisableForwarding(const std::string& in_requester) override {
    return _impl->ipfwdDisableForwarding(in_requester);
  }
  ::ndk::ScopedAStatus ipfwdAddInterfaceForward(const std::string& in_fromIface, const std::string& in_toIface) override {
    return _impl->ipfwdAddInterfaceForward(in_fromIface, in_toIface);
  }
  ::ndk::ScopedAStatus ipfwdRemoveInterfaceForward(const std::string& in_fromIface, const std::string& in_toIface) override {
    return _impl->ipfwdRemoveInterfaceForward(in_fromIface, in_toIface);
  }
  ::ndk::ScopedAStatus bandwidthSetInterfaceQuota(const std::string& in_ifName, int64_t in_bytes) override {
    return _impl->bandwidthSetInterfaceQuota(in_ifName, in_bytes);
  }
  ::ndk::ScopedAStatus bandwidthRemoveInterfaceQuota(const std::string& in_ifName) override {
    return _impl->bandwidthRemoveInterfaceQuota(in_ifName);
  }
  ::ndk::ScopedAStatus bandwidthSetInterfaceAlert(const std::string& in_ifName, int64_t in_bytes) override {
    return _impl->bandwidthSetInterfaceAlert(in_ifName, in_bytes);
  }
  ::ndk::ScopedAStatus bandwidthRemoveInterfaceAlert(const std::string& in_ifName) override {
    return _impl->bandwidthRemoveInterfaceAlert(in_ifName);
  }
  ::ndk::ScopedAStatus bandwidthSetGlobalAlert(int64_t in_bytes) override {
    return _impl->bandwidthSetGlobalAlert(in_bytes);
  }
  ::ndk::ScopedAStatus bandwidthAddNaughtyApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->bandwidthAddNaughtyApp(in_uid);
  }
  ::ndk::ScopedAStatus bandwidthRemoveNaughtyApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->bandwidthRemoveNaughtyApp(in_uid);
  }
  ::ndk::ScopedAStatus bandwidthAddNiceApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->bandwidthAddNiceApp(in_uid);
  }
  ::ndk::ScopedAStatus bandwidthRemoveNiceApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->bandwidthRemoveNiceApp(in_uid);
  }
  ::ndk::ScopedAStatus tetherStart(const std::vector<std::string>& in_dhcpRanges) override {
    return _impl->tetherStart(in_dhcpRanges);
  }
  ::ndk::ScopedAStatus tetherStop() override {
    return _impl->tetherStop();
  }
  ::ndk::ScopedAStatus tetherIsEnabled(bool* _aidl_return) override {
    return _impl->tetherIsEnabled(_aidl_return);
  }
  ::ndk::ScopedAStatus tetherInterfaceAdd(const std::string& in_ifName) override {
    return _impl->tetherInterfaceAdd(in_ifName);
  }
  ::ndk::ScopedAStatus tetherInterfaceRemove(const std::string& in_ifName) override {
    return _impl->tetherInterfaceRemove(in_ifName);
  }
  ::ndk::ScopedAStatus tetherInterfaceList(std::vector<std::string>* _aidl_return) override {
    return _impl->tetherInterfaceList(_aidl_return);
  }
  ::ndk::ScopedAStatus tetherDnsSet(int32_t in_netId, const std::vector<std::string>& in_dnsAddrs) override {
    return _impl->tetherDnsSet(in_netId, in_dnsAddrs);
  }
  ::ndk::ScopedAStatus tetherDnsList(std::vector<std::string>* _aidl_return) override {
    return _impl->tetherDnsList(_aidl_return);
  }
  ::ndk::ScopedAStatus networkAddRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop) override {
    return _impl->networkAddRoute(in_netId, in_ifName, in_destination, in_nextHop);
  }
  ::ndk::ScopedAStatus networkRemoveRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop) override {
    return _impl->networkRemoveRoute(in_netId, in_ifName, in_destination, in_nextHop);
  }
  ::ndk::ScopedAStatus networkAddLegacyRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop, int32_t in_uid) override {
    return _impl->networkAddLegacyRoute(in_netId, in_ifName, in_destination, in_nextHop, in_uid);
  }
  ::ndk::ScopedAStatus networkRemoveLegacyRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop, int32_t in_uid) override {
    return _impl->networkRemoveLegacyRoute(in_netId, in_ifName, in_destination, in_nextHop, in_uid);
  }
  ::ndk::ScopedAStatus networkGetDefault(int32_t* _aidl_return) override {
    return _impl->networkGetDefault(_aidl_return);
  }
  ::ndk::ScopedAStatus networkSetDefault(int32_t in_netId) override {
    return _impl->networkSetDefault(in_netId);
  }
  ::ndk::ScopedAStatus networkClearDefault() override {
    return _impl->networkClearDefault();
  }
  ::ndk::ScopedAStatus networkSetPermissionForNetwork(int32_t in_netId, int32_t in_permission) override {
    return _impl->networkSetPermissionForNetwork(in_netId, in_permission);
  }
  ::ndk::ScopedAStatus networkSetPermissionForUser(int32_t in_permission, const std::vector<int32_t>& in_uids) override {
    return _impl->networkSetPermissionForUser(in_permission, in_uids);
  }
  ::ndk::ScopedAStatus networkClearPermissionForUser(const std::vector<int32_t>& in_uids) override {
    return _impl->networkClearPermissionForUser(in_uids);
  }
  ::ndk::ScopedAStatus trafficSetNetPermForUids(int32_t in_permission, const std::vector<int32_t>& in_uids) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->trafficSetNetPermForUids(in_permission, in_uids);
  }
  ::ndk::ScopedAStatus networkSetProtectAllow(int32_t in_uid) override {
    return _impl->networkSetProtectAllow(in_uid);
  }
  ::ndk::ScopedAStatus networkSetProtectDeny(int32_t in_uid) override {
    return _impl->networkSetProtectDeny(in_uid);
  }
  ::ndk::ScopedAStatus networkCanProtect(int32_t in_uid, bool* _aidl_return) override {
    return _impl->networkCanProtect(in_uid, _aidl_return);
  }
  ::ndk::ScopedAStatus firewallSetFirewallType(int32_t in_firewalltype) override {
    return _impl->firewallSetFirewallType(in_firewalltype);
  }
  ::ndk::ScopedAStatus firewallSetInterfaceRule(const std::string& in_ifName, int32_t in_firewallRule) override {
    return _impl->firewallSetInterfaceRule(in_ifName, in_firewallRule);
  }
  ::ndk::ScopedAStatus firewallSetUidRule(int32_t in_childChain, int32_t in_uid, int32_t in_firewallRule) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->firewallSetUidRule(in_childChain, in_uid, in_firewallRule);
  }
  ::ndk::ScopedAStatus firewallEnableChildChain(int32_t in_childChain, bool in_enable) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->firewallEnableChildChain(in_childChain, in_enable);
  }
  ::ndk::ScopedAStatus interfaceGetList(std::vector<std::string>* _aidl_return) override {
    return _impl->interfaceGetList(_aidl_return);
  }
  ::ndk::ScopedAStatus interfaceGetCfg(const std::string& in_ifName, ::aidl::android::net::InterfaceConfigurationParcel* _aidl_return) override {
    return _impl->interfaceGetCfg(in_ifName, _aidl_return);
  }
  ::ndk::ScopedAStatus interfaceSetCfg(const ::aidl::android::net::InterfaceConfigurationParcel& in_cfg) override {
    return _impl->interfaceSetCfg(in_cfg);
  }
  ::ndk::ScopedAStatus interfaceSetIPv6PrivacyExtensions(const std::string& in_ifName, bool in_enable) override {
    return _impl->interfaceSetIPv6PrivacyExtensions(in_ifName, in_enable);
  }
  ::ndk::ScopedAStatus interfaceClearAddrs(const std::string& in_ifName) override {
    return _impl->interfaceClearAddrs(in_ifName);
  }
  ::ndk::ScopedAStatus interfaceSetEnableIPv6(const std::string& in_ifName, bool in_enable) override {
    return _impl->interfaceSetEnableIPv6(in_ifName, in_enable);
  }
  ::ndk::ScopedAStatus interfaceSetMtu(const std::string& in_ifName, int32_t in_mtu) override {
    return _impl->interfaceSetMtu(in_ifName, in_mtu);
  }
  ::ndk::ScopedAStatus tetherAddForward(const std::string& in_intIface, const std::string& in_extIface) override {
    return _impl->tetherAddForward(in_intIface, in_extIface);
  }
  ::ndk::ScopedAStatus tetherRemoveForward(const std::string& in_intIface, const std::string& in_extIface) override {
    return _impl->tetherRemoveForward(in_intIface, in_extIface);
  }
  ::ndk::ScopedAStatus setTcpRWmemorySize(const std::string& in_rmemValues, const std::string& in_wmemValues) override {
    return _impl->setTcpRWmemorySize(in_rmemValues, in_wmemValues);
  }
  ::ndk::ScopedAStatus registerUnsolicitedEventListener(const std::shared_ptr<::aidl::android::net::INetdUnsolicitedEventListener>& in_listener) override {
    return _impl->registerUnsolicitedEventListener(in_listener);
  }
  ::ndk::ScopedAStatus firewallAddUidInterfaceRules(const std::string& in_ifName, const std::vector<int32_t>& in_uids) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->firewallAddUidInterfaceRules(in_ifName, in_uids);
  }
  ::ndk::ScopedAStatus firewallRemoveUidInterfaceRules(const std::vector<int32_t>& in_uids) override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->firewallRemoveUidInterfaceRules(in_uids);
  }
  ::ndk::ScopedAStatus trafficSwapActiveStatsMap() override __attribute__((deprecated("unimplemented on T+."))) {
    return _impl->trafficSwapActiveStatsMap();
  }
  ::ndk::ScopedAStatus getOemNetd(::ndk::SpAIBinder* _aidl_return) override {
    return _impl->getOemNetd(_aidl_return);
  }
  ::ndk::ScopedAStatus tetherStartWithConfiguration(const ::aidl::android::net::TetherConfigParcel& in_config) override {
    return _impl->tetherStartWithConfiguration(in_config);
  }
  ::ndk::ScopedAStatus getFwmarkForNetwork(int32_t in_netId, ::aidl::android::net::MarkMaskParcel* _aidl_return) override {
    return _impl->getFwmarkForNetwork(in_netId, _aidl_return);
  }
  ::ndk::ScopedAStatus networkAddRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) override {
    return _impl->networkAddRouteParcel(in_netId, in_routeInfo);
  }
  ::ndk::ScopedAStatus networkUpdateRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) override {
    return _impl->networkUpdateRouteParcel(in_netId, in_routeInfo);
  }
  ::ndk::ScopedAStatus networkRemoveRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) override {
    return _impl->networkRemoveRouteParcel(in_netId, in_routeInfo);
  }
  ::ndk::ScopedAStatus tetherOffloadRuleAdd(const ::aidl::android::net::TetherOffloadRuleParcel& in_rule) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) {
    return _impl->tetherOffloadRuleAdd(in_rule);
  }
  ::ndk::ScopedAStatus tetherOffloadRuleRemove(const ::aidl::android::net::TetherOffloadRuleParcel& in_rule) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) {
    return _impl->tetherOffloadRuleRemove(in_rule);
  }
  ::ndk::ScopedAStatus tetherOffloadGetStats(std::vector<::aidl::android::net::TetherStatsParcel>* _aidl_return) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) {
    return _impl->tetherOffloadGetStats(_aidl_return);
  }
  ::ndk::ScopedAStatus tetherOffloadSetInterfaceQuota(int32_t in_ifIndex, int64_t in_quotaBytes) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) {
    return _impl->tetherOffloadSetInterfaceQuota(in_ifIndex, in_quotaBytes);
  }
  ::ndk::ScopedAStatus tetherOffloadGetAndClearStats(int32_t in_ifIndex, ::aidl::android::net::TetherStatsParcel* _aidl_return) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) {
    return _impl->tetherOffloadGetAndClearStats(in_ifIndex, _aidl_return);
  }
  ::ndk::ScopedAStatus networkCreate(const ::aidl::android::net::NativeNetworkConfig& in_config) override {
    return _impl->networkCreate(in_config);
  }
  ::ndk::ScopedAStatus networkAddUidRangesParcel(const ::aidl::android::net::netd::aidl::NativeUidRangeConfig& in_uidRangesConfig) override {
    return _impl->networkAddUidRangesParcel(in_uidRangesConfig);
  }
  ::ndk::ScopedAStatus networkRemoveUidRangesParcel(const ::aidl::android::net::netd::aidl::NativeUidRangeConfig& in_uidRangesConfig) override {
    return _impl->networkRemoveUidRangesParcel(in_uidRangesConfig);
  }
  ::ndk::ScopedAStatus ipSecMigrate(const ::aidl::android::net::IpSecMigrateInfoParcel& in_migrateInfo) override {
    return _impl->ipSecMigrate(in_migrateInfo);
  }
  ::ndk::ScopedAStatus setNetworkAllowlist(const std::vector<::aidl::android::net::netd::aidl::NativeUidRangeConfig>& in_allowedNetworks) override {
    return _impl->setNetworkAllowlist(in_allowedNetworks);
  }
protected:
private:
  std::shared_ptr<INetd> _impl;
};

}  // namespace net
}  // namespace android
}  // namespace aidl
