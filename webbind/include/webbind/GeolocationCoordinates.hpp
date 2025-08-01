#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GeolocationCoordinates class.
/// [`GeolocationCoordinates`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates)
class GeolocationCoordinates : public emlite::Val {
    explicit GeolocationCoordinates(Handle h) noexcept;

public:
    explicit GeolocationCoordinates(const emlite::Val &val) noexcept;
    static GeolocationCoordinates take_ownership(Handle h) noexcept;

    [[nodiscard]] GeolocationCoordinates clone() const noexcept;
    /// Getter of the `accuracy` attribute.
    /// [`GeolocationCoordinates.accuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/accuracy)
    [[nodiscard]] double accuracy() const;
    /// Getter of the `latitude` attribute.
    /// [`GeolocationCoordinates.latitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/latitude)
    [[nodiscard]] double latitude() const;
    /// Getter of the `longitude` attribute.
    /// [`GeolocationCoordinates.longitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/longitude)
    [[nodiscard]] double longitude() const;
    /// Getter of the `altitude` attribute.
    /// [`GeolocationCoordinates.altitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/altitude)
    [[nodiscard]] double altitude() const;
    /// Getter of the `altitudeAccuracy` attribute.
    /// [`GeolocationCoordinates.altitudeAccuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/altitudeAccuracy)
    [[nodiscard]] double altitudeAccuracy() const;
    /// Getter of the `heading` attribute.
    /// [`GeolocationCoordinates.heading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/heading)
    [[nodiscard]] double heading() const;
    /// Getter of the `speed` attribute.
    /// [`GeolocationCoordinates.speed`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/speed)
    [[nodiscard]] double speed() const;
    /// The toJSON method.
    /// [`GeolocationCoordinates.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/toJSON)
    jsbind::Object toJSON();
};

