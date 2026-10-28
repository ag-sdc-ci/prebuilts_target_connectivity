/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/INetd.aidl
 */
#pragma once

#include "aidl/android/net/INetd.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace net {
class BpNetd : public ::ndk::BpCInterface<INetd> {
public:
  explicit BpNetd(const ::ndk::SpAIBinder& binder);
  virtual ~BpNetd();

  ::ndk::ScopedAStatus isAlive(bool* _aidl_return) override;
  ::ndk::ScopedAStatus firewallReplaceUidChain(const std::string& in_chainName, bool in_isAllowlist, const std::vector<int32_t>& in_uids, bool* _aidl_return) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus bandwidthEnableDataSaver(bool in_enable, bool* _aidl_return) override;
  ::ndk::ScopedAStatus networkCreatePhysical(int32_t in_netId, int32_t in_permission) override __attribute__((deprecated("use networkCreate() instead.")));
  ::ndk::ScopedAStatus networkCreateVpn(int32_t in_netId, bool in_secure) override __attribute__((deprecated("use networkCreate() instead.")));
  ::ndk::ScopedAStatus networkDestroy(int32_t in_netId) override;
  ::ndk::ScopedAStatus networkAddInterface(int32_t in_netId, const std::string& in_iface) override;
  ::ndk::ScopedAStatus networkRemoveInterface(int32_t in_netId, const std::string& in_iface) override;
  ::ndk::ScopedAStatus networkAddUidRanges(int32_t in_netId, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) override;
  ::ndk::ScopedAStatus networkRemoveUidRanges(int32_t in_netId, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) override;
  ::ndk::ScopedAStatus networkRejectNonSecureVpn(bool in_add, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) override;
  ::ndk::ScopedAStatus socketDestroy(const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges, const std::vector<int32_t>& in_exemptUids) override;
  ::ndk::ScopedAStatus tetherApplyDnsInterfaces(bool* _aidl_return) override;
  ::ndk::ScopedAStatus tetherGetStats(std::vector<::aidl::android::net::TetherStatsParcel>* _aidl_return) override;
  ::ndk::ScopedAStatus interfaceAddAddress(const std::string& in_ifName, const std::string& in_addrString, int32_t in_prefixLength) override;
  ::ndk::ScopedAStatus interfaceDelAddress(const std::string& in_ifName, const std::string& in_addrString, int32_t in_prefixLength) override;
  ::ndk::ScopedAStatus getProcSysNet(int32_t in_ipversion, int32_t in_which, const std::string& in_ifname, const std::string& in_parameter, std::string* _aidl_return) override;
  ::ndk::ScopedAStatus setProcSysNet(int32_t in_ipversion, int32_t in_which, const std::string& in_ifname, const std::string& in_parameter, const std::string& in_value) override;
  ::ndk::ScopedAStatus ipSecSetEncapSocketOwner(const ::ndk::ScopedFileDescriptor& in_socket, int32_t in_newUid) override;
  ::ndk::ScopedAStatus ipSecAllocateSpi(int32_t in_transformId, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi, int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus ipSecAddSecurityAssociation(int32_t in_transformId, int32_t in_mode, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_underlyingNetId, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, const std::string& in_authAlgo, const std::vector<uint8_t>& in_authKey, int32_t in_authTruncBits, const std::string& in_cryptAlgo, const std::vector<uint8_t>& in_cryptKey, int32_t in_cryptTruncBits, const std::string& in_aeadAlgo, const std::vector<uint8_t>& in_aeadKey, int32_t in_aeadIcvBits, int32_t in_encapType, int32_t in_encapLocalPort, int32_t in_encapRemotePort, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecDeleteSecurityAssociation(int32_t in_transformId, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecApplyTransportModeTransform(const ::ndk::ScopedFileDescriptor& in_socket, int32_t in_transformId, int32_t in_direction, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi) override;
  ::ndk::ScopedAStatus ipSecRemoveTransportModeTransform(const ::ndk::ScopedFileDescriptor& in_socket) override;
  ::ndk::ScopedAStatus ipSecAddSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, const std::string& in_tmplSrcAddress, const std::string& in_tmplDstAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecUpdateSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, const std::string& in_tmplSrcAddress, const std::string& in_tmplDstAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecDeleteSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecAddTunnelInterface(const std::string& in_deviceName, const std::string& in_localAddress, const std::string& in_remoteAddress, int32_t in_iKey, int32_t in_oKey, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecUpdateTunnelInterface(const std::string& in_deviceName, const std::string& in_localAddress, const std::string& in_remoteAddress, int32_t in_iKey, int32_t in_oKey, int32_t in_interfaceId) override;
  ::ndk::ScopedAStatus ipSecRemoveTunnelInterface(const std::string& in_deviceName) override;
  ::ndk::ScopedAStatus wakeupAddInterface(const std::string& in_ifName, const std::string& in_prefix, int32_t in_mark, int32_t in_mask) override;
  ::ndk::ScopedAStatus wakeupDelInterface(const std::string& in_ifName, const std::string& in_prefix, int32_t in_mark, int32_t in_mask) override;
  ::ndk::ScopedAStatus setIPv6AddrGenMode(const std::string& in_ifName, int32_t in_mode) override;
  ::ndk::ScopedAStatus idletimerAddInterface(const std::string& in_ifName, int32_t in_timeout, const std::string& in_classLabel) override;
  ::ndk::ScopedAStatus idletimerRemoveInterface(const std::string& in_ifName, int32_t in_timeout, const std::string& in_classLabel) override;
  ::ndk::ScopedAStatus strictUidCleartextPenalty(int32_t in_uid, int32_t in_policyPenalty) override;
  ::ndk::ScopedAStatus clatdStart(const std::string& in_ifName, const std::string& in_nat64Prefix, std::string* _aidl_return) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The clatd control plane moved to the mainline module starting in T. See ClatCoordinator.")));
  ::ndk::ScopedAStatus clatdStop(const std::string& in_ifName) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The clatd control plane moved to the mainline module starting in T. See ClatCoordinator.")));
  ::ndk::ScopedAStatus ipfwdEnabled(bool* _aidl_return) override;
  ::ndk::ScopedAStatus ipfwdGetRequesterList(std::vector<std::string>* _aidl_return) override;
  ::ndk::ScopedAStatus ipfwdEnableForwarding(const std::string& in_requester) override;
  ::ndk::ScopedAStatus ipfwdDisableForwarding(const std::string& in_requester) override;
  ::ndk::ScopedAStatus ipfwdAddInterfaceForward(const std::string& in_fromIface, const std::string& in_toIface) override;
  ::ndk::ScopedAStatus ipfwdRemoveInterfaceForward(const std::string& in_fromIface, const std::string& in_toIface) override;
  ::ndk::ScopedAStatus bandwidthSetInterfaceQuota(const std::string& in_ifName, int64_t in_bytes) override;
  ::ndk::ScopedAStatus bandwidthRemoveInterfaceQuota(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus bandwidthSetInterfaceAlert(const std::string& in_ifName, int64_t in_bytes) override;
  ::ndk::ScopedAStatus bandwidthRemoveInterfaceAlert(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus bandwidthSetGlobalAlert(int64_t in_bytes) override;
  ::ndk::ScopedAStatus bandwidthAddNaughtyApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus bandwidthRemoveNaughtyApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus bandwidthAddNiceApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus bandwidthRemoveNiceApp(int32_t in_uid) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus tetherStart(const std::vector<std::string>& in_dhcpRanges) override;
  ::ndk::ScopedAStatus tetherStop() override;
  ::ndk::ScopedAStatus tetherIsEnabled(bool* _aidl_return) override;
  ::ndk::ScopedAStatus tetherInterfaceAdd(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus tetherInterfaceRemove(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus tetherInterfaceList(std::vector<std::string>* _aidl_return) override;
  ::ndk::ScopedAStatus tetherDnsSet(int32_t in_netId, const std::vector<std::string>& in_dnsAddrs) override;
  ::ndk::ScopedAStatus tetherDnsList(std::vector<std::string>* _aidl_return) override;
  ::ndk::ScopedAStatus networkAddRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop) override;
  ::ndk::ScopedAStatus networkRemoveRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop) override;
  ::ndk::ScopedAStatus networkAddLegacyRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop, int32_t in_uid) override;
  ::ndk::ScopedAStatus networkRemoveLegacyRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop, int32_t in_uid) override;
  ::ndk::ScopedAStatus networkGetDefault(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus networkSetDefault(int32_t in_netId) override;
  ::ndk::ScopedAStatus networkClearDefault() override;
  ::ndk::ScopedAStatus networkSetPermissionForNetwork(int32_t in_netId, int32_t in_permission) override;
  ::ndk::ScopedAStatus networkSetPermissionForUser(int32_t in_permission, const std::vector<int32_t>& in_uids) override;
  ::ndk::ScopedAStatus networkClearPermissionForUser(const std::vector<int32_t>& in_uids) override;
  ::ndk::ScopedAStatus trafficSetNetPermForUids(int32_t in_permission, const std::vector<int32_t>& in_uids) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus networkSetProtectAllow(int32_t in_uid) override;
  ::ndk::ScopedAStatus networkSetProtectDeny(int32_t in_uid) override;
  ::ndk::ScopedAStatus networkCanProtect(int32_t in_uid, bool* _aidl_return) override;
  ::ndk::ScopedAStatus firewallSetFirewallType(int32_t in_firewalltype) override;
  ::ndk::ScopedAStatus firewallSetInterfaceRule(const std::string& in_ifName, int32_t in_firewallRule) override;
  ::ndk::ScopedAStatus firewallSetUidRule(int32_t in_childChain, int32_t in_uid, int32_t in_firewallRule) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus firewallEnableChildChain(int32_t in_childChain, bool in_enable) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus interfaceGetList(std::vector<std::string>* _aidl_return) override;
  ::ndk::ScopedAStatus interfaceGetCfg(const std::string& in_ifName, ::aidl::android::net::InterfaceConfigurationParcel* _aidl_return) override;
  ::ndk::ScopedAStatus interfaceSetCfg(const ::aidl::android::net::InterfaceConfigurationParcel& in_cfg) override;
  ::ndk::ScopedAStatus interfaceSetIPv6PrivacyExtensions(const std::string& in_ifName, bool in_enable) override;
  ::ndk::ScopedAStatus interfaceClearAddrs(const std::string& in_ifName) override;
  ::ndk::ScopedAStatus interfaceSetEnableIPv6(const std::string& in_ifName, bool in_enable) override;
  ::ndk::ScopedAStatus interfaceSetMtu(const std::string& in_ifName, int32_t in_mtu) override;
  ::ndk::ScopedAStatus tetherAddForward(const std::string& in_intIface, const std::string& in_extIface) override;
  ::ndk::ScopedAStatus tetherRemoveForward(const std::string& in_intIface, const std::string& in_extIface) override;
  ::ndk::ScopedAStatus setTcpRWmemorySize(const std::string& in_rmemValues, const std::string& in_wmemValues) override;
  ::ndk::ScopedAStatus registerUnsolicitedEventListener(const std::shared_ptr<::aidl::android::net::INetdUnsolicitedEventListener>& in_listener) override;
  ::ndk::ScopedAStatus firewallAddUidInterfaceRules(const std::string& in_ifName, const std::vector<int32_t>& in_uids) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus firewallRemoveUidInterfaceRules(const std::vector<int32_t>& in_uids) override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus trafficSwapActiveStatsMap() override __attribute__((deprecated("unimplemented on T+.")));
  ::ndk::ScopedAStatus getOemNetd(::ndk::SpAIBinder* _aidl_return) override;
  ::ndk::ScopedAStatus tetherStartWithConfiguration(const ::aidl::android::net::TetherConfigParcel& in_config) override;
  ::ndk::ScopedAStatus getFwmarkForNetwork(int32_t in_netId, ::aidl::android::net::MarkMaskParcel* _aidl_return) override;
  ::ndk::ScopedAStatus networkAddRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) override;
  ::ndk::ScopedAStatus networkUpdateRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) override;
  ::ndk::ScopedAStatus networkRemoveRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) override;
  ::ndk::ScopedAStatus tetherOffloadRuleAdd(const ::aidl::android::net::TetherOffloadRuleParcel& in_rule) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator.")));
  ::ndk::ScopedAStatus tetherOffloadRuleRemove(const ::aidl::android::net::TetherOffloadRuleParcel& in_rule) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator.")));
  ::ndk::ScopedAStatus tetherOffloadGetStats(std::vector<::aidl::android::net::TetherStatsParcel>* _aidl_return) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator.")));
  ::ndk::ScopedAStatus tetherOffloadSetInterfaceQuota(int32_t in_ifIndex, int64_t in_quotaBytes) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator.")));
  ::ndk::ScopedAStatus tetherOffloadGetAndClearStats(int32_t in_ifIndex, ::aidl::android::net::TetherStatsParcel* _aidl_return) override __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator.")));
  ::ndk::ScopedAStatus networkCreate(const ::aidl::android::net::NativeNetworkConfig& in_config) override;
  ::ndk::ScopedAStatus networkAddUidRangesParcel(const ::aidl::android::net::netd::aidl::NativeUidRangeConfig& in_uidRangesConfig) override;
  ::ndk::ScopedAStatus networkRemoveUidRangesParcel(const ::aidl::android::net::netd::aidl::NativeUidRangeConfig& in_uidRangesConfig) override;
  ::ndk::ScopedAStatus ipSecMigrate(const ::aidl::android::net::IpSecMigrateInfoParcel& in_migrateInfo) override;
  ::ndk::ScopedAStatus setNetworkAllowlist(const std::vector<::aidl::android::net::netd::aidl::NativeUidRangeConfig>& in_allowedNetworks) override;
};
}  // namespace net
}  // namespace android
}  // namespace aidl
