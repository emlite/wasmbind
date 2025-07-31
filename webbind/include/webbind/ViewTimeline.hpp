#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ScrollTimeline.hpp"
#include "enums.hpp"

class Element;
class CSSNumericValue;


/// The ViewTimeline class.
/// [`ViewTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline)
class ViewTimeline : public ScrollTimeline {
    explicit ViewTimeline(Handle h) noexcept;

public:
    explicit ViewTimeline(const emlite::Val &val) noexcept;
    static ViewTimeline take_ownership(Handle h) noexcept;

    [[nodiscard]] ViewTimeline clone() const noexcept;
    /// The `new ViewTimeline(..)` constructor, creating a new ViewTimeline instance
    ViewTimeline();
    /// The `new ViewTimeline(..)` constructor, creating a new ViewTimeline instance
    ViewTimeline(const jsbind::Any& options);
    /// Getter of the `subject` attribute.
    /// [`ViewTimeline.subject`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/subject)
    [[nodiscard]] Element subject() const;
    /// Getter of the `startOffset` attribute.
    /// [`ViewTimeline.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/startOffset)
    [[nodiscard]] CSSNumericValue startOffset() const;
    /// Getter of the `endOffset` attribute.
    /// [`ViewTimeline.endOffset`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTimeline/endOffset)
    [[nodiscard]] CSSNumericValue endOffset() const;
};

