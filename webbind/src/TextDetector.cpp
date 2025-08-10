#include "webbind/TextDetector.hpp"
#include "webbind/DetectedText.hpp"

namespace webbind {

TextDetector TextDetector::take_ownership(Handle h) noexcept {
        return TextDetector(h);
    }
TextDetector TextDetector::clone() const noexcept { return *this; }
emlite::Val TextDetector::instance() noexcept { return emlite::Val::global("TextDetector"); }
TextDetector::TextDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDetector::TextDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}

TextDetector::TextDetector() : emlite::Val(emlite::Val::global("TextDetector").new_()) {}

jsbind::Promise<jsbind::TypedArray<DetectedText>> TextDetector::detect(const jsbind::Any& image) {
    return emlite::Val::call("detect", image).as<jsbind::Promise<jsbind::TypedArray<DetectedText>>>();
}


} // namespace webbind