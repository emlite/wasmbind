#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AnimationEffect.hpp"
#include "enums.hpp"

class Element;


class KeyframeEffect : public AnimationEffect {
    explicit KeyframeEffect(Handle h) noexcept;

public:
    explicit KeyframeEffect(const emlite::Val &val) noexcept;
    static KeyframeEffect take_ownership(Handle h) noexcept;

    KeyframeEffect clone() const noexcept;
    KeyframeEffect(const KeyframeEffect& source);
    Element target() const;
    void target(const Element& value);
    jsbind::CSSOMString pseudoElement() const;
    void pseudoElement(const jsbind::CSSOMString& value);
    CompositeOperation composite() const;
    void composite(const CompositeOperation& value);
    jsbind::Sequence<jsbind::Object> getKeyframes();
    jsbind::Undefined setKeyframes(const jsbind::Object& keyframes);
    IterationCompositeOperation iterationComposite() const;
    void iterationComposite(const IterationCompositeOperation& value);
};

