#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MediaDeviceInfo.hpp"
#include "MediaStreamTrack.hpp"
#include "enums.hpp"


class InputDeviceInfo : public MediaDeviceInfo {
    explicit InputDeviceInfo(Handle h) noexcept;

public:
    explicit InputDeviceInfo(const emlite::Val &val) noexcept;
    static InputDeviceInfo take_ownership(Handle h) noexcept;

    InputDeviceInfo clone() const noexcept;
    MediaTrackCapabilities getCapabilities();
};

