/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/RouteInfoParcel.aidl
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
class RouteInfoParcel {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::string destination;
  std::string ifName;
  std::string nextHop;
  int32_t mtu = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const RouteInfoParcel& _rhs) const {
    return std::tie(destination, ifName, nextHop, mtu) == std::tie(_rhs.destination, _rhs.ifName, _rhs.nextHop, _rhs.mtu);
  }
  inline bool operator<(const RouteInfoParcel& _rhs) const {
    return std::tie(destination, ifName, nextHop, mtu) < std::tie(_rhs.destination, _rhs.ifName, _rhs.nextHop, _rhs.mtu);
  }
  inline bool operator!=(const RouteInfoParcel& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const RouteInfoParcel& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const RouteInfoParcel& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const RouteInfoParcel& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "RouteInfoParcel{";
    _aidl_os << "destination: " << ::android::internal::ToString(destination);
    _aidl_os << ", ifName: " << ::android::internal::ToString(ifName);
    _aidl_os << ", nextHop: " << ::android::internal::ToString(nextHop);
    _aidl_os << ", mtu: " << ::android::internal::ToString(mtu);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
