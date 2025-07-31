#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GeolocationCoordinates;


/// The GeolocationPosition class.
/// [`GeolocationPosition`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPosition)
class GeolocationPosition : public emlite::Val {
    explicit GeolocationPosition(Handle h) noexcept;

public:
    explicit GeolocationPosition(const emlite::Val &val) noexcept;
    static GeolocationPosition take_ownership(Handle h) noexcept;

    [[nodiscard]] GeolocationPosition clone() const noexcept;
    /// Getter of the `coords` attribute.
    /// [`GeolocationPosition.coords`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPosition/coords)
    [[nodiscard]] GeolocationCoordinates coords() const;
    /// Getter of the `timestamp` attribute.
    /// [`GeolocationPosition.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPosition/timestamp)
    [[nodiscard]] jsbind::Any timestamp() const;
    /// The toJSON method.
    /// [`GeolocationPosition.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationPosition/toJSON)
    jsbind::Object toJSON();
};

