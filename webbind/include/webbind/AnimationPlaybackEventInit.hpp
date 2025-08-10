#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type AnimationPlaybackEventInit
/// [`AnimationPlaybackEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEventInit)
class AnimationPlaybackEventInit : public EventInit {
  explicit AnimationPlaybackEventInit(Handle h) noexcept;
public:
    static AnimationPlaybackEventInit take_ownership(Handle h) noexcept;
    explicit AnimationPlaybackEventInit(const emlite::Val &val) noexcept;
    AnimationPlaybackEventInit() noexcept;
    [[nodiscard]] AnimationPlaybackEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any currentTime() const;
    void currentTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any timelineTime() const;
    void timelineTime(const jsbind::Any& value);
};

} // namespace webbind