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
    DetectedBarcode clone() const noexcept;
    DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    jsbind::DOMString rawValue() const;
    void rawValue(const jsbind::DOMString& value);
    BarcodeFormat format() const;
    void format(const BarcodeFormat& value);
    jsbind::Sequence<jsbind::Any> cornerPoints() const;
    void cornerPoints(const jsbind::Sequence<jsbind::Any>& value);
};

class BarcodeDetector : public emlite::Val {
    explicit BarcodeDetector(Handle h) noexcept;

public:
    explicit BarcodeDetector(const emlite::Val &val) noexcept;
    static BarcodeDetector take_ownership(Handle h) noexcept;

    BarcodeDetector clone() const noexcept;
    BarcodeDetector();
    BarcodeDetector(const jsbind::Any& barcodeDetectorOptions);
    static jsbind::Promise getSupportedFormats();
    jsbind::Promise detect(const jsbind::Any& image);
};

