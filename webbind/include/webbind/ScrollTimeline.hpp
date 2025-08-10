#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AnimationTimeline.hpp"
#include "ScrollTimelineOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Element;

/// Interface ScrollTimeline
/// [`ScrollTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline)
class ScrollTimeline : public AnimationTimeline {
    explicit ScrollTimeline(Handle h) noexcept;
public:
    explicit ScrollTimeline(const emlite::Val &val) noexcept;
    static ScrollTimeline take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollTimeline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ScrollTimeline(..)` constructor, creating a new ScrollTimeline instance
    ScrollTimeline();
    /// The `new ScrollTimeline(..)` constructor, creating a new ScrollTimeline instance
    ScrollTimeline(const ScrollTimelineOptions& options);
    /// [`ScrollTimeline.source`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline/source)
    /// [`ScrollTimeline.source`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline/source)
    [[nodiscard]] Element source() const;
    /// [`ScrollTimeline.axis`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline/axis)
    /// [`ScrollTimeline.axis`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline/axis)
    [[nodiscard]] ScrollAxis axis() const;
};

} // namespace webbind