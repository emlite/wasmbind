#include <webbind/TextDetector.hpp>
#include <webbind/DOMRectReadOnly.hpp>


DetectedText::DetectedText(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DetectedText DetectedText::take_ownership(Handle h) noexcept {
        return DetectedText(h);
    }
DetectedText::DetectedText(const emlite::Val &val) noexcept: emlite::Val(val) {}
DetectedText::DetectedText() noexcept: emlite::Val(emlite::Val::object()) {}
DetectedText DetectedText::clone() const noexcept { return *this; }

DOMRectReadOnly DetectedText::boundingBox() const {
    return emlite::Val::get("boundingBox").as<DOMRectReadOnly>();
}

void DetectedText::boundingBox(const DOMRectReadOnly& value) {
    emlite::Val::set("boundingBox", value);
}

jsbind::String DetectedText::rawValue() const {
    return emlite::Val::get("rawValue").as<jsbind::String>();
}

void DetectedText::rawValue(const jsbind::String& value) {
    emlite::Val::set("rawValue", value);
}

jsbind::TypedArray<jsbind::Any> DetectedText::cornerPoints() const {
    return emlite::Val::get("cornerPoints").as<jsbind::TypedArray<jsbind::Any>>();
}

void DetectedText::cornerPoints(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("cornerPoints", value);
}

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

