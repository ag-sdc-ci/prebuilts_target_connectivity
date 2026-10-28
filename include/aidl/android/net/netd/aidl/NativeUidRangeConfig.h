/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/netd/aidl/NativeUidRangeConfig.aidl
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
#include <aidl/android/net/UidRangeParcel.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::net {
class UidRangeParcel;
}  // namespace aidl::android::net
namespace aidl {
namespace android {
namespace net {
namespace netd {
namespace aidl {
class NativeUidRangeConfig {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t netId = 0;
  std::vector<::aidl::android::net::UidRangeParcel> uidRanges;
  int32_t subPriority = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const NativeUidRangeConfig& _rhs) const {
    return std::tie(netId, uidRanges, subPriority) == std::tie(_rhs.netId, _rhs.uidRanges, _rhs.subPriority);
  }
  inline bool operator<(const NativeUidRangeConfig& _rhs) const {
    return std::tie(netId, uidRanges, subPriority) < std::tie(_rhs.netId, _rhs.uidRanges, _rhs.subPriority);
  }
  inline bool operator!=(const NativeUidRangeConfig& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const NativeUidRangeConfig& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const NativeUidRangeConfig& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const NativeUidRangeConfig& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "NativeUidRangeConfig{";
    _aidl_os << "netId: " << ::android::internal::ToString(netId);
    _aidl_os << ", uidRanges: " << ::android::internal::ToString(uidRanges);
    _aidl_os << ", subPriority: " << ::android::internal::ToString(subPriority);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace aidl
}  // namespace netd
}  // namespace net
}  // namespace android
}  // namespace aidl
