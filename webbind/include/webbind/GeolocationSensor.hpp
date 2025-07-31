#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"

class GeolocationSensorReading;
class ReadOptions;
class AbortSignal;


class GeolocationSensorReading : public emlite::Val {
  explicit GeolocationSensorReading(Handle h) noexcept;
public:
    static GeolocationSensorReading take_ownership(Handle h) noexcept;
    explicit GeolocationSensorReading(const emlite::Val &val) noexcept;
    GeolocationSensorReading() noexcept;
    [[nodiscard]] GeolocationSensorReading clone() const noexcept;
    [[nodiscard]] jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    [[nodiscard]] double latitude() const;
    void latitude(double value);
    [[nodiscard]] double longitude() const;
    void longitude(double value);
    [[nodiscard]] double altitude() const;
    void altitude(double value);
    [[nodiscard]] double accuracy() const;
    void accuracy(double value);
    [[nodiscard]] double altitudeAccuracy() const;
    void altitudeAccuracy(double value);
    [[nodiscard]] double heading() const;
    void heading(double value);
    [[nodiscard]] double speed() const;
    void speed(double value);
};

class ReadOptions : public emlite::Val {
  explicit ReadOptions(Handle h) noexcept;
public:
    static ReadOptions take_ownership(Handle h) noexcept;
    explicit ReadOptions(const emlite::Val &val) noexcept;
    ReadOptions() noexcept;
    [[nodiscard]] ReadOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The GeolocationSensor class.
/// [`GeolocationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor)
class GeolocationSensor : public Sensor {
    explicit GeolocationSensor(Handle h) noexcept;

public:
    explicit GeolocationSensor(const emlite::Val &val) noexcept;
    static GeolocationSensor take_ownership(Handle h) noexcept;

    [[nodiscard]] GeolocationSensor clone() const noexcept;
    /// The `new GeolocationSensor(..)` constructor, creating a new GeolocationSensor instance
    GeolocationSensor();
    /// The `new GeolocationSensor(..)` constructor, creating a new GeolocationSensor instance
    GeolocationSensor(const jsbind::Any& options);
    /// The read method.
    /// [`GeolocationSensor.read`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/read)
    static jsbind::Promise<GeolocationSensorReading> read();
    /// The read method.
    /// [`GeolocationSensor.read`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/read)
    static jsbind::Promise<GeolocationSensorReading> read(const ReadOptions& readOptions);
    /// Getter of the `latitude` attribute.
    /// [`GeolocationSensor.latitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/latitude)
    [[nodiscard]] double latitude() const;
    /// Getter of the `longitude` attribute.
    /// [`GeolocationSensor.longitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/longitude)
    [[nodiscard]] double longitude() const;
    /// Getter of the `altitude` attribute.
    /// [`GeolocationSensor.altitude`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/altitude)
    [[nodiscard]] double altitude() const;
    /// Getter of the `accuracy` attribute.
    /// [`GeolocationSensor.accuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/accuracy)
    [[nodiscard]] double accuracy() const;
    /// Getter of the `altitudeAccuracy` attribute.
    /// [`GeolocationSensor.altitudeAccuracy`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/altitudeAccuracy)
    [[nodiscard]] double altitudeAccuracy() const;
    /// Getter of the `heading` attribute.
    /// [`GeolocationSensor.heading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/heading)
    [[nodiscard]] double heading() const;
    /// Getter of the `speed` attribute.
    /// [`GeolocationSensor.speed`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor/speed)
    [[nodiscard]] double speed() const;
};

