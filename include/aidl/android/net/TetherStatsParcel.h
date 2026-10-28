/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/TetherStatsParcel.aidl
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
class TetherStatsParcel {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::string iface;
  int64_t rxBytes = 0L;
  int64_t rxPackets = 0L;
  int64_t txBytes = 0L;
  int64_t txPackets = 0L;
  int32_t ifIndex = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const TetherStatsParcel& _rhs) const {
    return std::tie(iface, rxBytes, rxPackets, txBytes, txPackets, ifIndex) == std::tie(_rhs.iface, _rhs.rxBytes, _rhs.rxPackets, _rhs.txBytes, _rhs.txPackets, _rhs.ifIndex);
  }
  inline bool operator<(const TetherStatsParcel& _rhs) const {
    return std::tie(iface, rxBytes, rxPackets, txBytes, txPackets, ifIndex) < std::tie(_rhs.iface, _rhs.rxBytes, _rhs.rxPackets, _rhs.txBytes, _rhs.txPackets, _rhs.ifIndex);
  }
  inline bool operator!=(const TetherStatsParcel& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const TetherStatsParcel& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const TetherStatsParcel& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const TetherStatsParcel& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "TetherStatsParcel{";
    _aidl_os << "iface: " << ::android::internal::ToString(iface);
    _aidl_os << ", rxBytes: " << ::android::internal::ToString(rxBytes);
    _aidl_os << ", rxPackets: " << ::android::internal::ToString(rxPackets);
    _aidl_os << ", txBytes: " << ::android::internal::ToString(txBytes);
    _aidl_os << ", txPackets: " << ::android::internal::ToString(txPackets);
    _aidl_os << ", ifIndex: " << ::android::internal::ToString(ifIndex);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
