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
    GeolocationSensorReading clone() const noexcept;
    jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    double latitude() const;
    void latitude(double value);
    double longitude() const;
    void longitude(double value);
    double altitude() const;
    void altitude(double value);
    double accuracy() const;
    void accuracy(double value);
    double altitudeAccuracy() const;
    void altitudeAccuracy(double value);
    double heading() const;
    void heading(double value);
    double speed() const;
    void speed(double value);
};

class ReadOptions : public emlite::Val {
  explicit ReadOptions(Handle h) noexcept;
public:
    static ReadOptions take_ownership(Handle h) noexcept;
    explicit ReadOptions(const emlite::Val &val) noexcept;
    ReadOptions() noexcept;
    ReadOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class GeolocationSensor : public Sensor {
    explicit GeolocationSensor(Handle h) noexcept;

public:
    explicit GeolocationSensor(const emlite::Val &val) noexcept;
    static GeolocationSensor take_ownership(Handle h) noexcept;

    GeolocationSensor clone() const noexcept;
    GeolocationSensor(const jsbind::Any& options);
    static jsbind::Promise read(const ReadOptions& readOptions);
    double latitude() const;
    double longitude() const;
    double altitude() const;
    double accuracy() const;
    double altitudeAccuracy() const;
    double heading() const;
    double speed() const;
};

