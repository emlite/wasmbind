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
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String httpEquiv() const;
    void httpEquiv(const jsbind::String& value);
    jsbind::String content() const;
    void content(const jsbind::String& value);
    jsbind::String media() const;
    void media(const jsbind::String& value);
    jsbind::String scheme() const;
    void scheme(const jsbind::String& value);
};

