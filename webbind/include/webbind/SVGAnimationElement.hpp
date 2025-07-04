#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGStringList;


class SVGAnimationElement : public SVGElement {
    explicit SVGAnimationElement(Handle h) noexcept;

public:
    explicit SVGAnimationElement(const emlite::Val &val) noexcept;
    static SVGAnimationElement take_ownership(Handle h) noexcept;

    SVGAnimationElement clone() const noexcept;
    SVGElement targetElement() const;
    jsbind::Any onbegin() const;
    void onbegin(const jsbind::Any& value);
    jsbind::Any onend() const;
    void onend(const jsbind::Any& value);
    jsbind::Any onrepeat() const;
    void onrepeat(const jsbind::Any& value);
    float getStartTime();
    float getCurrentTime();
    float getSimpleDuration();
    jsbind::Undefined beginElement();
    jsbind::Undefined beginElementAt(float offset);
    jsbind::Undefined endElement();
    jsbind::Undefined endElementAt(float offset);
    SVGStringList requiredExtensions() const;
    SVGStringList systemLanguage() const;
};

