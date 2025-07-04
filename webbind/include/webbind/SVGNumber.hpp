#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGNumber : public emlite::Val {
    explicit SVGNumber(Handle h) noexcept;

public:
    explicit SVGNumber(const emlite::Val &val) noexcept;
    static SVGNumber take_ownership(Handle h) noexcept;

    SVGNumber clone() const noexcept;
    float value() const;
    void value(float value);
};

