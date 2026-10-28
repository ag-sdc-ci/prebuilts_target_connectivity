/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/mdns/aidl/ResolutionInfo.aidl
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
class ResolutionInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t id = 0;
  int32_t result = 0;
  std::string serviceName;
  std::string registrationType;
  std::string domain;
  std::string serviceFullName;
  std::string hostname;
  int32_t port = 0;
  std::vector<uint8_t> txtRecord;
  int32_t interfaceIdx = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ResolutionInfo& _rhs) const {
    return std::tie(id, result, serviceName, registrationType, domain, serviceFullName, hostname, port, txtRecord, interfaceIdx) == std::tie(_rhs.id, _rhs.result, _rhs.serviceName, _rhs.registrationType, _rhs.domain, _rhs.serviceFullName, _rhs.hostname, _rhs.port, _rhs.txtRecord, _rhs.interfaceIdx);
  }
  inline bool operator<(const ResolutionInfo& _rhs) const {
    return std::tie(id, result, serviceName, registrationType, domain, serviceFullName, hostname, port, txtRecord, interfaceIdx) < std::tie(_rhs.id, _rhs.result, _rhs.serviceName, _rhs.registrationType, _rhs.domain, _rhs.serviceFullName, _rhs.hostname, _rhs.port, _rhs.txtRecord, _rhs.interfaceIdx);
  }
  inline bool operator!=(const ResolutionInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ResolutionInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ResolutionInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ResolutionInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_LOCAL;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ResolutionInfo{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", result: " << ::android::internal::ToString(result);
    _aidl_os << ", serviceName: " << ::android::internal::ToString(serviceName);
    _aidl_os << ", registrationType: " << ::android::internal::ToString(registrationType);
    _aidl_os << ", domain: " << ::android::internal::ToString(domain);
    _aidl_os << ", serviceFullName: " << ::android::internal::ToString(serviceFullName);
    _aidl_os << ", hostname: " << ::android::internal::ToString(hostname);
    _aidl_os << ", port: " << ::android::internal::ToString(port);
    _aidl_os << ", txtRecord: " << ::android::internal::ToString(txtRecord);
    _aidl_os << ", interfaceIdx: " << ::android::internal::ToString(interfaceIdx);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace aidl
}  // namespace mdns
}  // namespace net
}  // namespace android
}  // namespace aidl
