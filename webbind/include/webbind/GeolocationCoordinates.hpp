#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GeolocationCoordinates
/// [`GeolocationCoordinates`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates)
class GeolocationCoordinates : public emlite::Val {
    explicit GeolocationCoordinates(Handle h) noexcept;
public:
    explicit GeolocationCoordinates(const emlite::Val &val) noexcept;
    static GeolocationCoordinates take_ownership(Handle h) noexcept;
    [[nodiscard]] GeolocationCoordinates clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GeolocationCoordinates.accuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/accuracy)
    /// [`GeolocationCoordinates.accuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/accuracy)
    [[nodiscard]] double accuracy() const;
    /// [`GeolocationCoordinates.latitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/latitude)
    /// [`GeolocationCoordinates.latitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/latitude)
    [[nodiscard]] double latitude() const;
    /// [`GeolocationCoordinates.longitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/longitude)
    /// [`GeolocationCoordinates.longitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/longitude)
    [[nodiscard]] double longitude() const;
    /// [`GeolocationCoordinates.altitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/altitude)
    /// [`GeolocationCoordinates.altitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/altitude)
    [[nodiscard]] double altitude() const;
    /// [`GeolocationCoordinates.altitudeAccuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/altitudeAccuracy)
    /// [`GeolocationCoordinates.altitudeAccuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/altitudeAccuracy)
    [[nodiscard]] double altitudeAccuracy() const;
    /// [`GeolocationCoordinates.heading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/heading)
    /// [`GeolocationCoordinates.heading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/heading)
    [[nodiscard]] double heading() const;
    /// [`GeolocationCoordinates.speed`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/speed)
    /// [`GeolocationCoordinates.speed`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/speed)
    [[nodiscard]] double speed() const;
    /// The toJSON method.
    /// [`GeolocationCoordinates.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind