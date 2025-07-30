#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class CSSStyleSheet;


class SVGStyleElement : public SVGElement {
    explicit SVGStyleElement(Handle h) noexcept;

public:
    explicit SVGStyleElement(const emlite::Val &val) noexcept;
    static SVGStyleElement take_ownership(Handle h) noexcept;

    SVGStyleElement clone() const noexcept;
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String media() const;
    void media(const jsbind::String& value);
    jsbind::String title() const;
    void title(const jsbind::String& value);
    CSSStyleSheet sheet() const;
};

