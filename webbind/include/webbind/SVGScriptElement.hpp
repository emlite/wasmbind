#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;


class SVGScriptElement : public SVGElement {
    explicit SVGScriptElement(Handle h) noexcept;

public:
    explicit SVGScriptElement(const emlite::Val &val) noexcept;
    static SVGScriptElement take_ownership(Handle h) noexcept;

    SVGScriptElement clone() const noexcept;
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String crossOrigin() const;
    void crossOrigin(const jsbind::String& value);
    SVGAnimatedString href() const;
};

