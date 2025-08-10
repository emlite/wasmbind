#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingDrawingSegment.hpp"

namespace webbind {

/// Dictionary type HandwritingSegment
/// [`HandwritingSegment`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingSegment)
class HandwritingSegment : public emlite::Val {
  explicit HandwritingSegment(Handle h) noexcept;
public:
    static HandwritingSegment take_ownership(Handle h) noexcept;
    explicit HandwritingSegment(const emlite::Val &val) noexcept;
    HandwritingSegment() noexcept;
    [[nodiscard]] HandwritingSegment clone() const noexcept;
    [[nodiscard]] jsbind::String grapheme() const;
    void grapheme(const jsbind::String& value);
    [[nodiscard]] unsigned long beginIndex() const;
    void beginIndex(unsigned long value);
    [[nodiscard]] unsigned long endIndex() const;
    void endIndex(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<HandwritingDrawingSegment> drawingSegments() const;
    void drawingSegments(const jsbind::TypedArray<HandwritingDrawingSegment>& value);
};

} // namespace webbind