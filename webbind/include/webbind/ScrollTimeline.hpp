#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AnimationTimeline.hpp"
#include "enums.hpp"

class Element;


/// The ScrollTimeline class.
/// [`ScrollTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline)
class ScrollTimeline : public AnimationTimeline {
    explicit ScrollTimeline(Handle h) noexcept;

public:
    explicit ScrollTimeline(const emlite::Val &val) noexcept;
    static ScrollTimeline take_ownership(Handle h) noexcept;

    [[nodiscard]] ScrollTimeline clone() const noexcept;
    /// The `new ScrollTimeline(..)` constructor, creating a new ScrollTimeline instance
    ScrollTimeline();
    /// The `new ScrollTimeline(..)` constructor, creating a new ScrollTimeline instance
    ScrollTimeline(const jsbind::Any& options);
    /// Getter of the `source` attribute.
    /// [`ScrollTimeline.source`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline/source)
    [[nodiscard]] Element source() const;
    /// Getter of the `axis` attribute.
    /// [`ScrollTimeline.axis`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollTimeline/axis)
    [[nodiscard]] ScrollAxis axis() const;
};

