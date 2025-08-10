#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GeolocationSensorReading
/// [`GeolocationSensorReading`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensorReading)
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

} // namespace webbind