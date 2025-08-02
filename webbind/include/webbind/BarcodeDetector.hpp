#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DetectedBarcode;
class DOMRectReadOnly;


class DetectedBarcode : public emlite::Val {
  explicit DetectedBarcode(Handle h) noexcept;
public:
    static DetectedBarcode take_ownership(Handle h) noexcept;
    explicit DetectedBarcode(const emlite::Val &val) noexcept;
    DetectedBarcode() noexcept;
    [[nodiscard]] DetectedBarcode clone() const noexcept;
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    [[nodiscard]] jsbind::String rawValue() const;
    void rawValue(const jsbind::String& value);
    [[nodiscard]] BarcodeFormat format() const;
    void format(const BarcodeFormat& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> cornerPoints() const;
    void cornerPoints(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The BarcodeDetector class.
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
    BarcodeDetector(const jsbind::Any& barcodeDetectorOptions);
    /// The getSupportedFormats method.
    /// [`BarcodeDetector.getSupportedFormats`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetector/getSupportedFormats)
    static jsbind::Promise<jsbind::TypedArray<BarcodeFormat>> getSupportedFormats();
    /// The detect method.
    /// [`BarcodeDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetector/detect)
    jsbind::Promise<jsbind::TypedArray<DetectedBarcode>> detect(const jsbind::Any& image);
};

