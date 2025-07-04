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

jsbind::DOMString DetectedText::rawValue() const {
    return emlite::Val::get("rawValue").as<jsbind::DOMString>();
}

void DetectedText::rawValue(const jsbind::DOMString& value) {
    emlite::Val::set("rawValue", value);
}

jsbind::Sequence<jsbind::Any> DetectedText::cornerPoints() const {
    return emlite::Val::get("cornerPoints").as<jsbind::Sequence<jsbind::Any>>();
}

void DetectedText::cornerPoints(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("cornerPoints", value);
}

TextDetector TextDetector::take_ownership(Handle h) noexcept {
        return TextDetector(h);
    }
TextDetector TextDetector::clone() const noexcept { return *this; }
TextDetector::TextDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDetector::TextDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}


TextDetector::TextDetector(): emlite::Val(emlite::Val::global("TextDetector").new_()) {}

jsbind::Promise TextDetector::detect(const jsbind::Any& image) {
    return emlite::Val::call("detect", image).as<jsbind::Promise>();
}

