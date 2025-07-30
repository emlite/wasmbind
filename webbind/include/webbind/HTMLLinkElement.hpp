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
    jsbind::String href() const;
    void href(const jsbind::String& value);
    jsbind::String crossOrigin() const;
    void crossOrigin(const jsbind::String& value);
    jsbind::String rel() const;
    void rel(const jsbind::String& value);
    jsbind::String as() const;
    void as(const jsbind::String& value);
    DOMTokenList relList() const;
    jsbind::String media() const;
    void media(const jsbind::String& value);
    jsbind::String integrity() const;
    void integrity(const jsbind::String& value);
    jsbind::String hreflang() const;
    void hreflang(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    DOMTokenList sizes() const;
    jsbind::String imageSrcset() const;
    void imageSrcset(const jsbind::String& value);
    jsbind::String imageSizes() const;
    void imageSizes(const jsbind::String& value);
    jsbind::String referrerPolicy() const;
    void referrerPolicy(const jsbind::String& value);
    DOMTokenList blocking() const;
    bool disabled() const;
    void disabled(bool value);
    jsbind::String fetchPriority() const;
    void fetchPriority(const jsbind::String& value);
    jsbind::String charset() const;
    void charset(const jsbind::String& value);
    jsbind::String rev() const;
    void rev(const jsbind::String& value);
    jsbind::String target() const;
    void target(const jsbind::String& value);
    CSSStyleSheet sheet() const;
};

