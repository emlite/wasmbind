#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type HandwritingDrawingSegment
/// [`HandwritingDrawingSegment`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawingSegment)
class HandwritingDrawingSegment : public emlite::Val {
  explicit HandwritingDrawingSegment(Handle h) noexcept;
public:
    static HandwritingDrawingSegment take_ownership(Handle h) noexcept;
    explicit HandwritingDrawingSegment(const emlite::Val &val) noexcept;
    HandwritingDrawingSegment() noexcept;
    [[nodiscard]] HandwritingDrawingSegment clone() const noexcept;
    [[nodiscard]] unsigned long strokeIndex() const;
    void strokeIndex(unsigned long value);
    [[nodiscard]] unsigned long beginPointIndex() const;
    void beginPointIndex(unsigned long value);
    [[nodiscard]] unsigned long endPointIndex() const;
    void endPointIndex(unsigned long value);
};

} // namespace webbind