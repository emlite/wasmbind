#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class EventTarget;


class Touch : public emlite::Val {
    explicit Touch(Handle h) noexcept;

public:
    explicit Touch(const emlite::Val &val) noexcept;
    static Touch take_ownership(Handle h) noexcept;

    Touch clone() const noexcept;
    Touch(const jsbind::Any& touchInitDict);
    long identifier() const;
    EventTarget target() const;
    double screenX() const;
    double screenY() const;
    double clientX() const;
    double clientY() const;
    double pageX() const;
    double pageY() const;
    float radiusX() const;
    float radiusY() const;
    float rotationAngle() const;
    float force() const;
    float altitudeAngle() const;
    float azimuthAngle() const;
    TouchType touchType() const;
};

