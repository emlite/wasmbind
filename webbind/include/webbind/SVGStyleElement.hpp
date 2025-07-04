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
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString media() const;
    void media(const jsbind::DOMString& value);
    jsbind::DOMString title() const;
    void title(const jsbind::DOMString& value);
    CSSStyleSheet sheet() const;
};

