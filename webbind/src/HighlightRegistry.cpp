#include <webbind/HighlightRegistry.hpp>
#include <webbind/Highlight.hpp>
#include <webbind/ShadowRoot.hpp>
#include <webbind/AbstractRange.hpp>


HighlightHitResult::HighlightHitResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HighlightHitResult HighlightHitResult::take_ownership(Handle h) noexcept {
        return HighlightHitResult(h);
    }
HighlightHitResult::HighlightHitResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
HighlightHitResult::HighlightHitResult() noexcept: emlite::Val(emlite::Val::object()) {}
HighlightHitResult HighlightHitResult::clone() const noexcept { return *this; }

Highlight HighlightHitResult::highlight() const {
    return emlite::Val::get("highlight").as<Highlight>();
}

void HighlightHitResult::highlight(const Highlight& value) {
    emlite::Val::set("highlight", value);
}

jsbind::TypedArray<AbstractRange> HighlightHitResult::ranges() const {
    return emlite::Val::get("ranges").as<jsbind::TypedArray<AbstractRange>>();
}

void HighlightHitResult::ranges(const jsbind::TypedArray<AbstractRange>& value) {
    emlite::Val::set("ranges", value);
}

HighlightsFromPointOptions::HighlightsFromPointOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HighlightsFromPointOptions HighlightsFromPointOptions::take_ownership(Handle h) noexcept {
        return HighlightsFromPointOptions(h);
    }
HighlightsFromPointOptions::HighlightsFromPointOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
HighlightsFromPointOptions::HighlightsFromPointOptions() noexcept: emlite::Val(emlite::Val::object()) {}
HighlightsFromPointOptions HighlightsFromPointOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ShadowRoot> HighlightsFromPointOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::TypedArray<ShadowRoot>>();
}

void HighlightsFromPointOptions::shadowRoots(const jsbind::TypedArray<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}

HighlightRegistry HighlightRegistry::take_ownership(Handle h) noexcept {
        return HighlightRegistry(h);
    }
HighlightRegistry HighlightRegistry::clone() const noexcept { return *this; }
emlite::Val HighlightRegistry::instance() noexcept { return emlite::Val::global("HighlightRegistry"); }
HighlightRegistry::HighlightRegistry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HighlightRegistry::HighlightRegistry(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::TypedArray<HighlightHitResult> HighlightRegistry::highlightsFromPoint(float x, float y) {
    return emlite::Val::call("highlightsFromPoint", x, y).as<jsbind::TypedArray<HighlightHitResult>>();
}

jsbind::TypedArray<HighlightHitResult> HighlightRegistry::highlightsFromPoint(float x, float y, const HighlightsFromPointOptions& options) {
    return emlite::Val::call("highlightsFromPoint", x, y, options).as<jsbind::TypedArray<HighlightHitResult>>();
}

