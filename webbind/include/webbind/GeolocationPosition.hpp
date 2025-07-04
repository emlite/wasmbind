#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GeolocationCoordinates;


class GeolocationPosition : public emlite::Val {
    explicit GeolocationPosition(Handle h) noexcept;

public:
    explicit GeolocationPosition(const emlite::Val &val) noexcept;
    static GeolocationPosition take_ownership(Handle h) noexcept;

    GeolocationPosition clone() const noexcept;
    GeolocationCoordinates coords() const;
    jsbind::Any timestamp() const;
    jsbind::Object toJSON();
};

