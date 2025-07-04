#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class DevicePosture : public EventTarget {
    explicit DevicePosture(Handle h) noexcept;

public:
    explicit DevicePosture(const emlite::Val &val) noexcept;
    static DevicePosture take_ownership(Handle h) noexcept;

    DevicePosture clone() const noexcept;
    DevicePostureType type() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

