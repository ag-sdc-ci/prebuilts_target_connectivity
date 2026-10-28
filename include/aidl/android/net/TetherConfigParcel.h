/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/TetherConfigParcel.aidl
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
class TetherConfigParcel {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  bool usingLegacyDnsProxy = false;
  std::vector<std::string> dhcpRanges;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const TetherConfigParcel& _rhs) const {
    return std::tie(usingLegacyDnsProxy, dhcpRanges) == std::tie(_rhs.usingLegacyDnsProxy, _rhs.dhcpRanges);
  }
  inline bool operator<(const TetherConfigParcel& _rhs) const {
    return std::tie(usingLegacyDnsProxy, dhcpRanges) < std::tie(_rhs.usingLegacyDnsProxy, _rhs.dhcpRanges);
  }
  inline bool operator!=(const TetherConfigParcel& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const TetherConfigParcel& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const TetherConfigParcel& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const TetherConfigParcel& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "TetherConfigParcel{";
    _aidl_os << "usingLegacyDnsProxy: " << ::android::internal::ToString(usingLegacyDnsProxy);
    _aidl_os << ", dhcpRanges: " << ::android::internal::ToString(dhcpRanges);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
