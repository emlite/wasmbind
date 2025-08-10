#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AnimationEffect.hpp"
#include "enums.hpp"

namespace webbind {

class KeyframeEffect;
class Element;

/// Interface KeyframeEffect
/// [`KeyframeEffect`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect)
class KeyframeEffect : public AnimationEffect {
    explicit KeyframeEffect(Handle h) noexcept;
public:
    explicit KeyframeEffect(const emlite::Val &val) noexcept;
    static KeyframeEffect take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyframeEffect clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new KeyframeEffect(..)` constructor, creating a new KeyframeEffect instance
    KeyframeEffect(const KeyframeEffect& source);
    /// [`KeyframeEffect.target`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/target)
    /// [`KeyframeEffect.target`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/target)
    [[nodiscard]] Element target() const;
    /// Setter of the `target` attribute.
    /// [`KeyframeEffect.target`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/target)
    void target(const Element& value);
    /// [`KeyframeEffect.pseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/pseudoElement)
    /// [`KeyframeEffect.pseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/pseudoElement)
    [[nodiscard]] jsbind::String pseudoElement() const;
    /// Setter of the `pseudoElement` attribute.
    /// [`KeyframeEffect.pseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/pseudoElement)
    void pseudoElement(const jsbind::String& value);
    /// [`KeyframeEffect.composite`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/composite)
    /// [`KeyframeEffect.composite`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/composite)
    [[nodiscard]] CompositeOperation composite() const;
    /// Setter of the `composite` attribute.
    /// [`KeyframeEffect.composite`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/composite)
    void composite(const CompositeOperation& value);
    /// The getKeyframes method.
    /// [`KeyframeEffect.getKeyframes`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/getKeyframes)
    jsbind::TypedArray<jsbind::Object> getKeyframes();
    /// The setKeyframes method.
    /// [`KeyframeEffect.setKeyframes`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/setKeyframes)
    jsbind::Undefined setKeyframes(const jsbind::Object& keyframes);
    /// [`KeyframeEffect.iterationComposite`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/iterationComposite)
    /// [`KeyframeEffect.iterationComposite`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/iterationComposite)
    [[nodiscard]] IterationCompositeOperation iterationComposite() const;
    /// Setter of the `iterationComposite` attribute.
    /// [`KeyframeEffect.iterationComposite`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect/iterationComposite)
    void iterationComposite(const IterationCompositeOperation& value);
};

} // namespace webbind