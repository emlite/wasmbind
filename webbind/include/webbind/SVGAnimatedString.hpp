#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGAnimatedString : public emlite::Val {
    explicit SVGAnimatedString(Handle h) noexcept;

public:
    explicit SVGAnimatedString(const emlite::Val &val) noexcept;
    static SVGAnimatedString take_ownership(Handle h) noexcept;

    SVGAnimatedString clone() const noexcept;
    jsbind::String baseVal() const;
    void baseVal(const jsbind::String& value);
    jsbind::String animVal() const;
};

