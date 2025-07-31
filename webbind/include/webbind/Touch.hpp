#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class EventTarget;


/// The Touch class.
/// [`Touch`](https://developer.mozilla.org/en-US/docs/Web/API/Touch)
class Touch : public emlite::Val {
    explicit Touch(Handle h) noexcept;

public:
    explicit Touch(const emlite::Val &val) noexcept;
    static Touch take_ownership(Handle h) noexcept;

    [[nodiscard]] Touch clone() const noexcept;
    /// The `new Touch(..)` constructor, creating a new Touch instance
    Touch(const jsbind::Any& touchInitDict);
    /// Getter of the `identifier` attribute.
    /// [`Touch.identifier`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/identifier)
    [[nodiscard]] long identifier() const;
    /// Getter of the `target` attribute.
    /// [`Touch.target`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/target)
    [[nodiscard]] EventTarget target() const;
    /// Getter of the `screenX` attribute.
    /// [`Touch.screenX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/screenX)
    [[nodiscard]] double screenX() const;
    /// Getter of the `screenY` attribute.
    /// [`Touch.screenY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/screenY)
    [[nodiscard]] double screenY() const;
    /// Getter of the `clientX` attribute.
    /// [`Touch.clientX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/clientX)
    [[nodiscard]] double clientX() const;
    /// Getter of the `clientY` attribute.
    /// [`Touch.clientY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/clientY)
    [[nodiscard]] double clientY() const;
    /// Getter of the `pageX` attribute.
    /// [`Touch.pageX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/pageX)
    [[nodiscard]] double pageX() const;
    /// Getter of the `pageY` attribute.
    /// [`Touch.pageY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/pageY)
    [[nodiscard]] double pageY() const;
    /// Getter of the `radiusX` attribute.
    /// [`Touch.radiusX`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/radiusX)
    [[nodiscard]] float radiusX() const;
    /// Getter of the `radiusY` attribute.
    /// [`Touch.radiusY`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/radiusY)
    [[nodiscard]] float radiusY() const;
    /// Getter of the `rotationAngle` attribute.
    /// [`Touch.rotationAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/rotationAngle)
    [[nodiscard]] float rotationAngle() const;
    /// Getter of the `force` attribute.
    /// [`Touch.force`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/force)
    [[nodiscard]] float force() const;
    /// Getter of the `altitudeAngle` attribute.
    /// [`Touch.altitudeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/altitudeAngle)
    [[nodiscard]] float altitudeAngle() const;
    /// Getter of the `azimuthAngle` attribute.
    /// [`Touch.azimuthAngle`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/azimuthAngle)
    [[nodiscard]] float azimuthAngle() const;
    /// Getter of the `touchType` attribute.
    /// [`Touch.touchType`](https://developer.mozilla.org/en-US/docs/Web/API/Touch/touchType)
    [[nodiscard]] TouchType touchType() const;
};

