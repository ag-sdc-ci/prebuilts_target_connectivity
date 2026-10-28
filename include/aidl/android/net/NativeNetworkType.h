/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: /los-21/prebuilts/build-tools/linux-x86/bin/aidl --lang=ndk --min_sdk_version=30 -Istaticlibs/netd/binder -h staticlibs/netd/gen/include -o staticlibs/netd/gen/src staticlibs/netd/binder/android/net/NativeNetworkType.aidl
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
enum class NativeNetworkType : int32_t {
  PHYSICAL = 0,
  VIRTUAL = 1,
  PHYSICAL_LOCAL = 2,
};

}  // namespace net
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace net {
[[nodiscard]] static inline std::string toString(NativeNetworkType val) {
  switch(val) {
  case NativeNetworkType::PHYSICAL:
    return "PHYSICAL";
  case NativeNetworkType::VIRTUAL:
    return "VIRTUAL";
  case NativeNetworkType::PHYSICAL_LOCAL:
    return "PHYSICAL_LOCAL";
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
constexpr inline std::array<aidl::android::net::NativeNetworkType, 3> enum_values<aidl::android::net::NativeNetworkType> = {
  aidl::android::net::NativeNetworkType::PHYSICAL,
  aidl::android::net::NativeNetworkType::VIRTUAL,
  aidl::android::net::NativeNetworkType::PHYSICAL_LOCAL,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
