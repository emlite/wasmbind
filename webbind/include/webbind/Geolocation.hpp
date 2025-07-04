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
    PositionOptions clone() const noexcept;
    bool enableHighAccuracy() const;
    void enableHighAccuracy(bool value);
    unsigned long timeout() const;
    void timeout(unsigned long value);
    unsigned long maximumAge() const;
    void maximumAge(unsigned long value);
};

class Geolocation : public emlite::Val {
    explicit Geolocation(Handle h) noexcept;

public:
    explicit Geolocation(const emlite::Val &val) noexcept;
    static Geolocation take_ownership(Handle h) noexcept;

    Geolocation clone() const noexcept;
    jsbind::Undefined getCurrentPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options);
    long watchPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options);
    jsbind::Undefined clearWatch(long watchId);
};

