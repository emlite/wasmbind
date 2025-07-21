#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class ScreenOrientation : public EventTarget {
    explicit ScreenOrientation(Handle h) noexcept;

public:
    explicit ScreenOrientation(const emlite::Val &val) noexcept;
    static ScreenOrientation take_ownership(Handle h) noexcept;

    ScreenOrientation clone() const noexcept;
    jsbind::Promise<jsbind::Undefined> lock(const OrientationLockType& orientation);
    jsbind::Undefined unlock();
    OrientationType type() const;
    unsigned short angle() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

