#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MediaDeviceInfo : public emlite::Val {
    explicit MediaDeviceInfo(Handle h) noexcept;

public:
    explicit MediaDeviceInfo(const emlite::Val &val) noexcept;
    static MediaDeviceInfo take_ownership(Handle h) noexcept;

    MediaDeviceInfo clone() const noexcept;
    jsbind::String deviceId() const;
    MediaDeviceKind kind() const;
    jsbind::String label() const;
    jsbind::String groupId() const;
    jsbind::Object toJSON();
};

