#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Point2D.hpp"

namespace webbind {

class DOMRectReadOnly;

/// Dictionary type DetectedBarcode
class DetectedBarcode : public emlite::Val {
  explicit DetectedBarcode(Handle h) noexcept;
public:
    static DetectedBarcode take_ownership(Handle h) noexcept;
    explicit DetectedBarcode(const emlite::Val &val) noexcept;
    DetectedBarcode() noexcept;
    [[nodiscard]] DetectedBarcode clone() const noexcept;
    /// Getter of the `boundingBox` attribute.
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    /// Setter of the `boundingBox` attribute.
    void boundingBox(const DOMRectReadOnly& value);
    /// Getter of the `rawValue` attribute.
    [[nodiscard]] jsbind::String rawValue() const;
    /// Setter of the `rawValue` attribute.
    void rawValue(const jsbind::String& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] BarcodeFormat format() const;
    /// Setter of the `format` attribute.
    void format(const BarcodeFormat& value);
    /// Getter of the `cornerPoints` attribute.
    [[nodiscard]] jsbind::TypedArray<Point2D> cornerPoints() const;
    /// Setter of the `cornerPoints` attribute.
    void cornerPoints(const jsbind::TypedArray<Point2D>& value);
};

} // namespace webbind