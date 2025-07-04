#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;
class CSSStyleSheet;


class HTMLLinkElement : public HTMLElement {
    explicit HTMLLinkElement(Handle h) noexcept;

public:
    explicit HTMLLinkElement(const emlite::Val &val) noexcept;
    static HTMLLinkElement take_ownership(Handle h) noexcept;

    HTMLLinkElement clone() const noexcept;
    HTMLLinkElement();
    jsbind::USVString href() const;
    void href(const jsbind::USVString& value);
    jsbind::DOMString crossOrigin() const;
    void crossOrigin(const jsbind::DOMString& value);
    jsbind::DOMString rel() const;
    void rel(const jsbind::DOMString& value);
    jsbind::DOMString as() const;
    void as(const jsbind::DOMString& value);
    DOMTokenList relList() const;
    jsbind::DOMString media() const;
    void media(const jsbind::DOMString& value);
    jsbind::DOMString integrity() const;
    void integrity(const jsbind::DOMString& value);
    jsbind::DOMString hreflang() const;
    void hreflang(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    DOMTokenList sizes() const;
    jsbind::USVString imageSrcset() const;
    void imageSrcset(const jsbind::USVString& value);
    jsbind::DOMString imageSizes() const;
    void imageSizes(const jsbind::DOMString& value);
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    DOMTokenList blocking() const;
    bool disabled() const;
    void disabled(bool value);
    jsbind::DOMString fetchPriority() const;
    void fetchPriority(const jsbind::DOMString& value);
    jsbind::DOMString charset() const;
    void charset(const jsbind::DOMString& value);
    jsbind::DOMString rev() const;
    void rev(const jsbind::DOMString& value);
    jsbind::DOMString target() const;
    void target(const jsbind::DOMString& value);
    CSSStyleSheet sheet() const;
};

