#include <webbind/HandwritingDrawing.hpp>
#include <webbind/HandwritingStroke.hpp>
#include <webbind/HandwritingPrediction.hpp>

namespace webbind {

HandwritingDrawing HandwritingDrawing::take_ownership(Handle h) noexcept {
    return HandwritingDrawing(h);
}

HandwritingDrawing HandwritingDrawing::clone() const noexcept { return *this; }

emlite::Val HandwritingDrawing::instance() noexcept { return emlite::Val::global("HandwritingDrawing"); }

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


} // namespace webbind