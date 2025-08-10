#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type TouchInit
/// [`TouchInit`](https://developer.mozilla.org/en-US/docs/Web/API/TouchInit)
class TouchInit : public emlite::Val {
  explicit TouchInit(Handle h) noexcept;
public:
    static TouchInit take_ownership(Handle h) noexcept;
    explicit TouchInit(const emlite::Val &val) noexcept;
    TouchInit() noexcept;
    [[nodiscard]] TouchInit clone() const noexcept;
    [[nodiscard]] long identifier() const;
    void identifier(long value);
    [[nodiscard]] EventTarget target() const;
    void target(const EventTarget& value);
    [[nodiscard]] double clientX() const;
    void clientX(double value);
    [[nodiscard]] double clientY() const;
    void clientY(double value);
    [[nodiscard]] double screenX() const;
    void screenX(double value);
    [[nodiscard]] double screenY() const;
    void screenY(double value);
    [[nodiscard]] double pageX() const;
    void pageX(double value);
    [[nodiscard]] double pageY() const;
    void pageY(double value);
    [[nodiscard]] float radiusX() const;
    void radiusX(float value);
    [[nodiscard]] float radiusY() const;
    void radiusY(float value);
    [[nodiscard]] float rotationAngle() const;
    void rotationAngle(float value);
    [[nodiscard]] float force() const;
    void force(float value);
    [[nodiscard]] double altitudeAngle() const;
    void altitudeAngle(double value);
    [[nodiscard]] double azimuthAngle() const;
    void azimuthAngle(double value);
    [[nodiscard]] TouchType touchType() const;
    void touchType(const TouchType& value);
};

} // namespace webbind