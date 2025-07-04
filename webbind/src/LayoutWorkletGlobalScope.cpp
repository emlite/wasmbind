#include <webbind/LayoutWorkletGlobalScope.hpp>


LayoutWorkletGlobalScope LayoutWorkletGlobalScope::take_ownership(Handle h) noexcept {
        return LayoutWorkletGlobalScope(h);
    }
LayoutWorkletGlobalScope LayoutWorkletGlobalScope::clone() const noexcept { return *this; }
LayoutWorkletGlobalScope::LayoutWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}
LayoutWorkletGlobalScope::LayoutWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}


jsbind::Undefined LayoutWorkletGlobalScope::registerLayout(const jsbind::DOMString& name, const jsbind::Any& layoutCtor) {
    return WorkletGlobalScope::call("registerLayout", name, layoutCtor).as<jsbind::Undefined>();
}

