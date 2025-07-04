#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLMetaElement : public HTMLElement {
    explicit HTMLMetaElement(Handle h) noexcept;

public:
    explicit HTMLMetaElement(const emlite::Val &val) noexcept;
    static HTMLMetaElement take_ownership(Handle h) noexcept;

    HTMLMetaElement clone() const noexcept;
    HTMLMetaElement();
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString httpEquiv() const;
    void httpEquiv(const jsbind::DOMString& value);
    jsbind::DOMString content() const;
    void content(const jsbind::DOMString& value);
    jsbind::DOMString media() const;
    void media(const jsbind::DOMString& value);
    jsbind::DOMString scheme() const;
    void scheme(const jsbind::DOMString& value);
};

