/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/InterfaceConfigurationParcel.aidl
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
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace net {
class InterfaceConfigurationParcel {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::string ifName;
  std::string hwAddr;
  std::string ipv4Addr;
  int32_t prefixLength = 0;
  std::vector<std::string> flags;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const InterfaceConfigurationParcel& _rhs) const {
    return std::tie(ifName, hwAddr, ipv4Addr, prefixLength, flags) == std::tie(_rhs.ifName, _rhs.hwAddr, _rhs.ipv4Addr, _rhs.prefixLength, _rhs.flags);
  }
  inline bool operator<(const InterfaceConfigurationParcel& _rhs) const {
    return std::tie(ifName, hwAddr, ipv4Addr, prefixLength, flags) < std::tie(_rhs.ifName, _rhs.hwAddr, _rhs.ipv4Addr, _rhs.prefixLength, _rhs.flags);
  }
  inline bool operator!=(const InterfaceConfigurationParcel& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const InterfaceConfigurationParcel& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const InterfaceConfigurationParcel& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const InterfaceConfigurationParcel& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "InterfaceConfigurationParcel{";
    _aidl_os << "ifName: " << ::android::internal::ToString(ifName);
    _aidl_os << ", hwAddr: " << ::android::internal::ToString(hwAddr);
    _aidl_os << ", ipv4Addr: " << ::android::internal::ToString(ipv4Addr);
    _aidl_os << ", prefixLength: " << ::android::internal::ToString(prefixLength);
    _aidl_os << ", flags: " << ::android::internal::ToString(flags);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
