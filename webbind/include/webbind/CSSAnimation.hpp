#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


/// The CSSAnimation class.
/// [`CSSAnimation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSAnimation)
class CSSAnimation : public Animation {
    explicit CSSAnimation(Handle h) noexcept;

public:
    explicit CSSAnimation(const emlite::Val &val) noexcept;
    static CSSAnimation take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSAnimation clone() const noexcept;
    /// Getter of the `animationName` attribute.
    /// [`CSSAnimation.animationName`](https://developer.mozilla.org/en-US/docs/Web/API/CSSAnimation/animationName)
    [[nodiscard]] jsbind::String animationName() const;
};

