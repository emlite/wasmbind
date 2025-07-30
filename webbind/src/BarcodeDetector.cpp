#include <webbind/BarcodeDetector.hpp>
#include <webbind/DOMRectReadOnly.hpp>


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

jsbind::TypedArray<jsbind::Any> DetectedBarcode::cornerPoints() const {
    return emlite::Val::get("cornerPoints").as<jsbind::TypedArray<jsbind::Any>>();
}

void DetectedBarcode::cornerPoints(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("cornerPoints", value);
}

BarcodeDetector BarcodeDetector::take_ownership(Handle h) noexcept {
        return BarcodeDetector(h);
    }
BarcodeDetector BarcodeDetector::clone() const noexcept { return *this; }
BarcodeDetector::BarcodeDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BarcodeDetector::BarcodeDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}


BarcodeDetector::BarcodeDetector() : emlite::Val(emlite::Val::global("BarcodeDetector").new_()) {}

BarcodeDetector::BarcodeDetector(const jsbind::Any& barcodeDetectorOptions) : emlite::Val(emlite::Val::global("BarcodeDetector").new_(barcodeDetectorOptions)) {}

jsbind::Promise<jsbind::TypedArray<BarcodeFormat>> BarcodeDetector::getSupportedFormats() {
    return emlite::Val::global("barcodedetector").call("getSupportedFormats").as<jsbind::Promise<jsbind::TypedArray<BarcodeFormat>>>();
}

jsbind::Promise<jsbind::TypedArray<DetectedBarcode>> BarcodeDetector::detect(const jsbind::Any& image) {
    return emlite::Val::call("detect", image).as<jsbind::Promise<jsbind::TypedArray<DetectedBarcode>>>();
}

