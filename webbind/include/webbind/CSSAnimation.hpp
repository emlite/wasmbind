#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Animation.hpp"

namespace webbind {

/// Interface CSSAnimation
/// [`CSSAnimation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSAnimation)
class CSSAnimation : public Animation {
    explicit CSSAnimation(Handle h) noexcept;
public:
    explicit CSSAnimation(const emlite::Val &val) noexcept;
    static CSSAnimation take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSAnimation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `animationName` attribute.
    /// [`CSSAnimation.animationName`](https://developer.mozilla.org/en-US/docs/Web/API/CSSAnimation/animationName)
    [[nodiscard]] jsbind::String animationName() const;
};

} // namespace webbind