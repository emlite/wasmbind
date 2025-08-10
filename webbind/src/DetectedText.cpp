#include <webbind/DetectedText.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/Point2D.hpp>

namespace webbind {

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

jsbind::TypedArray<Point2D> DetectedText::cornerPoints() const {
    return emlite::Val::get("cornerPoints").as<jsbind::TypedArray<Point2D>>();
}

void DetectedText::cornerPoints(const jsbind::TypedArray<Point2D>& value) {
    emlite::Val::set("cornerPoints", value);
}


} // namespace webbind