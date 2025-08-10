#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AnimationTimeline;

/// Dictionary type AnimationTriggerOptions
/// [`AnimationTriggerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTriggerOptions)
class AnimationTriggerOptions : public emlite::Val {
  explicit AnimationTriggerOptions(Handle h) noexcept;
public:
    static AnimationTriggerOptions take_ownership(Handle h) noexcept;
    explicit AnimationTriggerOptions(const emlite::Val &val) noexcept;
    AnimationTriggerOptions() noexcept;
    [[nodiscard]] AnimationTriggerOptions clone() const noexcept;
    [[nodiscard]] AnimationTimeline timeline() const;
    void timeline(const AnimationTimeline& value);
    [[nodiscard]] AnimationTriggerBehavior behavior() const;
    void behavior(const AnimationTriggerBehavior& value);
    [[nodiscard]] jsbind::Any rangeStart() const;
    void rangeStart(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any rangeEnd() const;
    void rangeEnd(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any exitRangeStart() const;
    void exitRangeStart(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any exitRangeEnd() const;
    void exitRangeEnd(const jsbind::Any& value);
};

} // namespace webbind