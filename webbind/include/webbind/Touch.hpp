#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "TouchInit.hpp"
#include "enums.hpp"

namespace webbind {

class EventTarget;

/// Interface Touch
/// [`Touch`](https://developer.mozilla.org/en-US/docs/Web/API/Touch)
class Touch : public emlite::Val {
    explicit Touch(Handle h) noexcept;
public:
    explicit Touch(const emlite::Val &val) noexcept;
    static Touch take_ownership(Handle h) noexcept;
    [[nodiscard]] Touch clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Touch(..)` constructor, creating a new Touch instance
    Touch(const TouchInit& touchInitDict);
    /// [`Touch.identifier`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/identifier)
    /// [`Touch.identifier`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/identifier)
    [[nodiscard]] long identifier() const;
    /// [`Touch.target`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/target)
    /// [`Touch.target`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/target)
    [[nodiscard]] EventTarget target() const;
    /// [`Touch.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/screenX)
    /// [`Touch.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/screenX)
    [[nodiscard]] double screenX() const;
    /// [`Touch.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/screenY)
    /// [`Touch.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/screenY)
    [[nodiscard]] double screenY() const;
    /// [`Touch.clientX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/clientX)
    /// [`Touch.clientX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/clientX)
    [[nodiscard]] double clientX() const;
    /// [`Touch.clientY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/clientY)
    /// [`Touch.clientY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/clientY)
    [[nodiscard]] double clientY() const;
    /// [`Touch.pageX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/pageX)
    /// [`Touch.pageX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/pageX)
    [[nodiscard]] double pageX() const;
    /// [`Touch.pageY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/pageY)
    /// [`Touch.pageY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/pageY)
    [[nodiscard]] double pageY() const;
    /// [`Touch.radiusX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/radiusX)
    /// [`Touch.radiusX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/radiusX)
    [[nodiscard]] float radiusX() const;
    /// [`Touch.radiusY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/radiusY)
    /// [`Touch.radiusY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/radiusY)
    [[nodiscard]] float radiusY() const;
    /// [`Touch.rotationAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/rotationAngle)
    /// [`Touch.rotationAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/rotationAngle)
    [[nodiscard]] float rotationAngle() const;
    /// [`Touch.force`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/force)
    /// [`Touch.force`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/force)
    [[nodiscard]] float force() const;
    /// [`Touch.altitudeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/altitudeAngle)
    /// [`Touch.altitudeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/altitudeAngle)
    [[nodiscard]] float altitudeAngle() const;
    /// [`Touch.azimuthAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/azimuthAngle)
    /// [`Touch.azimuthAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/azimuthAngle)
    [[nodiscard]] float azimuthAngle() const;
    /// [`Touch.touchType`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/touchType)
    /// [`Touch.touchType`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/touchType)
    [[nodiscard]] TouchType touchType() const;
};

} // namespace webbind