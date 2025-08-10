#include "webbind/PaintWorkletGlobalScope.hpp"

namespace webbind {

PaintWorkletGlobalScope PaintWorkletGlobalScope::take_ownership(Handle h) noexcept {
        return PaintWorkletGlobalScope(h);
    }
PaintWorkletGlobalScope PaintWorkletGlobalScope::clone() const noexcept { return *this; }
emlite::Val PaintWorkletGlobalScope::instance() noexcept { return emlite::Val::global("PaintWorkletGlobalScope"); }
PaintWorkletGlobalScope::PaintWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}
PaintWorkletGlobalScope::PaintWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}

jsbind::Undefined PaintWorkletGlobalScope::registerPaint(const jsbind::String& name, const jsbind::Function& paintCtor) {
    return WorkletGlobalScope::call("registerPaint", name, paintCtor).as<jsbind::Undefined>();
}

double PaintWorkletGlobalScope::devicePixelRatio() const {
    return WorkletGlobalScope::get("devicePixelRatio").as<double>();
}


} // namespace webbind