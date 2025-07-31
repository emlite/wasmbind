#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AnimationEffect;


/// The AnimationNodeList class.
/// [`AnimationNodeList`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationNodeList)
class AnimationNodeList : public emlite::Val {
    explicit AnimationNodeList(Handle h) noexcept;

public:
    explicit AnimationNodeList(const emlite::Val &val) noexcept;
    static AnimationNodeList take_ownership(Handle h) noexcept;

    [[nodiscard]] AnimationNodeList clone() const noexcept;
    /// Getter of the `length` attribute.
    /// [`AnimationNodeList.length`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationNodeList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`AnimationNodeList.item`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationNodeList/item)
    AnimationEffect item(unsigned long index);
};

