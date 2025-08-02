#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"


/// The PaintWorkletGlobalScope class.
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
    jsbind::Undefined registerPaint(const jsbind::String& name, const jsbind::Any& paintCtor);
    /// Getter of the `devicePixelRatio` attribute.
    /// [`PaintWorkletGlobalScope.devicePixelRatio`](https://developer.mozilla.org/en-US/docs/Web/API/PaintWorkletGlobalScope/devicePixelRatio)
    [[nodiscard]] double devicePixelRatio() const;
};

