#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CanvasGradient : public emlite::Val {
    explicit CanvasGradient(Handle h) noexcept;

public:
    explicit CanvasGradient(const emlite::Val &val) noexcept;
    static CanvasGradient take_ownership(Handle h) noexcept;

    CanvasGradient clone() const noexcept;
    jsbind::Undefined addColorStop(double offset, const jsbind::DOMString& color);
};

