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
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::FrozenArray<float> values() const;
    void values(jsbind::FrozenArray<float> value);
};

