/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/TetherOffloadRuleParcel.aidl
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
class TetherOffloadRuleParcel {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t inputInterfaceIndex = 0;
  int32_t outputInterfaceIndex = 0;
  std::vector<uint8_t> destination;
  int32_t prefixLength = 0;
  std::vector<uint8_t> srcL2Address;
  std::vector<uint8_t> dstL2Address;
  int32_t pmtu = 1500;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const TetherOffloadRuleParcel& _rhs) const {
    return std::tie(inputInterfaceIndex, outputInterfaceIndex, destination, prefixLength, srcL2Address, dstL2Address, pmtu) == std::tie(_rhs.inputInterfaceIndex, _rhs.outputInterfaceIndex, _rhs.destination, _rhs.prefixLength, _rhs.srcL2Address, _rhs.dstL2Address, _rhs.pmtu);
  }
  inline bool operator<(const TetherOffloadRuleParcel& _rhs) const {
    return std::tie(inputInterfaceIndex, outputInterfaceIndex, destination, prefixLength, srcL2Address, dstL2Address, pmtu) < std::tie(_rhs.inputInterfaceIndex, _rhs.outputInterfaceIndex, _rhs.destination, _rhs.prefixLength, _rhs.srcL2Address, _rhs.dstL2Address, _rhs.pmtu);
  }
  inline bool operator!=(const TetherOffloadRuleParcel& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const TetherOffloadRuleParcel& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const TetherOffloadRuleParcel& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const TetherOffloadRuleParcel& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "TetherOffloadRuleParcel{";
    _aidl_os << "inputInterfaceIndex: " << ::android::internal::ToString(inputInterfaceIndex);
    _aidl_os << ", outputInterfaceIndex: " << ::android::internal::ToString(outputInterfaceIndex);
    _aidl_os << ", destination: " << ::android::internal::ToString(destination);
    _aidl_os << ", prefixLength: " << ::android::internal::ToString(prefixLength);
    _aidl_os << ", srcL2Address: " << ::android::internal::ToString(srcL2Address);
    _aidl_os << ", dstL2Address: " << ::android::internal::ToString(dstL2Address);
    _aidl_os << ", pmtu: " << ::android::internal::ToString(pmtu);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace net
}  // namespace android
}  // namespace aidl
