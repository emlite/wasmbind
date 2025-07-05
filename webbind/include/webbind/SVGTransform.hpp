#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class DOMMatrix;


class SVGTransform : public emlite::Val {
    explicit SVGTransform(Handle h) noexcept;

public:
    explicit SVGTransform(const emlite::Val &val) noexcept;
    static SVGTransform take_ownership(Handle h) noexcept;

    SVGTransform clone() const noexcept;
    unsigned short type() const;
    DOMMatrix matrix() const;
    float angle() const;
    jsbind::Undefined setMatrix();
    jsbind::Undefined setMatrix(const DOMMatrix2DInit& matrix);
    jsbind::Undefined setTranslate(float tx, float ty);
    jsbind::Undefined setScale(float sx, float sy);
    jsbind::Undefined setRotate(float angle, float cx, float cy);
    jsbind::Undefined setSkewX(float angle);
    jsbind::Undefined setSkewY(float angle);
};

