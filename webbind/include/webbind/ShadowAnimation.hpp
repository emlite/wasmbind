#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


/// The ShadowAnimation class.
/// [`ShadowAnimation`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowAnimation)
class ShadowAnimation : public Animation {
    explicit ShadowAnimation(Handle h) noexcept;

public:
    explicit ShadowAnimation(const emlite::Val &val) noexcept;
    static ShadowAnimation take_ownership(Handle h) noexcept;

    [[nodiscard]] ShadowAnimation clone() const noexcept;
    /// The `new ShadowAnimation(..)` constructor, creating a new ShadowAnimation instance
    ShadowAnimation(const Animation& source, const jsbind::Any& newTarget);
    /// Getter of the `sourceAnimation` attribute.
    /// [`ShadowAnimation.sourceAnimation`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowAnimation/sourceAnimation)
    [[nodiscard]] Animation sourceAnimation() const;
};

