#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Point2D.hpp"

namespace webbind {

class DOMRectReadOnly;

/// Dictionary type DetectedText
/// [`DetectedText`](https://developer.mozilla.org/en-US/docs/Web/API/DetectedText)
class DetectedText : public emlite::Val {
  explicit DetectedText(Handle h) noexcept;
public:
    static DetectedText take_ownership(Handle h) noexcept;
    explicit DetectedText(const emlite::Val &val) noexcept;
    DetectedText() noexcept;
    [[nodiscard]] DetectedText clone() const noexcept;
    [[nodiscard]] DOMRectReadOnly boundingBox() const;
    void boundingBox(const DOMRectReadOnly& value);
    [[nodiscard]] jsbind::String rawValue() const;
    void rawValue(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<Point2D> cornerPoints() const;
    void cornerPoints(const jsbind::TypedArray<Point2D>& value);
};

} // namespace webbind