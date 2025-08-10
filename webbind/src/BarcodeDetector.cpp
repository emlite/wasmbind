#include <webbind/BarcodeDetector.hpp>
#include <webbind/BarcodeDetectorOptions.hpp>
#include <webbind/DetectedBarcode.hpp>

namespace webbind {

BarcodeDetector BarcodeDetector::take_ownership(Handle h) noexcept {
        return BarcodeDetector(h);
    }
BarcodeDetector BarcodeDetector::clone() const noexcept { return *this; }
emlite::Val BarcodeDetector::instance() noexcept { return emlite::Val::global("BarcodeDetector"); }
BarcodeDetector::BarcodeDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BarcodeDetector::BarcodeDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}

BarcodeDetector::BarcodeDetector() : emlite::Val(emlite::Val::global("BarcodeDetector").new_()) {}

BarcodeDetector::BarcodeDetector(const BarcodeDetectorOptions& barcodeDetectorOptions) : emlite::Val(emlite::Val::global("BarcodeDetector").new_(barcodeDetectorOptions)) {}

jsbind::Promise<jsbind::TypedArray<BarcodeFormat>> BarcodeDetector::getSupportedFormats() {
    return emlite::Val::global("barcodedetector").call("getSupportedFormats").as<jsbind::Promise<jsbind::TypedArray<BarcodeFormat>>>();
}

jsbind::Promise<jsbind::TypedArray<DetectedBarcode>> BarcodeDetector::detect(const jsbind::Any& image) {
    return emlite::Val::call("detect", image).as<jsbind::Promise<jsbind::TypedArray<DetectedBarcode>>>();
}


} // namespace webbind