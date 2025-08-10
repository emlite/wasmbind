#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AnimationTimeline;

/// Dictionary type AnimationTriggerOptions
class AnimationTriggerOptions : public emlite::Val {
  explicit AnimationTriggerOptions(Handle h) noexcept;
public:
    static AnimationTriggerOptions take_ownership(Handle h) noexcept;
    explicit AnimationTriggerOptions(const emlite::Val &val) noexcept;
    AnimationTriggerOptions() noexcept;
    [[nodiscard]] AnimationTriggerOptions clone() const noexcept;
    /// Getter of the `timeline` attribute.
    [[nodiscard]] AnimationTimeline timeline() const;
    /// Setter of the `timeline` attribute.
    void timeline(const AnimationTimeline& value);
    /// Getter of the `behavior` attribute.
    [[nodiscard]] AnimationTriggerBehavior behavior() const;
    /// Setter of the `behavior` attribute.
    void behavior(const AnimationTriggerBehavior& value);
    /// Getter of the `rangeStart` attribute.
    [[nodiscard]] jsbind::Any rangeStart() const;
    /// Setter of the `rangeStart` attribute.
    void rangeStart(const jsbind::Any& value);
    /// Getter of the `rangeEnd` attribute.
    [[nodiscard]] jsbind::Any rangeEnd() const;
    /// Setter of the `rangeEnd` attribute.
    void rangeEnd(const jsbind::Any& value);
    /// Getter of the `exitRangeStart` attribute.
    [[nodiscard]] jsbind::Any exitRangeStart() const;
    /// Setter of the `exitRangeStart` attribute.
    void exitRangeStart(const jsbind::Any& value);
    /// Getter of the `exitRangeEnd` attribute.
    [[nodiscard]] jsbind::Any exitRangeEnd() const;
    /// Setter of the `exitRangeEnd` attribute.
    void exitRangeEnd(const jsbind::Any& value);
};

} // namespace webbind