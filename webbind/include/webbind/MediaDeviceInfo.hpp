#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MediaDeviceInfo class.
/// [`MediaDeviceInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo)
class MediaDeviceInfo : public emlite::Val {
    explicit MediaDeviceInfo(Handle h) noexcept;

public:
    explicit MediaDeviceInfo(const emlite::Val &val) noexcept;
    static MediaDeviceInfo take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaDeviceInfo clone() const noexcept;
    /// Getter of the `deviceId` attribute.
    /// [`MediaDeviceInfo.deviceId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/deviceId)
    [[nodiscard]] jsbind::String deviceId() const;
    /// Getter of the `kind` attribute.
    /// [`MediaDeviceInfo.kind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/kind)
    [[nodiscard]] MediaDeviceKind kind() const;
    /// Getter of the `label` attribute.
    /// [`MediaDeviceInfo.label`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/label)
    [[nodiscard]] jsbind::String label() const;
    /// Getter of the `groupId` attribute.
    /// [`MediaDeviceInfo.groupId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/groupId)
    [[nodiscard]] jsbind::String groupId() const;
    /// The toJSON method.
    /// [`MediaDeviceInfo.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceInfo/toJSON)
    jsbind::Object toJSON();
};

