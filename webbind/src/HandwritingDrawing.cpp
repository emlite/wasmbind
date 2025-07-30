#include <webbind/HandwritingDrawing.hpp>
#include <webbind/HandwritingStroke.hpp>


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

jsbind::TypedArray<jsbind::Any> HandwritingPrediction::segmentationResult() const {
    return emlite::Val::get("segmentationResult").as<jsbind::TypedArray<jsbind::Any>>();
}

void HandwritingPrediction::segmentationResult(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("segmentationResult", value);
}

HandwritingDrawing HandwritingDrawing::take_ownership(Handle h) noexcept {
        return HandwritingDrawing(h);
    }
HandwritingDrawing HandwritingDrawing::clone() const noexcept { return *this; }
HandwritingDrawing::HandwritingDrawing(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HandwritingDrawing::HandwritingDrawing(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined HandwritingDrawing::addStroke(const HandwritingStroke& stroke) {
    return emlite::Val::call("addStroke", stroke).as<jsbind::Undefined>();
}

jsbind::Undefined HandwritingDrawing::removeStroke(const HandwritingStroke& stroke) {
    return emlite::Val::call("removeStroke", stroke).as<jsbind::Undefined>();
}

jsbind::Undefined HandwritingDrawing::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

jsbind::TypedArray<HandwritingStroke> HandwritingDrawing::getStrokes() {
    return emlite::Val::call("getStrokes").as<jsbind::TypedArray<HandwritingStroke>>();
}

jsbind::Promise<jsbind::TypedArray<HandwritingPrediction>> HandwritingDrawing::getPrediction() {
    return emlite::Val::call("getPrediction").as<jsbind::Promise<jsbind::TypedArray<HandwritingPrediction>>>();
}

