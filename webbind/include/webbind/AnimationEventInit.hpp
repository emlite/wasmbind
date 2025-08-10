#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type AnimationEventInit
class AnimationEventInit : public EventInit {
  explicit AnimationEventInit(Handle h) noexcept;
public:
    static AnimationEventInit take_ownership(Handle h) noexcept;
    explicit AnimationEventInit(const emlite::Val &val) noexcept;
    AnimationEventInit() noexcept;
    [[nodiscard]] AnimationEventInit clone() const noexcept;
    /// Getter of the `animationName` attribute.
    [[nodiscard]] jsbind::String animationName() const;
    /// Setter of the `animationName` attribute.
    void animationName(const jsbind::String& value);
    /// Getter of the `elapsedTime` attribute.
    [[nodiscard]] double elapsedTime() const;
    /// Setter of the `elapsedTime` attribute.
    void elapsedTime(double value);
    /// Getter of the `pseudoElement` attribute.
    [[nodiscard]] jsbind::String pseudoElement() const;
    /// Setter of the `pseudoElement` attribute.
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind