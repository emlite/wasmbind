#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HandwritingSegment;

/// Dictionary type HandwritingPrediction
class HandwritingPrediction : public emlite::Val {
  explicit HandwritingPrediction(Handle h) noexcept;
public:
    static HandwritingPrediction take_ownership(Handle h) noexcept;
    explicit HandwritingPrediction(const emlite::Val &val) noexcept;
    HandwritingPrediction() noexcept;
    [[nodiscard]] HandwritingPrediction clone() const noexcept;
    /// Getter of the `text` attribute.
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    void text(const jsbind::String& value);
    /// Getter of the `segmentationResult` attribute.
    [[nodiscard]] jsbind::TypedArray<HandwritingSegment> segmentationResult() const;
    /// Setter of the `segmentationResult` attribute.
    void segmentationResult(const jsbind::TypedArray<HandwritingSegment>& value);
};

} // namespace webbind