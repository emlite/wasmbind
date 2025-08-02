#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class HandwritingStroke;
class HandwritingPrediction;


class HandwritingPrediction : public emlite::Val {
  explicit HandwritingPrediction(Handle h) noexcept;
public:
    static HandwritingPrediction take_ownership(Handle h) noexcept;
    explicit HandwritingPrediction(const emlite::Val &val) noexcept;
    HandwritingPrediction() noexcept;
    [[nodiscard]] HandwritingPrediction clone() const noexcept;
    [[nodiscard]] jsbind::String text() const;
    void text(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> segmentationResult() const;
    void segmentationResult(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The HandwritingDrawing class.
/// [`HandwritingDrawing`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing)
class HandwritingDrawing : public emlite::Val {
    explicit HandwritingDrawing(Handle h) noexcept;

public:
    explicit HandwritingDrawing(const emlite::Val &val) noexcept;
    static HandwritingDrawing take_ownership(Handle h) noexcept;

    [[nodiscard]] HandwritingDrawing clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The addStroke method.
    /// [`HandwritingDrawing.addStroke`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing/addStroke)
    jsbind::Undefined addStroke(const HandwritingStroke& stroke);
    /// The removeStroke method.
    /// [`HandwritingDrawing.removeStroke`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing/removeStroke)
    jsbind::Undefined removeStroke(const HandwritingStroke& stroke);
    /// The clear method.
    /// [`HandwritingDrawing.clear`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing/clear)
    jsbind::Undefined clear();
    /// The getStrokes method.
    /// [`HandwritingDrawing.getStrokes`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing/getStrokes)
    jsbind::TypedArray<HandwritingStroke> getStrokes();
    /// The getPrediction method.
    /// [`HandwritingDrawing.getPrediction`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing/getPrediction)
    jsbind::Promise<jsbind::TypedArray<HandwritingPrediction>> getPrediction();
};

