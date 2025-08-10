#include <webbind/HandwritingPrediction.hpp>
#include <webbind/HandwritingSegment.hpp>

namespace webbind {

HandwritingPrediction::HandwritingPrediction(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingPrediction HandwritingPrediction::take_ownership(Handle h) noexcept {
    return HandwritingPrediction(h);
}

HandwritingPrediction::HandwritingPrediction(const emlite::Val &val) noexcept: emlite::Val(val) {}

HandwritingPrediction::HandwritingPrediction() noexcept: emlite::Val(emlite::Val::object()) {}

HandwritingPrediction HandwritingPrediction::clone() const noexcept { return *this; }

jsbind::String HandwritingPrediction::text() const {
    return emlite::Val::get("text").as<jsbind::String>();
}

void HandwritingPrediction::text(const jsbind::String& value) {
    emlite::Val::set("text", value);
}

jsbind::TypedArray<HandwritingSegment> HandwritingPrediction::segmentationResult() const {
    return emlite::Val::get("segmentationResult").as<jsbind::TypedArray<HandwritingSegment>>();
}

void HandwritingPrediction::segmentationResult(const jsbind::TypedArray<HandwritingSegment>& value) {
    emlite::Val::set("segmentationResult", value);
}


} // namespace webbind