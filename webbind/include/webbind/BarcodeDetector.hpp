#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BarcodeDetectorOptions.hpp"
#include "DetectedBarcode.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface BarcodeDetector
/// [`BarcodeDetector`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetector)
class BarcodeDetector : public emlite::Val {
    explicit BarcodeDetector(Handle h) noexcept;
public:
    explicit BarcodeDetector(const emlite::Val &val) noexcept;
    static BarcodeDetector take_ownership(Handle h) noexcept;
    [[nodiscard]] BarcodeDetector clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BarcodeDetector(..)` constructor, creating a new BarcodeDetector instance
    BarcodeDetector();
    /// The `new BarcodeDetector(..)` constructor, creating a new BarcodeDetector instance
    BarcodeDetector(const BarcodeDetectorOptions& barcodeDetectorOptions);
    /// The getSupportedFormats method.
    /// [`BarcodeDetector.getSupportedFormats`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetector/getSupportedFormats)
    static jsbind::Promise<jsbind::TypedArray<BarcodeFormat>> getSupportedFormats();
    /// The detect method.
    /// [`BarcodeDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetector/detect)
    jsbind::Promise<jsbind::TypedArray<DetectedBarcode>> detect(const jsbind::Any& image);
};

} // namespace webbind