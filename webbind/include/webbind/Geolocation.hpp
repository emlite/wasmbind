#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PositionOptions;


class PositionOptions : public emlite::Val {
  explicit PositionOptions(Handle h) noexcept;
public:
    static PositionOptions take_ownership(Handle h) noexcept;
    explicit PositionOptions(const emlite::Val &val) noexcept;
    PositionOptions() noexcept;
    [[nodiscard]] PositionOptions clone() const noexcept;
    [[nodiscard]] bool enableHighAccuracy() const;
    void enableHighAccuracy(bool value);
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
    [[nodiscard]] unsigned long maximumAge() const;
    void maximumAge(unsigned long value);
};

/// The Geolocation class.
/// [`Geolocation`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation)
class Geolocation : public emlite::Val {
    explicit Geolocation(Handle h) noexcept;

public:
    explicit Geolocation(const emlite::Val &val) noexcept;
    static Geolocation take_ownership(Handle h) noexcept;

    [[nodiscard]] Geolocation clone() const noexcept;
    /// The getCurrentPosition method.
    /// [`Geolocation.getCurrentPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/getCurrentPosition)
    jsbind::Undefined getCurrentPosition(const jsbind::Function& successCallback);
    /// The getCurrentPosition method.
    /// [`Geolocation.getCurrentPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/getCurrentPosition)
    jsbind::Undefined getCurrentPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
    /// The getCurrentPosition method.
    /// [`Geolocation.getCurrentPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/getCurrentPosition)
    jsbind::Undefined getCurrentPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options);
    /// The watchPosition method.
    /// [`Geolocation.watchPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/watchPosition)
    long watchPosition(const jsbind::Function& successCallback);
    /// The watchPosition method.
    /// [`Geolocation.watchPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/watchPosition)
    long watchPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
    /// The watchPosition method.
    /// [`Geolocation.watchPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/watchPosition)
    long watchPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options);
    /// The clearWatch method.
    /// [`Geolocation.clearWatch`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation/clearWatch)
    jsbind::Undefined clearWatch(long watchId);
};

