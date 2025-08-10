#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type AnimationEventInit
/// [`AnimationEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEventInit)
class AnimationEventInit : public EventInit {
  explicit AnimationEventInit(Handle h) noexcept;
public:
    static AnimationEventInit take_ownership(Handle h) noexcept;
    explicit AnimationEventInit(const emlite::Val &val) noexcept;
    AnimationEventInit() noexcept;
    [[nodiscard]] AnimationEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String animationName() const;
    void animationName(const jsbind::String& value);
    [[nodiscard]] double elapsedTime() const;
    void elapsedTime(double value);
    [[nodiscard]] jsbind::String pseudoElement() const;
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind