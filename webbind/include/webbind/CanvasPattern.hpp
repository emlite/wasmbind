#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"


class CanvasPattern : public emlite::Val {
    explicit CanvasPattern(Handle h) noexcept;

public:
    explicit CanvasPattern(const emlite::Val &val) noexcept;
    static CanvasPattern take_ownership(Handle h) noexcept;

    CanvasPattern clone() const noexcept;
    jsbind::Undefined setTransform(const DOMMatrix2DInit& transform);
};

