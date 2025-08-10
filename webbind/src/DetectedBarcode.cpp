#include <webbind/DetectedBarcode.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/Point2D.hpp>

namespace webbind {

DetectedBarcode::DetectedBarcode(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DetectedBarcode DetectedBarcode::take_ownership(Handle h) noexcept {
    return DetectedBarcode(h);
}

DetectedBarcode::DetectedBarcode(const emlite::Val &val) noexcept: emlite::Val(val) {}

DetectedBarcode::DetectedBarcode() noexcept: emlite::Val(emlite::Val::object()) {}

DetectedBarcode DetectedBarcode::clone() const noexcept { return *this; }

DOMRectReadOnly DetectedBarcode::boundingBox() const {
    return emlite::Val::get("boundingBox").as<DOMRectReadOnly>();
}

void DetectedBarcode::boundingBox(const DOMRectReadOnly& value) {
    emlite::Val::set("boundingBox", value);
}

jsbind::String DetectedBarcode::rawValue() const {
    return emlite::Val::get("rawValue").as<jsbind::String>();
}

void DetectedBarcode::rawValue(const jsbind::String& value) {
    emlite::Val::set("rawValue", value);
}

BarcodeFormat DetectedBarcode::format() const {
    return emlite::Val::get("format").as<BarcodeFormat>();
}

void DetectedBarcode::format(const BarcodeFormat& value) {
    emlite::Val::set("format", value);
}

jsbind::TypedArray<Point2D> DetectedBarcode::cornerPoints() const {
    return emlite::Val::get("cornerPoints").as<jsbind::TypedArray<Point2D>>();
}

void DetectedBarcode::cornerPoints(const jsbind::TypedArray<Point2D>& value) {
    emlite::Val::set("cornerPoints", value);
}


} // namespace webbind