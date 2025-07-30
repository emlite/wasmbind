#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLSourceElement : public HTMLElement {
    explicit HTMLSourceElement(Handle h) noexcept;

public:
    explicit HTMLSourceElement(const emlite::Val &val) noexcept;
    static HTMLSourceElement take_ownership(Handle h) noexcept;

    HTMLSourceElement clone() const noexcept;
    HTMLSourceElement();
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String srcset() const;
    void srcset(const jsbind::String& value);
    jsbind::String sizes() const;
    void sizes(const jsbind::String& value);
    jsbind::String media() const;
    void media(const jsbind::String& value);
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
};

