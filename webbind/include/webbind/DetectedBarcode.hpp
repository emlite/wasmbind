#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Point2D.hpp"

namespace webbind {

class DOMRectReadOnly;

/// Dictionary type DetectedBarcode
/// [`DetectedBarcode`](https://developer.mozilla.org/en-US/docs/Web/API/DetectedBarcode)
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
    [[nodiscard]] jsbind::TypedArray<Point2D> cornerPoints() const;
    void cornerPoints(const jsbind::TypedArray<Point2D>& value);
};

} // namespace webbind