#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGPathSegment : public emlite::Val {
    explicit SVGPathSegment(Handle h) noexcept;

public:
    explicit SVGPathSegment(const emlite::Val &val) noexcept;
    static SVGPathSegment take_ownership(Handle h) noexcept;

    SVGPathSegment clone() const noexcept;
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::TypedArray<float> values() const;
    void values(jsbind::TypedArray<float> value);
};

