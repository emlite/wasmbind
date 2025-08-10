#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HandwritingPoint;

/// Interface HandwritingStroke
/// [`HandwritingStroke`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingStroke)
class HandwritingStroke : public emlite::Val {
    explicit HandwritingStroke(Handle h) noexcept;
public:
    explicit HandwritingStroke(const emlite::Val &val) noexcept;
    static HandwritingStroke take_ownership(Handle h) noexcept;
    [[nodiscard]] HandwritingStroke clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HandwritingStroke(..)` constructor, creating a new HandwritingStroke instance
    HandwritingStroke();
    /// The addPoint method.
    /// [`HandwritingStroke.addPoint`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingStroke/addPoint)
    jsbind::Undefined addPoint(const HandwritingPoint& point);
    /// The getPoints method.
    /// [`HandwritingStroke.getPoints`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingStroke/getPoints)
    jsbind::TypedArray<HandwritingPoint> getPoints();
    /// The clear method.
    /// [`HandwritingStroke.clear`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingStroke/clear)
    jsbind::Undefined clear();
};

} // namespace webbind