#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type AnimationPlaybackEventInit
class AnimationPlaybackEventInit : public EventInit {
  explicit AnimationPlaybackEventInit(Handle h) noexcept;
public:
    static AnimationPlaybackEventInit take_ownership(Handle h) noexcept;
    explicit AnimationPlaybackEventInit(const emlite::Val &val) noexcept;
    AnimationPlaybackEventInit() noexcept;
    [[nodiscard]] AnimationPlaybackEventInit clone() const noexcept;
    /// Getter of the `currentTime` attribute.
    [[nodiscard]] jsbind::Any currentTime() const;
    /// Setter of the `currentTime` attribute.
    void currentTime(const jsbind::Any& value);
    /// Getter of the `timelineTime` attribute.
    [[nodiscard]] jsbind::Any timelineTime() const;
    /// Setter of the `timelineTime` attribute.
    void timelineTime(const jsbind::Any& value);
};

} // namespace webbind