#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"


class PaintWorkletGlobalScope : public WorkletGlobalScope {
    explicit PaintWorkletGlobalScope(Handle h) noexcept;

public:
    explicit PaintWorkletGlobalScope(const emlite::Val &val) noexcept;
    static PaintWorkletGlobalScope take_ownership(Handle h) noexcept;

    PaintWorkletGlobalScope clone() const noexcept;
    jsbind::Undefined registerPaint(const jsbind::String& name, const jsbind::Any& paintCtor);
    double devicePixelRatio() const;
};

