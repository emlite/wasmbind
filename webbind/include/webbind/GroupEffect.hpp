#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AnimationNodeList;
class AnimationEffect;
class GroupEffect;


/// The GroupEffect class.
/// [`GroupEffect`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect)
class GroupEffect : public emlite::Val {
    explicit GroupEffect(Handle h) noexcept;

public:
    explicit GroupEffect(const emlite::Val &val) noexcept;
    static GroupEffect take_ownership(Handle h) noexcept;

    [[nodiscard]] GroupEffect clone() const noexcept;
    /// The `new GroupEffect(..)` constructor, creating a new GroupEffect instance
    GroupEffect(const jsbind::TypedArray<AnimationEffect>& children);
    /// The `new GroupEffect(..)` constructor, creating a new GroupEffect instance
    GroupEffect(const jsbind::TypedArray<AnimationEffect>& children, const jsbind::Any& timing);
    /// Getter of the `children` attribute.
    /// [`GroupEffect.children`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect/children)
    [[nodiscard]] AnimationNodeList children() const;
    /// Getter of the `firstChild` attribute.
    /// [`GroupEffect.firstChild`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect/firstChild)
    [[nodiscard]] AnimationEffect firstChild() const;
    /// Getter of the `lastChild` attribute.
    /// [`GroupEffect.lastChild`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect/lastChild)
    [[nodiscard]] AnimationEffect lastChild() const;
    /// The clone method.
    /// [`GroupEffect.clone`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect/clone)
    GroupEffect clone();
    /// The prepend method.
    /// [`GroupEffect.prepend`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect/prepend)
    jsbind::Undefined prepend(const AnimationEffect& effects);
    /// The append method.
    /// [`GroupEffect.append`](https://developer.mozilla.org/en-US/docs/Web/API/GroupEffect/append)
    jsbind::Undefined append(const AnimationEffect& effects);
};

