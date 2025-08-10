#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ScrollTimeline.hpp"
#include "ViewTimelineOptions.hpp"

namespace webbind {

class Element;
class CSSNumericValue;

/// Interface ViewTimeline
/// [`ViewTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline)
class ViewTimeline : public ScrollTimeline {
    explicit ViewTimeline(Handle h) noexcept;
public:
    explicit ViewTimeline(const emlite::Val &val) noexcept;
    static ViewTimeline take_ownership(Handle h) noexcept;
    [[nodiscard]] ViewTimeline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ViewTimeline(..)` constructor, creating a new ViewTimeline instance
    ViewTimeline();
    /// The `new ViewTimeline(..)` constructor, creating a new ViewTimeline instance
    ViewTimeline(const ViewTimelineOptions& options);
    /// [`ViewTimeline.subject`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/subject)
    /// [`ViewTimeline.subject`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/subject)
    [[nodiscard]] Element subject() const;
    /// [`ViewTimeline.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/startOffset)
    /// [`ViewTimeline.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/startOffset)
    [[nodiscard]] CSSNumericValue startOffset() const;
    /// [`ViewTimeline.endOffset`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/endOffset)
    /// [`ViewTimeline.endOffset`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/endOffset)
    [[nodiscard]] CSSNumericValue endOffset() const;
};

} // namespace webbind