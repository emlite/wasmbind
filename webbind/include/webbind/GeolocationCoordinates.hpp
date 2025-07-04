#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GeolocationCoordinates : public emlite::Val {
    explicit GeolocationCoordinates(Handle h) noexcept;

public:
    explicit GeolocationCoordinates(const emlite::Val &val) noexcept;
    static GeolocationCoordinates take_ownership(Handle h) noexcept;

    GeolocationCoordinates clone() const noexcept;
    double accuracy() const;
    double latitude() const;
    double longitude() const;
    double altitude() const;
    double altitudeAccuracy() const;
    double heading() const;
    double speed() const;
    jsbind::Object toJSON();
};

