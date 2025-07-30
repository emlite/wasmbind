#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GeolocationPositionError : public emlite::Val {
    explicit GeolocationPositionError(Handle h) noexcept;

public:
    explicit GeolocationPositionError(const emlite::Val &val) noexcept;
    static GeolocationPositionError take_ownership(Handle h) noexcept;

    GeolocationPositionError clone() const noexcept;
    unsigned short code() const;
    jsbind::String message() const;
};

