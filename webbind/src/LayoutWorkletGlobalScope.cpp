#include <webbind/LayoutWorkletGlobalScope.hpp>

namespace webbind {

LayoutWorkletGlobalScope LayoutWorkletGlobalScope::take_ownership(Handle h) noexcept {
        return LayoutWorkletGlobalScope(h);
    }
LayoutWorkletGlobalScope LayoutWorkletGlobalScope::clone() const noexcept { return *this; }
emlite::Val LayoutWorkletGlobalScope::instance() noexcept { return emlite::Val::global("LayoutWorkletGlobalScope"); }
LayoutWorkletGlobalScope::LayoutWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}
LayoutWorkletGlobalScope::LayoutWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}

jsbind::Undefined LayoutWorkletGlobalScope::registerLayout(const jsbind::String& name, const jsbind::Function& layoutCtor) {
    return WorkletGlobalScope::call("registerLayout", name, layoutCtor).as<jsbind::Undefined>();
}


} // namespace webbind