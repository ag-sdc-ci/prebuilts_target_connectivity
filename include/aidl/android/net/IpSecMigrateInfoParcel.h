/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/IpSecMigrateInfoParcel.aidl
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
class IpSecMigrateInfoParcel {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t requestId = 0;
  int32_t selAddrFamily = 0;
  int32_t direction = 0;
  std::string oldSourceAddress;
  std::string oldDestinationAddress;
  std::string newSourceAddress;
  std::string newDestinationAddress;
  int32_t interfaceId = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const IpSecMigrateInfoParcel& _rhs) const {
    return std::tie(requestId, selAddrFamily, direction, oldSourceAddress, oldDestinationAddress, newSourceAddress, newDestinationAddress, interfaceId) == std::tie(_rhs.requestId, _rhs.selAddrFamily, _rhs.direction, _rhs.oldSourceAddress, _rhs.oldDestinationAddress, _rhs.newSourceAddress, _rhs.newDestinationAddress, _rhs.interfaceId);
  }
  inline bool operator<(const IpSecMigrateInfoParcel& _rhs) const {
    return std::tie(requestId, selAddrFamily, direction, oldSourceAddress, oldDestinationAddress, newSourceAddress, newDestinationAddress, interfaceId) < std::tie(_rhs.requestId, _rhs.selAddrFamily, _rhs.direction, _rhs.oldSourceAddress, _rhs.oldDestinationAddress, _rhs.newSourceAddress, _rhs.newDestinationAddress, _rhs.interfaceId);
  }
  inline bool operator!=(const IpSecMigrateInfoParcel& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const IpSecMigrateInfoParcel& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const IpSecMigrateInfoParcel& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const IpSecMigrateInfoParcel& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "IpSecMigrateInfoParcel{";
    _aidl_os << "requestId: " << ::android::internal::ToString(requestId);
    _aidl_os << ", selAddrFamily: " << ::android::internal::ToString(selAddrFamily);
    _aidl_os << ", direction: " << ::android::internal::ToString(direction);
    _aidl_os << ", oldSourceAddress: " << ::android::internal::ToString(oldSourceAddress);
    _aidl_os << ", oldDestinationAddress: " << ::android::internal::ToString(oldDestinationAddress);
    _aidl_os << ", newSourceAddress: " << ::android::internal::ToString(newSourceAddress);
    _aidl_os << ", newDestinationAddress: " << ::android::internal::ToString(newDestinationAddress);
    _aidl_os << ", interfaceId: " << ::android::internal::ToString(interfaceId);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
