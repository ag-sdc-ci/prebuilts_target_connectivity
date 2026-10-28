/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/NativeVpnType.aidl
 */
#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_enums.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace net {
enum class NativeVpnType : int32_t {
  SERVICE = 1,
  PLATFORM = 2,
  LEGACY = 3,
  OEM = 4,
};

}  // namespace net
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace net {
[[nodiscard]] static inline std::string toString(NativeVpnType val) {
  switch(val) {
  case NativeVpnType::SERVICE:
    return "SERVICE";
  case NativeVpnType::PLATFORM:
    return "PLATFORM";
  case NativeVpnType::LEGACY:
    return "LEGACY";
  case NativeVpnType::OEM:
    return "OEM";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace net
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::net::NativeVpnType, 4> enum_values<aidl::android::net::NativeVpnType> = {
  aidl::android::net::NativeVpnType::SERVICE,
  aidl::android::net::NativeVpnType::PLATFORM,
  aidl::android::net::NativeVpnType::LEGACY,
  aidl::android::net::NativeVpnType::OEM,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
