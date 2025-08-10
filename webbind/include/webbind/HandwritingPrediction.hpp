#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingSegment.hpp"

namespace webbind {

/// Dictionary type HandwritingPrediction
/// [`HandwritingPrediction`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingPrediction)
class HandwritingPrediction : public emlite::Val {
  explicit HandwritingPrediction(Handle h) noexcept;
public:
    static HandwritingPrediction take_ownership(Handle h) noexcept;
    explicit HandwritingPrediction(const emlite::Val &val) noexcept;
    HandwritingPrediction() noexcept;
    [[nodiscard]] HandwritingPrediction clone() const noexcept;
    [[nodiscard]] jsbind::String text() const;
    void text(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<HandwritingSegment> segmentationResult() const;
    void segmentationResult(const jsbind::TypedArray<HandwritingSegment>& value);
};

} // namespace webbind