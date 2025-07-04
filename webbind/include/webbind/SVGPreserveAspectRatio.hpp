#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGPreserveAspectRatio : public emlite::Val {
    explicit SVGPreserveAspectRatio(Handle h) noexcept;

public:
    explicit SVGPreserveAspectRatio(const emlite::Val &val) noexcept;
    static SVGPreserveAspectRatio take_ownership(Handle h) noexcept;

    SVGPreserveAspectRatio clone() const noexcept;
    unsigned short align() const;
    void align(unsigned short value);
    unsigned short meetOrSlice() const;
    void meetOrSlice(unsigned short value);
};

