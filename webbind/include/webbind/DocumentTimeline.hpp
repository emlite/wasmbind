#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AnimationTimeline.hpp"

namespace webbind {

class DocumentTimelineOptions;

/// Interface DocumentTimeline
/// [`DocumentTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentTimeline)
class DocumentTimeline : public AnimationTimeline {
    explicit DocumentTimeline(Handle h) noexcept;
public:
    explicit DocumentTimeline(const emlite::Val &val) noexcept;
    static DocumentTimeline take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentTimeline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DocumentTimeline(..)` constructor, creating a new DocumentTimeline instance
    DocumentTimeline();
    /// The `new DocumentTimeline(..)` constructor, creating a new DocumentTimeline instance
    DocumentTimeline(const DocumentTimelineOptions& options);
};

} // namespace webbind