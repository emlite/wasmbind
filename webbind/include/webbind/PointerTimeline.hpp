#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AnimationTimeline.hpp"
#include "PointerTimelineOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Element;

/// Interface PointerTimeline
/// [`PointerTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/PointerTimeline)
class PointerTimeline : public AnimationTimeline {
    explicit PointerTimeline(Handle h) noexcept;
public:
    explicit PointerTimeline(const emlite::Val &val) noexcept;
    static PointerTimeline take_ownership(Handle h) noexcept;
    [[nodiscard]] PointerTimeline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PointerTimeline(..)` constructor, creating a new PointerTimeline instance
    PointerTimeline();
    /// The `new PointerTimeline(..)` constructor, creating a new PointerTimeline instance
    PointerTimeline(const PointerTimelineOptions& options);
    /// Getter of the `source` attribute.
    /// [`PointerTimeline.source`](https://developer.mozilla.org/en-US/docs/Web/API/PointerTimeline/source)
    [[nodiscard]] Element source() const;
    /// Getter of the `axis` attribute.
    /// [`PointerTimeline.axis`](https://developer.mozilla.org/en-US/docs/Web/API/PointerTimeline/axis)
    [[nodiscard]] PointerAxis axis() const;
};

} // namespace webbind