#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WorkletGlobalScope class.
/// [`WorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletGlobalScope)
class WorkletGlobalScope : public emlite::Val {
    explicit WorkletGlobalScope(Handle h) noexcept;

public:
    explicit WorkletGlobalScope(const emlite::Val &val) noexcept;
    static WorkletGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] WorkletGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

