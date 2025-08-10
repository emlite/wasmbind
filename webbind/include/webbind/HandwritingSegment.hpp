#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingDrawingSegment.hpp"

namespace webbind {

/// Dictionary type HandwritingSegment
class HandwritingSegment : public emlite::Val {
  explicit HandwritingSegment(Handle h) noexcept;
public:
    static HandwritingSegment take_ownership(Handle h) noexcept;
    explicit HandwritingSegment(const emlite::Val &val) noexcept;
    HandwritingSegment() noexcept;
    [[nodiscard]] HandwritingSegment clone() const noexcept;
    /// Getter of the `grapheme` attribute.
    [[nodiscard]] jsbind::String grapheme() const;
    /// Setter of the `grapheme` attribute.
    void grapheme(const jsbind::String& value);
    /// Getter of the `beginIndex` attribute.
    [[nodiscard]] unsigned long beginIndex() const;
    /// Setter of the `beginIndex` attribute.
    void beginIndex(unsigned long value);
    /// Getter of the `endIndex` attribute.
    [[nodiscard]] unsigned long endIndex() const;
    /// Setter of the `endIndex` attribute.
    void endIndex(unsigned long value);
    /// Getter of the `drawingSegments` attribute.
    [[nodiscard]] jsbind::TypedArray<HandwritingDrawingSegment> drawingSegments() const;
    /// Setter of the `drawingSegments` attribute.
    void drawingSegments(const jsbind::TypedArray<HandwritingDrawingSegment>& value);
};

} // namespace webbind