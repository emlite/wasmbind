#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"


/// The LayoutWorkletGlobalScope class.
/// [`LayoutWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutWorkletGlobalScope)
class LayoutWorkletGlobalScope : public WorkletGlobalScope {
    explicit LayoutWorkletGlobalScope(Handle h) noexcept;

public:
    explicit LayoutWorkletGlobalScope(const emlite::Val &val) noexcept;
    static LayoutWorkletGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] LayoutWorkletGlobalScope clone() const noexcept;
    /// The registerLayout method.
    /// [`LayoutWorkletGlobalScope.registerLayout`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutWorkletGlobalScope/registerLayout)
    jsbind::Undefined registerLayout(const jsbind::String& name, const jsbind::Any& layoutCtor);
};

