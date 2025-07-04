#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLBodyElement : public HTMLElement {
    explicit HTMLBodyElement(Handle h) noexcept;

public:
    explicit HTMLBodyElement(const emlite::Val &val) noexcept;
    static HTMLBodyElement take_ownership(Handle h) noexcept;

    HTMLBodyElement clone() const noexcept;
    HTMLBodyElement();
    jsbind::Any onorientationchange() const;
    void onorientationchange(const jsbind::Any& value);
    jsbind::DOMString text() const;
    void text(const jsbind::DOMString& value);
    jsbind::DOMString link() const;
    void link(const jsbind::DOMString& value);
    jsbind::DOMString vLink() const;
    void vLink(const jsbind::DOMString& value);
    jsbind::DOMString aLink() const;
    void aLink(const jsbind::DOMString& value);
    jsbind::DOMString bgColor() const;
    void bgColor(const jsbind::DOMString& value);
    jsbind::DOMString background() const;
    void background(const jsbind::DOMString& value);
    jsbind::Any onportalactivate() const;
    void onportalactivate(const jsbind::Any& value);
};

