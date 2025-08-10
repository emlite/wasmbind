#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface MediaDeviceInfo
/// [`MediaDeviceInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo)
class MediaDeviceInfo : public emlite::Val {
    explicit MediaDeviceInfo(Handle h) noexcept;
public:
    explicit MediaDeviceInfo(const emlite::Val &val) noexcept;
    static MediaDeviceInfo take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaDeviceInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MediaDeviceInfo.deviceId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/deviceId)
    /// [`MediaDeviceInfo.deviceId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/deviceId)
    [[nodiscard]] jsbind::String deviceId() const;
    /// [`MediaDeviceInfo.kind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/kind)
    /// [`MediaDeviceInfo.kind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/kind)
    [[nodiscard]] MediaDeviceKind kind() const;
    /// [`MediaDeviceInfo.label`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/label)
    /// [`MediaDeviceInfo.label`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/label)
    [[nodiscard]] jsbind::String label() const;
    /// [`MediaDeviceInfo.groupId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/groupId)
    /// [`MediaDeviceInfo.groupId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/groupId)
    [[nodiscard]] jsbind::String groupId() const;
    /// The toJSON method.
    /// [`MediaDeviceInfo.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind