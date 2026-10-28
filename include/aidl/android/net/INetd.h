/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/INetd.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/net/INetdUnsolicitedEventListener.h>
#include <aidl/android/net/InterfaceConfigurationParcel.h>
#include <aidl/android/net/IpSecMigrateInfoParcel.h>
#include <aidl/android/net/MarkMaskParcel.h>
#include <aidl/android/net/NativeNetworkConfig.h>
#include <aidl/android/net/RouteInfoParcel.h>
#include <aidl/android/net/TetherConfigParcel.h>
#include <aidl/android/net/TetherOffloadRuleParcel.h>
#include <aidl/android/net/TetherStatsParcel.h>
#include <aidl/android/net/UidRangeParcel.h>
#include <aidl/android/net/netd/aidl/NativeUidRangeConfig.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::net {
class INetdUnsolicitedEventListener;
class InterfaceConfigurationParcel;
class IpSecMigrateInfoParcel;
class MarkMaskParcel;
class NativeNetworkConfig;
class RouteInfoParcel;
class TetherConfigParcel;
class TetherOffloadRuleParcel;
class TetherStatsParcel;
class UidRangeParcel;
}  // namespace aidl::android::net
namespace aidl::android::net::netd::aidl {
class NativeUidRangeConfig;
}  // namespace aidl::android::net::netd::aidl
namespace aidl {
namespace android {
namespace net {
class INetdDelegator;

class INetd : public ::ndk::ICInterface {
public:
  typedef INetdDelegator DefaultDelegator;
  static const char* descriptor;
  INetd();
  virtual ~INetd();

  enum : int32_t { IPV4 = 4 };
  enum : int32_t { IPV6 = 6 };
  enum : int32_t { CONF = 1 };
  enum : int32_t { NEIGH = 2 };
  static const char* IPSEC_INTERFACE_PREFIX;
  enum : int32_t { IPV6_ADDR_GEN_MODE_EUI64 = 0 };
  enum : int32_t { IPV6_ADDR_GEN_MODE_NONE = 1 };
  enum : int32_t { IPV6_ADDR_GEN_MODE_STABLE_PRIVACY = 2 };
  enum : int32_t { IPV6_ADDR_GEN_MODE_RANDOM = 3 };
  enum : int32_t { IPV6_ADDR_GEN_MODE_DEFAULT = 0 };
  enum : int32_t { PENALTY_POLICY_ACCEPT = 1 };
  enum : int32_t { PENALTY_POLICY_LOG = 2 };
  enum : int32_t { PENALTY_POLICY_REJECT = 3 };
  enum : int32_t { CLAT_MARK = -559038041 };
  enum : int32_t { LOCAL_NET_ID = 99 };
  enum : int32_t { DUMMY_NET_ID = 51 };
  enum : int32_t { UNREACHABLE_NET_ID = 52 };
  static const char* NEXTHOP_NONE;
  static const char* NEXTHOP_UNREACHABLE;
  static const char* NEXTHOP_THROW;
  enum : int32_t { PERMISSION_NONE = 0 };
  enum : int32_t { PERMISSION_NETWORK = 1 };
  enum : int32_t { PERMISSION_SYSTEM = 2 };
  enum : int32_t { NO_PERMISSIONS = 0 };
  enum : int32_t { PERMISSION_INTERNET = 4 };
  enum : int32_t { PERMISSION_UPDATE_DEVICE_STATS = 8 };
  enum : int32_t { PERMISSION_UNINSTALLED = -1 };
  enum : int32_t { FIREWALL_WHITELIST __attribute__((deprecated("use FIREWALL_ALLOWLIST."))) = 0 };
  enum : int32_t { FIREWALL_ALLOWLIST = 0 };
  enum : int32_t { FIREWALL_BLACKLIST __attribute__((deprecated("use FIREWALL_DENYLIST."))) = 1 };
  enum : int32_t { FIREWALL_DENYLIST = 1 };
  enum : int32_t { FIREWALL_RULE_ALLOW = 1 };
  enum : int32_t { FIREWALL_RULE_DENY = 2 };
  enum : int32_t { FIREWALL_CHAIN_NONE = 0 };
  enum : int32_t { FIREWALL_CHAIN_DOZABLE = 1 };
  enum : int32_t { FIREWALL_CHAIN_STANDBY = 2 };
  enum : int32_t { FIREWALL_CHAIN_POWERSAVE = 3 };
  enum : int32_t { FIREWALL_CHAIN_RESTRICTED = 4 };
  static const char* IF_STATE_UP;
  static const char* IF_STATE_DOWN;
  static const char* IF_FLAG_BROADCAST;
  static const char* IF_FLAG_LOOPBACK;
  static const char* IF_FLAG_POINTOPOINT;
  static const char* IF_FLAG_RUNNING;
  static const char* IF_FLAG_MULTICAST;
  enum : int32_t { IPSEC_DIRECTION_IN = 0 };
  enum : int32_t { IPSEC_DIRECTION_OUT = 1 };
  static constexpr uint32_t TRANSACTION_isAlive = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_firewallReplaceUidChain = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_bandwidthEnableDataSaver = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_networkCreatePhysical = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_networkCreateVpn = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_networkDestroy = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_networkAddInterface = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_networkRemoveInterface = FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_networkAddUidRanges = FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_networkRemoveUidRanges = FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_networkRejectNonSecureVpn = FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_socketDestroy = FIRST_CALL_TRANSACTION + 11;
  static constexpr uint32_t TRANSACTION_tetherApplyDnsInterfaces = FIRST_CALL_TRANSACTION + 12;
  static constexpr uint32_t TRANSACTION_tetherGetStats = FIRST_CALL_TRANSACTION + 13;
  static constexpr uint32_t TRANSACTION_interfaceAddAddress = FIRST_CALL_TRANSACTION + 14;
  static constexpr uint32_t TRANSACTION_interfaceDelAddress = FIRST_CALL_TRANSACTION + 15;
  static constexpr uint32_t TRANSACTION_getProcSysNet = FIRST_CALL_TRANSACTION + 16;
  static constexpr uint32_t TRANSACTION_setProcSysNet = FIRST_CALL_TRANSACTION + 17;
  static constexpr uint32_t TRANSACTION_ipSecSetEncapSocketOwner = FIRST_CALL_TRANSACTION + 18;
  static constexpr uint32_t TRANSACTION_ipSecAllocateSpi = FIRST_CALL_TRANSACTION + 19;
  static constexpr uint32_t TRANSACTION_ipSecAddSecurityAssociation = FIRST_CALL_TRANSACTION + 20;
  static constexpr uint32_t TRANSACTION_ipSecDeleteSecurityAssociation = FIRST_CALL_TRANSACTION + 21;
  static constexpr uint32_t TRANSACTION_ipSecApplyTransportModeTransform = FIRST_CALL_TRANSACTION + 22;
  static constexpr uint32_t TRANSACTION_ipSecRemoveTransportModeTransform = FIRST_CALL_TRANSACTION + 23;
  static constexpr uint32_t TRANSACTION_ipSecAddSecurityPolicy = FIRST_CALL_TRANSACTION + 24;
  static constexpr uint32_t TRANSACTION_ipSecUpdateSecurityPolicy = FIRST_CALL_TRANSACTION + 25;
  static constexpr uint32_t TRANSACTION_ipSecDeleteSecurityPolicy = FIRST_CALL_TRANSACTION + 26;
  static constexpr uint32_t TRANSACTION_ipSecAddTunnelInterface = FIRST_CALL_TRANSACTION + 27;
  static constexpr uint32_t TRANSACTION_ipSecUpdateTunnelInterface = FIRST_CALL_TRANSACTION + 28;
  static constexpr uint32_t TRANSACTION_ipSecRemoveTunnelInterface = FIRST_CALL_TRANSACTION + 29;
  static constexpr uint32_t TRANSACTION_wakeupAddInterface = FIRST_CALL_TRANSACTION + 30;
  static constexpr uint32_t TRANSACTION_wakeupDelInterface = FIRST_CALL_TRANSACTION + 31;
  static constexpr uint32_t TRANSACTION_setIPv6AddrGenMode = FIRST_CALL_TRANSACTION + 32;
  static constexpr uint32_t TRANSACTION_idletimerAddInterface = FIRST_CALL_TRANSACTION + 33;
  static constexpr uint32_t TRANSACTION_idletimerRemoveInterface = FIRST_CALL_TRANSACTION + 34;
  static constexpr uint32_t TRANSACTION_strictUidCleartextPenalty = FIRST_CALL_TRANSACTION + 35;
  static constexpr uint32_t TRANSACTION_clatdStart = FIRST_CALL_TRANSACTION + 36;
  static constexpr uint32_t TRANSACTION_clatdStop = FIRST_CALL_TRANSACTION + 37;
  static constexpr uint32_t TRANSACTION_ipfwdEnabled = FIRST_CALL_TRANSACTION + 38;
  static constexpr uint32_t TRANSACTION_ipfwdGetRequesterList = FIRST_CALL_TRANSACTION + 39;
  static constexpr uint32_t TRANSACTION_ipfwdEnableForwarding = FIRST_CALL_TRANSACTION + 40;
  static constexpr uint32_t TRANSACTION_ipfwdDisableForwarding = FIRST_CALL_TRANSACTION + 41;
  static constexpr uint32_t TRANSACTION_ipfwdAddInterfaceForward = FIRST_CALL_TRANSACTION + 42;
  static constexpr uint32_t TRANSACTION_ipfwdRemoveInterfaceForward = FIRST_CALL_TRANSACTION + 43;
  static constexpr uint32_t TRANSACTION_bandwidthSetInterfaceQuota = FIRST_CALL_TRANSACTION + 44;
  static constexpr uint32_t TRANSACTION_bandwidthRemoveInterfaceQuota = FIRST_CALL_TRANSACTION + 45;
  static constexpr uint32_t TRANSACTION_bandwidthSetInterfaceAlert = FIRST_CALL_TRANSACTION + 46;
  static constexpr uint32_t TRANSACTION_bandwidthRemoveInterfaceAlert = FIRST_CALL_TRANSACTION + 47;
  static constexpr uint32_t TRANSACTION_bandwidthSetGlobalAlert = FIRST_CALL_TRANSACTION + 48;
  static constexpr uint32_t TRANSACTION_bandwidthAddNaughtyApp = FIRST_CALL_TRANSACTION + 49;
  static constexpr uint32_t TRANSACTION_bandwidthRemoveNaughtyApp = FIRST_CALL_TRANSACTION + 50;
  static constexpr uint32_t TRANSACTION_bandwidthAddNiceApp = FIRST_CALL_TRANSACTION + 51;
  static constexpr uint32_t TRANSACTION_bandwidthRemoveNiceApp = FIRST_CALL_TRANSACTION + 52;
  static constexpr uint32_t TRANSACTION_tetherStart = FIRST_CALL_TRANSACTION + 53;
  static constexpr uint32_t TRANSACTION_tetherStop = FIRST_CALL_TRANSACTION + 54;
  static constexpr uint32_t TRANSACTION_tetherIsEnabled = FIRST_CALL_TRANSACTION + 55;
  static constexpr uint32_t TRANSACTION_tetherInterfaceAdd = FIRST_CALL_TRANSACTION + 56;
  static constexpr uint32_t TRANSACTION_tetherInterfaceRemove = FIRST_CALL_TRANSACTION + 57;
  static constexpr uint32_t TRANSACTION_tetherInterfaceList = FIRST_CALL_TRANSACTION + 58;
  static constexpr uint32_t TRANSACTION_tetherDnsSet = FIRST_CALL_TRANSACTION + 59;
  static constexpr uint32_t TRANSACTION_tetherDnsList = FIRST_CALL_TRANSACTION + 60;
  static constexpr uint32_t TRANSACTION_networkAddRoute = FIRST_CALL_TRANSACTION + 61;
  static constexpr uint32_t TRANSACTION_networkRemoveRoute = FIRST_CALL_TRANSACTION + 62;
  static constexpr uint32_t TRANSACTION_networkAddLegacyRoute = FIRST_CALL_TRANSACTION + 63;
  static constexpr uint32_t TRANSACTION_networkRemoveLegacyRoute = FIRST_CALL_TRANSACTION + 64;
  static constexpr uint32_t TRANSACTION_networkGetDefault = FIRST_CALL_TRANSACTION + 65;
  static constexpr uint32_t TRANSACTION_networkSetDefault = FIRST_CALL_TRANSACTION + 66;
  static constexpr uint32_t TRANSACTION_networkClearDefault = FIRST_CALL_TRANSACTION + 67;
  static constexpr uint32_t TRANSACTION_networkSetPermissionForNetwork = FIRST_CALL_TRANSACTION + 68;
  static constexpr uint32_t TRANSACTION_networkSetPermissionForUser = FIRST_CALL_TRANSACTION + 69;
  static constexpr uint32_t TRANSACTION_networkClearPermissionForUser = FIRST_CALL_TRANSACTION + 70;
  static constexpr uint32_t TRANSACTION_trafficSetNetPermForUids = FIRST_CALL_TRANSACTION + 71;
  static constexpr uint32_t TRANSACTION_networkSetProtectAllow = FIRST_CALL_TRANSACTION + 72;
  static constexpr uint32_t TRANSACTION_networkSetProtectDeny = FIRST_CALL_TRANSACTION + 73;
  static constexpr uint32_t TRANSACTION_networkCanProtect = FIRST_CALL_TRANSACTION + 74;
  static constexpr uint32_t TRANSACTION_firewallSetFirewallType = FIRST_CALL_TRANSACTION + 75;
  static constexpr uint32_t TRANSACTION_firewallSetInterfaceRule = FIRST_CALL_TRANSACTION + 76;
  static constexpr uint32_t TRANSACTION_firewallSetUidRule = FIRST_CALL_TRANSACTION + 77;
  static constexpr uint32_t TRANSACTION_firewallEnableChildChain = FIRST_CALL_TRANSACTION + 78;
  static constexpr uint32_t TRANSACTION_interfaceGetList = FIRST_CALL_TRANSACTION + 79;
  static constexpr uint32_t TRANSACTION_interfaceGetCfg = FIRST_CALL_TRANSACTION + 80;
  static constexpr uint32_t TRANSACTION_interfaceSetCfg = FIRST_CALL_TRANSACTION + 81;
  static constexpr uint32_t TRANSACTION_interfaceSetIPv6PrivacyExtensions = FIRST_CALL_TRANSACTION + 82;
  static constexpr uint32_t TRANSACTION_interfaceClearAddrs = FIRST_CALL_TRANSACTION + 83;
  static constexpr uint32_t TRANSACTION_interfaceSetEnableIPv6 = FIRST_CALL_TRANSACTION + 84;
  static constexpr uint32_t TRANSACTION_interfaceSetMtu = FIRST_CALL_TRANSACTION + 85;
  static constexpr uint32_t TRANSACTION_tetherAddForward = FIRST_CALL_TRANSACTION + 86;
  static constexpr uint32_t TRANSACTION_tetherRemoveForward = FIRST_CALL_TRANSACTION + 87;
  static constexpr uint32_t TRANSACTION_setTcpRWmemorySize = FIRST_CALL_TRANSACTION + 88;
  static constexpr uint32_t TRANSACTION_registerUnsolicitedEventListener = FIRST_CALL_TRANSACTION + 89;
  static constexpr uint32_t TRANSACTION_firewallAddUidInterfaceRules = FIRST_CALL_TRANSACTION + 90;
  static constexpr uint32_t TRANSACTION_firewallRemoveUidInterfaceRules = FIRST_CALL_TRANSACTION + 91;
  static constexpr uint32_t TRANSACTION_trafficSwapActiveStatsMap = FIRST_CALL_TRANSACTION + 92;
  static constexpr uint32_t TRANSACTION_getOemNetd = FIRST_CALL_TRANSACTION + 93;
  static constexpr uint32_t TRANSACTION_tetherStartWithConfiguration = FIRST_CALL_TRANSACTION + 94;
  static constexpr uint32_t TRANSACTION_getFwmarkForNetwork = FIRST_CALL_TRANSACTION + 95;
  static constexpr uint32_t TRANSACTION_networkAddRouteParcel = FIRST_CALL_TRANSACTION + 96;
  static constexpr uint32_t TRANSACTION_networkUpdateRouteParcel = FIRST_CALL_TRANSACTION + 97;
  static constexpr uint32_t TRANSACTION_networkRemoveRouteParcel = FIRST_CALL_TRANSACTION + 98;
  static constexpr uint32_t TRANSACTION_tetherOffloadRuleAdd = FIRST_CALL_TRANSACTION + 99;
  static constexpr uint32_t TRANSACTION_tetherOffloadRuleRemove = FIRST_CALL_TRANSACTION + 100;
  static constexpr uint32_t TRANSACTION_tetherOffloadGetStats = FIRST_CALL_TRANSACTION + 101;
  static constexpr uint32_t TRANSACTION_tetherOffloadSetInterfaceQuota = FIRST_CALL_TRANSACTION + 102;
  static constexpr uint32_t TRANSACTION_tetherOffloadGetAndClearStats = FIRST_CALL_TRANSACTION + 103;
  static constexpr uint32_t TRANSACTION_networkCreate = FIRST_CALL_TRANSACTION + 104;
  static constexpr uint32_t TRANSACTION_networkAddUidRangesParcel = FIRST_CALL_TRANSACTION + 105;
  static constexpr uint32_t TRANSACTION_networkRemoveUidRangesParcel = FIRST_CALL_TRANSACTION + 106;
  static constexpr uint32_t TRANSACTION_ipSecMigrate = FIRST_CALL_TRANSACTION + 107;
  static constexpr uint32_t TRANSACTION_setNetworkAllowlist = FIRST_CALL_TRANSACTION + 108;

  static std::shared_ptr<INetd> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<INetd>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<INetd>* instance);
  static bool setDefaultImpl(const std::shared_ptr<INetd>& impl);
  static const std::shared_ptr<INetd>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus isAlive(bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus firewallReplaceUidChain(const std::string& in_chainName, bool in_isAllowlist, const std::vector<int32_t>& in_uids, bool* _aidl_return) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus bandwidthEnableDataSaver(bool in_enable, bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus networkCreatePhysical(int32_t in_netId, int32_t in_permission) __attribute__((deprecated("use networkCreate() instead."))) = 0;
  virtual ::ndk::ScopedAStatus networkCreateVpn(int32_t in_netId, bool in_secure) __attribute__((deprecated("use networkCreate() instead."))) = 0;
  virtual ::ndk::ScopedAStatus networkDestroy(int32_t in_netId) = 0;
  virtual ::ndk::ScopedAStatus networkAddInterface(int32_t in_netId, const std::string& in_iface) = 0;
  virtual ::ndk::ScopedAStatus networkRemoveInterface(int32_t in_netId, const std::string& in_iface) = 0;
  virtual ::ndk::ScopedAStatus networkAddUidRanges(int32_t in_netId, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) = 0;
  virtual ::ndk::ScopedAStatus networkRemoveUidRanges(int32_t in_netId, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) = 0;
  virtual ::ndk::ScopedAStatus networkRejectNonSecureVpn(bool in_add, const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges) = 0;
  virtual ::ndk::ScopedAStatus socketDestroy(const std::vector<::aidl::android::net::UidRangeParcel>& in_uidRanges, const std::vector<int32_t>& in_exemptUids) = 0;
  virtual ::ndk::ScopedAStatus tetherApplyDnsInterfaces(bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus tetherGetStats(std::vector<::aidl::android::net::TetherStatsParcel>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus interfaceAddAddress(const std::string& in_ifName, const std::string& in_addrString, int32_t in_prefixLength) = 0;
  virtual ::ndk::ScopedAStatus interfaceDelAddress(const std::string& in_ifName, const std::string& in_addrString, int32_t in_prefixLength) = 0;
  virtual ::ndk::ScopedAStatus getProcSysNet(int32_t in_ipversion, int32_t in_which, const std::string& in_ifname, const std::string& in_parameter, std::string* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus setProcSysNet(int32_t in_ipversion, int32_t in_which, const std::string& in_ifname, const std::string& in_parameter, const std::string& in_value) = 0;
  virtual ::ndk::ScopedAStatus ipSecSetEncapSocketOwner(const ::ndk::ScopedFileDescriptor& in_socket, int32_t in_newUid) = 0;
  virtual ::ndk::ScopedAStatus ipSecAllocateSpi(int32_t in_transformId, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi, int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus ipSecAddSecurityAssociation(int32_t in_transformId, int32_t in_mode, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_underlyingNetId, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, const std::string& in_authAlgo, const std::vector<uint8_t>& in_authKey, int32_t in_authTruncBits, const std::string& in_cryptAlgo, const std::vector<uint8_t>& in_cryptKey, int32_t in_cryptTruncBits, const std::string& in_aeadAlgo, const std::vector<uint8_t>& in_aeadKey, int32_t in_aeadIcvBits, int32_t in_encapType, int32_t in_encapLocalPort, int32_t in_encapRemotePort, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecDeleteSecurityAssociation(int32_t in_transformId, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecApplyTransportModeTransform(const ::ndk::ScopedFileDescriptor& in_socket, int32_t in_transformId, int32_t in_direction, const std::string& in_sourceAddress, const std::string& in_destinationAddress, int32_t in_spi) = 0;
  virtual ::ndk::ScopedAStatus ipSecRemoveTransportModeTransform(const ::ndk::ScopedFileDescriptor& in_socket) = 0;
  virtual ::ndk::ScopedAStatus ipSecAddSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, const std::string& in_tmplSrcAddress, const std::string& in_tmplDstAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecUpdateSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, const std::string& in_tmplSrcAddress, const std::string& in_tmplDstAddress, int32_t in_spi, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecDeleteSecurityPolicy(int32_t in_transformId, int32_t in_selAddrFamily, int32_t in_direction, int32_t in_markValue, int32_t in_markMask, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecAddTunnelInterface(const std::string& in_deviceName, const std::string& in_localAddress, const std::string& in_remoteAddress, int32_t in_iKey, int32_t in_oKey, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecUpdateTunnelInterface(const std::string& in_deviceName, const std::string& in_localAddress, const std::string& in_remoteAddress, int32_t in_iKey, int32_t in_oKey, int32_t in_interfaceId) = 0;
  virtual ::ndk::ScopedAStatus ipSecRemoveTunnelInterface(const std::string& in_deviceName) = 0;
  virtual ::ndk::ScopedAStatus wakeupAddInterface(const std::string& in_ifName, const std::string& in_prefix, int32_t in_mark, int32_t in_mask) = 0;
  virtual ::ndk::ScopedAStatus wakeupDelInterface(const std::string& in_ifName, const std::string& in_prefix, int32_t in_mark, int32_t in_mask) = 0;
  virtual ::ndk::ScopedAStatus setIPv6AddrGenMode(const std::string& in_ifName, int32_t in_mode) = 0;
  virtual ::ndk::ScopedAStatus idletimerAddInterface(const std::string& in_ifName, int32_t in_timeout, const std::string& in_classLabel) = 0;
  virtual ::ndk::ScopedAStatus idletimerRemoveInterface(const std::string& in_ifName, int32_t in_timeout, const std::string& in_classLabel) = 0;
  virtual ::ndk::ScopedAStatus strictUidCleartextPenalty(int32_t in_uid, int32_t in_policyPenalty) = 0;
  virtual ::ndk::ScopedAStatus clatdStart(const std::string& in_ifName, const std::string& in_nat64Prefix, std::string* _aidl_return) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The clatd control plane moved to the mainline module starting in T. See ClatCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus clatdStop(const std::string& in_ifName) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The clatd control plane moved to the mainline module starting in T. See ClatCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus ipfwdEnabled(bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus ipfwdGetRequesterList(std::vector<std::string>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus ipfwdEnableForwarding(const std::string& in_requester) = 0;
  virtual ::ndk::ScopedAStatus ipfwdDisableForwarding(const std::string& in_requester) = 0;
  virtual ::ndk::ScopedAStatus ipfwdAddInterfaceForward(const std::string& in_fromIface, const std::string& in_toIface) = 0;
  virtual ::ndk::ScopedAStatus ipfwdRemoveInterfaceForward(const std::string& in_fromIface, const std::string& in_toIface) = 0;
  virtual ::ndk::ScopedAStatus bandwidthSetInterfaceQuota(const std::string& in_ifName, int64_t in_bytes) = 0;
  virtual ::ndk::ScopedAStatus bandwidthRemoveInterfaceQuota(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus bandwidthSetInterfaceAlert(const std::string& in_ifName, int64_t in_bytes) = 0;
  virtual ::ndk::ScopedAStatus bandwidthRemoveInterfaceAlert(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus bandwidthSetGlobalAlert(int64_t in_bytes) = 0;
  virtual ::ndk::ScopedAStatus bandwidthAddNaughtyApp(int32_t in_uid) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus bandwidthRemoveNaughtyApp(int32_t in_uid) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus bandwidthAddNiceApp(int32_t in_uid) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus bandwidthRemoveNiceApp(int32_t in_uid) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus tetherStart(const std::vector<std::string>& in_dhcpRanges) = 0;
  virtual ::ndk::ScopedAStatus tetherStop() = 0;
  virtual ::ndk::ScopedAStatus tetherIsEnabled(bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus tetherInterfaceAdd(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus tetherInterfaceRemove(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus tetherInterfaceList(std::vector<std::string>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus tetherDnsSet(int32_t in_netId, const std::vector<std::string>& in_dnsAddrs) = 0;
  virtual ::ndk::ScopedAStatus tetherDnsList(std::vector<std::string>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus networkAddRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop) = 0;
  virtual ::ndk::ScopedAStatus networkRemoveRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop) = 0;
  virtual ::ndk::ScopedAStatus networkAddLegacyRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop, int32_t in_uid) = 0;
  virtual ::ndk::ScopedAStatus networkRemoveLegacyRoute(int32_t in_netId, const std::string& in_ifName, const std::string& in_destination, const std::string& in_nextHop, int32_t in_uid) = 0;
  virtual ::ndk::ScopedAStatus networkGetDefault(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus networkSetDefault(int32_t in_netId) = 0;
  virtual ::ndk::ScopedAStatus networkClearDefault() = 0;
  virtual ::ndk::ScopedAStatus networkSetPermissionForNetwork(int32_t in_netId, int32_t in_permission) = 0;
  virtual ::ndk::ScopedAStatus networkSetPermissionForUser(int32_t in_permission, const std::vector<int32_t>& in_uids) = 0;
  virtual ::ndk::ScopedAStatus networkClearPermissionForUser(const std::vector<int32_t>& in_uids) = 0;
  virtual ::ndk::ScopedAStatus trafficSetNetPermForUids(int32_t in_permission, const std::vector<int32_t>& in_uids) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus networkSetProtectAllow(int32_t in_uid) = 0;
  virtual ::ndk::ScopedAStatus networkSetProtectDeny(int32_t in_uid) = 0;
  virtual ::ndk::ScopedAStatus networkCanProtect(int32_t in_uid, bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus firewallSetFirewallType(int32_t in_firewalltype) = 0;
  virtual ::ndk::ScopedAStatus firewallSetInterfaceRule(const std::string& in_ifName, int32_t in_firewallRule) = 0;
  virtual ::ndk::ScopedAStatus firewallSetUidRule(int32_t in_childChain, int32_t in_uid, int32_t in_firewallRule) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus firewallEnableChildChain(int32_t in_childChain, bool in_enable) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus interfaceGetList(std::vector<std::string>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus interfaceGetCfg(const std::string& in_ifName, ::aidl::android::net::InterfaceConfigurationParcel* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus interfaceSetCfg(const ::aidl::android::net::InterfaceConfigurationParcel& in_cfg) = 0;
  virtual ::ndk::ScopedAStatus interfaceSetIPv6PrivacyExtensions(const std::string& in_ifName, bool in_enable) = 0;
  virtual ::ndk::ScopedAStatus interfaceClearAddrs(const std::string& in_ifName) = 0;
  virtual ::ndk::ScopedAStatus interfaceSetEnableIPv6(const std::string& in_ifName, bool in_enable) = 0;
  virtual ::ndk::ScopedAStatus interfaceSetMtu(const std::string& in_ifName, int32_t in_mtu) = 0;
  virtual ::ndk::ScopedAStatus tetherAddForward(const std::string& in_intIface, const std::string& in_extIface) = 0;
  virtual ::ndk::ScopedAStatus tetherRemoveForward(const std::string& in_intIface, const std::string& in_extIface) = 0;
  virtual ::ndk::ScopedAStatus setTcpRWmemorySize(const std::string& in_rmemValues, const std::string& in_wmemValues) = 0;
  virtual ::ndk::ScopedAStatus registerUnsolicitedEventListener(const std::shared_ptr<::aidl::android::net::INetdUnsolicitedEventListener>& in_listener) = 0;
  virtual ::ndk::ScopedAStatus firewallAddUidInterfaceRules(const std::string& in_ifName, const std::vector<int32_t>& in_uids) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus firewallRemoveUidInterfaceRules(const std::vector<int32_t>& in_uids) __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus trafficSwapActiveStatsMap() __attribute__((deprecated("unimplemented on T+."))) = 0;
  virtual ::ndk::ScopedAStatus getOemNetd(::ndk::SpAIBinder* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus tetherStartWithConfiguration(const ::aidl::android::net::TetherConfigParcel& in_config) = 0;
  virtual ::ndk::ScopedAStatus getFwmarkForNetwork(int32_t in_netId, ::aidl::android::net::MarkMaskParcel* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus networkAddRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) = 0;
  virtual ::ndk::ScopedAStatus networkUpdateRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) = 0;
  virtual ::ndk::ScopedAStatus networkRemoveRouteParcel(int32_t in_netId, const ::aidl::android::net::RouteInfoParcel& in_routeInfo) = 0;
  virtual ::ndk::ScopedAStatus tetherOffloadRuleAdd(const ::aidl::android::net::TetherOffloadRuleParcel& in_rule) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus tetherOffloadRuleRemove(const ::aidl::android::net::TetherOffloadRuleParcel& in_rule) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus tetherOffloadGetStats(std::vector<::aidl::android::net::TetherStatsParcel>* _aidl_return) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus tetherOffloadSetInterfaceQuota(int32_t in_ifIndex, int64_t in_quotaBytes) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus tetherOffloadGetAndClearStats(int32_t in_ifIndex, ::aidl::android::net::TetherStatsParcel* _aidl_return) __attribute__((deprecated("This method has no effect and throws UnsupportedOperationException. The mainline module accesses the BPF map directly starting in S. See BpfCoordinator."))) = 0;
  virtual ::ndk::ScopedAStatus networkCreate(const ::aidl::android::net::NativeNetworkConfig& in_config) = 0;
  virtual ::ndk::ScopedAStatus networkAddUidRangesParcel(const ::aidl::android::net::netd::aidl::NativeUidRangeConfig& in_uidRangesConfig) = 0;
  virtual ::ndk::ScopedAStatus networkRemoveUidRangesParcel(const ::aidl::android::net::netd::aidl::NativeUidRangeConfig& in_uidRangesConfig) = 0;
  virtual ::ndk::ScopedAStatus ipSecMigrate(const ::aidl::android::net::IpSecMigrateInfoParcel& in_migrateInfo) = 0;
  virtual ::ndk::ScopedAStatus setNetworkAllowlist(const std::vector<::aidl::android::net::netd::aidl::NativeUidRangeConfig>& in_allowedNetworks) = 0;
private:
  static std::shared_ptr<INetd> default_impl;
};
class INetdDefault : public INetd {
public:
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
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace net
}  // namespace android
}  // namespace aidl
