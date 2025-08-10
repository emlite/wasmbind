#include "webbind/WorkletGlobalScope.hpp"

namespace webbind {

WorkletGlobalScope WorkletGlobalScope::take_ownership(Handle h) noexcept {
        return WorkletGlobalScope(h);
    }
WorkletGlobalScope WorkletGlobalScope::clone() const noexcept { return *this; }
emlite::Val WorkletGlobalScope::instance() noexcept { return emlite::Val::global("WorkletGlobalScope"); }
WorkletGlobalScope::WorkletGlobalScope(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkletGlobalScope::WorkletGlobalScope(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind