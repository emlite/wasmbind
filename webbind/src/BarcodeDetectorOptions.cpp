#include <webbind/BarcodeDetectorOptions.hpp>

namespace webbind {

BarcodeDetectorOptions::BarcodeDetectorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BarcodeDetectorOptions BarcodeDetectorOptions::take_ownership(Handle h) noexcept {
    return BarcodeDetectorOptions(h);
}

BarcodeDetectorOptions::BarcodeDetectorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

BarcodeDetectorOptions::BarcodeDetectorOptions() noexcept: emlite::Val(emlite::Val::object()) {}

BarcodeDetectorOptions BarcodeDetectorOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<BarcodeFormat> BarcodeDetectorOptions::formats() const {
    return emlite::Val::get("formats").as<jsbind::TypedArray<BarcodeFormat>>();
}

void BarcodeDetectorOptions::formats(const jsbind::TypedArray<BarcodeFormat>& value) {
    emlite::Val::set("formats", value);
}


} // namespace webbind