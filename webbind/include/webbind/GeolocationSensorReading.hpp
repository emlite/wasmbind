#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GeolocationSensorReading
class GeolocationSensorReading : public emlite::Val {
  explicit GeolocationSensorReading(Handle h) noexcept;
public:
    static GeolocationSensorReading take_ownership(Handle h) noexcept;
    explicit GeolocationSensorReading(const emlite::Val &val) noexcept;
    GeolocationSensorReading() noexcept;
    [[nodiscard]] GeolocationSensorReading clone() const noexcept;
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(const jsbind::Any& value);
    /// Getter of the `latitude` attribute.
    [[nodiscard]] double latitude() const;
    /// Setter of the `latitude` attribute.
    void latitude(double value);
    /// Getter of the `longitude` attribute.
    [[nodiscard]] double longitude() const;
    /// Setter of the `longitude` attribute.
    void longitude(double value);
    /// Getter of the `altitude` attribute.
    [[nodiscard]] double altitude() const;
    /// Setter of the `altitude` attribute.
    void altitude(double value);
    /// Getter of the `accuracy` attribute.
    [[nodiscard]] double accuracy() const;
    /// Setter of the `accuracy` attribute.
    void accuracy(double value);
    /// Getter of the `altitudeAccuracy` attribute.
    [[nodiscard]] double altitudeAccuracy() const;
    /// Setter of the `altitudeAccuracy` attribute.
    void altitudeAccuracy(double value);
    /// Getter of the `heading` attribute.
    [[nodiscard]] double heading() const;
    /// Setter of the `heading` attribute.
    void heading(double value);
    /// Getter of the `speed` attribute.
    [[nodiscard]] double speed() const;
    /// Setter of the `speed` attribute.
    void speed(double value);
};

} // namespace webbind