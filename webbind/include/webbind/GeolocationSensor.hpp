#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Sensor.hpp"
#include "GeolocationSensorOptions.hpp"
#include "GeolocationSensorReading.hpp"
#include "ReadOptions.hpp"

namespace webbind {

/// Interface GeolocationSensor
/// [`GeolocationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor)
class GeolocationSensor : public Sensor {
    explicit GeolocationSensor(Handle h) noexcept;
public:
    explicit GeolocationSensor(const emlite::Val &val) noexcept;
    static GeolocationSensor take_ownership(Handle h) noexcept;
    [[nodiscard]] GeolocationSensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new GeolocationSensor(..)` constructor, creating a new GeolocationSensor instance
    GeolocationSensor();
    /// The `new GeolocationSensor(..)` constructor, creating a new GeolocationSensor instance
    GeolocationSensor(const GeolocationSensorOptions& options);
    /// The read method.
    /// [`GeolocationSensor.read`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/read)
    static jsbind::Promise<GeolocationSensorReading> read();
    /// The read method.
    /// [`GeolocationSensor.read`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/read)
    static jsbind::Promise<GeolocationSensorReading> read(const ReadOptions& readOptions);
    /// [`GeolocationSensor.latitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/latitude)
    /// [`GeolocationSensor.latitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/latitude)
    [[nodiscard]] double latitude() const;
    /// [`GeolocationSensor.longitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/longitude)
    /// [`GeolocationSensor.longitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/longitude)
    [[nodiscard]] double longitude() const;
    /// [`GeolocationSensor.altitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/altitude)
    /// [`GeolocationSensor.altitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/altitude)
    [[nodiscard]] double altitude() const;
    /// [`GeolocationSensor.accuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/accuracy)
    /// [`GeolocationSensor.accuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/accuracy)
    [[nodiscard]] double accuracy() const;
    /// [`GeolocationSensor.altitudeAccuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/altitudeAccuracy)
    /// [`GeolocationSensor.altitudeAccuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/altitudeAccuracy)
    [[nodiscard]] double altitudeAccuracy() const;
    /// [`GeolocationSensor.heading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/heading)
    /// [`GeolocationSensor.heading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/heading)
    [[nodiscard]] double heading() const;
    /// [`GeolocationSensor.speed`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/speed)
    /// [`GeolocationSensor.speed`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/speed)
    [[nodiscard]] double speed() const;
};

} // namespace webbind