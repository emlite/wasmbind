#include "webbind/HighlightHitResult.hpp"
#include "webbind/Highlight.hpp"
#include "webbind/AbstractRange.hpp"

using emlite::Val;
namespace webbind {

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


} // namespace webbind