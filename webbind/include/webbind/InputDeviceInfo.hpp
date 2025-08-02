#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MediaDeviceInfo.hpp"
#include "MediaStreamTrack.hpp"
#include "enums.hpp"


/// The InputDeviceInfo class.
/// [`InputDeviceInfo`](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceInfo)
class InputDeviceInfo : public MediaDeviceInfo {
    explicit InputDeviceInfo(Handle h) noexcept;

public:
    explicit InputDeviceInfo(const emlite::Val &val) noexcept;
    static InputDeviceInfo take_ownership(Handle h) noexcept;

    [[nodiscard]] InputDeviceInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getCapabilities method.
    /// [`InputDeviceInfo.getCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/InputDeviceInfo/getCapabilities)
    MediaTrackCapabilities getCapabilities();
};

