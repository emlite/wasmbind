#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HandwritingPrediction.hpp"

namespace webbind {

class HandwritingStroke;

/// Interface HandwritingDrawing
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

} // namespace webbind