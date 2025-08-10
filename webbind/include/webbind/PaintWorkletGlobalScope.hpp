#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletGlobalScope.hpp"

namespace webbind {

/// Interface PaintWorkletGlobalScope
/// [`PaintWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/PaintWorkletGlobalScope)
class PaintWorkletGlobalScope : public WorkletGlobalScope {
    explicit PaintWorkletGlobalScope(Handle h) noexcept;
public:
    explicit PaintWorkletGlobalScope(const emlite::Val &val) noexcept;
    static PaintWorkletGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] PaintWorkletGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The registerPaint method.
    /// [`PaintWorkletGlobalScope.registerPaint`](https://developer.mozilla.org/en-US/docs/Web/API/PaintWorkletGlobalScope/registerPaint)
    jsbind::Undefined registerPaint(const jsbind::String& name, const jsbind::Function& paintCtor);
    /// [`PaintWorkletGlobalScope.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/PaintWorkletGlobalScope/devicePixelRatio)
    /// [`PaintWorkletGlobalScope.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/PaintWorkletGlobalScope/devicePixelRatio)
    [[nodiscard]] double devicePixelRatio() const;
};

} // namespace webbind