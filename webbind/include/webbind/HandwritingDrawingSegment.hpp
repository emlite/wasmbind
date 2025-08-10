#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingDrawingSegment
class HandwritingDrawingSegment : public emlite::Val {
  explicit HandwritingDrawingSegment(Handle h) noexcept;
public:
    static HandwritingDrawingSegment take_ownership(Handle h) noexcept;
    explicit HandwritingDrawingSegment(const emlite::Val &val) noexcept;
    HandwritingDrawingSegment() noexcept;
    [[nodiscard]] HandwritingDrawingSegment clone() const noexcept;
    /// Getter of the `strokeIndex` attribute.
    [[nodiscard]] unsigned long strokeIndex() const;
    /// Setter of the `strokeIndex` attribute.
    void strokeIndex(unsigned long value);
    /// Getter of the `beginPointIndex` attribute.
    [[nodiscard]] unsigned long beginPointIndex() const;
    /// Setter of the `beginPointIndex` attribute.
    void beginPointIndex(unsigned long value);
    /// Getter of the `endPointIndex` attribute.
    [[nodiscard]] unsigned long endPointIndex() const;
    /// Setter of the `endPointIndex` attribute.
    void endPointIndex(unsigned long value);
};

} // namespace webbind