#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The Sensor class.
/// [`Sensor`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor)
class Sensor : public EventTarget {
    explicit Sensor(Handle h) noexcept;

public:
    explicit Sensor(const emlite::Val &val) noexcept;
    static Sensor take_ownership(Handle h) noexcept;

    [[nodiscard]] Sensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `activated` attribute.
    /// [`Sensor.activated`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/activated)
    [[nodiscard]] bool activated() const;
    /// Getter of the `hasReading` attribute.
    /// [`Sensor.hasReading`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/hasReading)
    [[nodiscard]] bool hasReading() const;
    /// Getter of the `timestamp` attribute.
    /// [`Sensor.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/timestamp)
    [[nodiscard]] jsbind::Any timestamp() const;
    /// The start method.
    /// [`Sensor.start`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/start)
    jsbind::Undefined start();
    /// The stop method.
    /// [`Sensor.stop`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/stop)
    jsbind::Undefined stop();
    /// Getter of the `onreading` attribute.
    /// [`Sensor.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/onreading)
    [[nodiscard]] jsbind::Any onreading() const;
    /// Setter of the `onreading` attribute.
    /// [`Sensor.onreading`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/onreading)
    void onreading(const jsbind::Any& value);
    /// Getter of the `onactivate` attribute.
    /// [`Sensor.onactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/onactivate)
    [[nodiscard]] jsbind::Any onactivate() const;
    /// Setter of the `onactivate` attribute.
    /// [`Sensor.onactivate`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/onactivate)
    void onactivate(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`Sensor.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`Sensor.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Sensor/onerror)
    void onerror(const jsbind::Any& value);
};

