#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type TouchInit
class TouchInit : public emlite::Val {
  explicit TouchInit(Handle h) noexcept;
public:
    static TouchInit take_ownership(Handle h) noexcept;
    explicit TouchInit(const emlite::Val &val) noexcept;
    TouchInit() noexcept;
    [[nodiscard]] TouchInit clone() const noexcept;
    /// Getter of the `identifier` attribute.
    [[nodiscard]] long identifier() const;
    /// Setter of the `identifier` attribute.
    void identifier(long value);
    /// Getter of the `target` attribute.
    [[nodiscard]] EventTarget target() const;
    /// Setter of the `target` attribute.
    void target(const EventTarget& value);
    /// Getter of the `clientX` attribute.
    [[nodiscard]] double clientX() const;
    /// Setter of the `clientX` attribute.
    void clientX(double value);
    /// Getter of the `clientY` attribute.
    [[nodiscard]] double clientY() const;
    /// Setter of the `clientY` attribute.
    void clientY(double value);
    /// Getter of the `screenX` attribute.
    [[nodiscard]] double screenX() const;
    /// Setter of the `screenX` attribute.
    void screenX(double value);
    /// Getter of the `screenY` attribute.
    [[nodiscard]] double screenY() const;
    /// Setter of the `screenY` attribute.
    void screenY(double value);
    /// Getter of the `pageX` attribute.
    [[nodiscard]] double pageX() const;
    /// Setter of the `pageX` attribute.
    void pageX(double value);
    /// Getter of the `pageY` attribute.
    [[nodiscard]] double pageY() const;
    /// Setter of the `pageY` attribute.
    void pageY(double value);
    /// Getter of the `radiusX` attribute.
    [[nodiscard]] float radiusX() const;
    /// Setter of the `radiusX` attribute.
    void radiusX(float value);
    /// Getter of the `radiusY` attribute.
    [[nodiscard]] float radiusY() const;
    /// Setter of the `radiusY` attribute.
    void radiusY(float value);
    /// Getter of the `rotationAngle` attribute.
    [[nodiscard]] float rotationAngle() const;
    /// Setter of the `rotationAngle` attribute.
    void rotationAngle(float value);
    /// Getter of the `force` attribute.
    [[nodiscard]] float force() const;
    /// Setter of the `force` attribute.
    void force(float value);
    /// Getter of the `altitudeAngle` attribute.
    [[nodiscard]] double altitudeAngle() const;
    /// Setter of the `altitudeAngle` attribute.
    void altitudeAngle(double value);
    /// Getter of the `azimuthAngle` attribute.
    [[nodiscard]] double azimuthAngle() const;
    /// Setter of the `azimuthAngle` attribute.
    void azimuthAngle(double value);
    /// Getter of the `touchType` attribute.
    [[nodiscard]] TouchType touchType() const;
    /// Setter of the `touchType` attribute.
    void touchType(const TouchType& value);
};

} // namespace webbind