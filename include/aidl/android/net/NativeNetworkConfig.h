/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/NativeNetworkConfig.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/net/NativeNetworkType.h>
#include <aidl/android/net/NativeVpnType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace net {
class NativeNetworkConfig {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t netId = 0;
  ::aidl::android::net::NativeNetworkType networkType = ::aidl::android::net::NativeNetworkType::PHYSICAL;
  int32_t permission = 0;
  bool secure = false;
  ::aidl::android::net::NativeVpnType vpnType = ::aidl::android::net::NativeVpnType::PLATFORM;
  bool excludeLocalRoutes = false;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const NativeNetworkConfig& _rhs) const {
    return std::tie(netId, networkType, permission, secure, vpnType, excludeLocalRoutes) == std::tie(_rhs.netId, _rhs.networkType, _rhs.permission, _rhs.secure, _rhs.vpnType, _rhs.excludeLocalRoutes);
  }
  inline bool operator<(const NativeNetworkConfig& _rhs) const {
    return std::tie(netId, networkType, permission, secure, vpnType, excludeLocalRoutes) < std::tie(_rhs.netId, _rhs.networkType, _rhs.permission, _rhs.secure, _rhs.vpnType, _rhs.excludeLocalRoutes);
  }
  inline bool operator!=(const NativeNetworkConfig& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const NativeNetworkConfig& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const NativeNetworkConfig& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const NativeNetworkConfig& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "NativeNetworkConfig{";
    _aidl_os << "netId: " << ::android::internal::ToString(netId);
    _aidl_os << ", networkType: " << ::android::internal::ToString(networkType);
    _aidl_os << ", permission: " << ::android::internal::ToString(permission);
    _aidl_os << ", secure: " << ::android::internal::ToString(secure);
    _aidl_os << ", vpnType: " << ::android::internal::ToString(vpnType);
    _aidl_os << ", excludeLocalRoutes: " << ::android::internal::ToString(excludeLocalRoutes);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
