#include <webbind/WorkletGlobalScope.hpp>


WorkletGlobalScope WorkletGlobalScope::take_ownership(Handle h) noexcept {
        return WorkletGlobalScope(h);
    }
WorkletGlobalScope WorkletGlobalScope::clone() const noexcept { return *this; }
WorkletGlobalScope::WorkletGlobalScope(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkletGlobalScope::WorkletGlobalScope(const emlite::Val &val) noexcept: emlite::Val(val) {}


