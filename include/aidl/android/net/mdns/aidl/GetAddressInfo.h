/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/GetAddressInfo.aidl
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
namespace mdns {
namespace aidl {
class GetAddressInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t id = 0;
  int32_t result = 0;
  std::string hostname;
  std::string address;
  int32_t interfaceIdx = 0;
  int32_t netId = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const GetAddressInfo& _rhs) const {
    return std::tie(id, result, hostname, address, interfaceIdx, netId) == std::tie(_rhs.id, _rhs.result, _rhs.hostname, _rhs.address, _rhs.interfaceIdx, _rhs.netId);
  }
  inline bool operator<(const GetAddressInfo& _rhs) const {
    return std::tie(id, result, hostname, address, interfaceIdx, netId) < std::tie(_rhs.id, _rhs.result, _rhs.hostname, _rhs.address, _rhs.interfaceIdx, _rhs.netId);
  }
  inline bool operator!=(const GetAddressInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const GetAddressInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const GetAddressInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const GetAddressInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "GetAddressInfo{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", result: " << ::android::internal::ToString(result);
    _aidl_os << ", hostname: " << ::android::internal::ToString(hostname);
    _aidl_os << ", address: " << ::android::internal::ToString(address);
    _aidl_os << ", interfaceIdx: " << ::android::internal::ToString(interfaceIdx);
    _aidl_os << ", netId: " << ::android::internal::ToString(netId);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
