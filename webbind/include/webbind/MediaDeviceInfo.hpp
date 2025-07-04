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
    jsbind::DOMString deviceId() const;
    MediaDeviceKind kind() const;
    jsbind::DOMString label() const;
    jsbind::DOMString groupId() const;
    jsbind::Object toJSON();
};

