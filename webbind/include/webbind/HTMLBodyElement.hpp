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
    jsbind::String text() const;
    void text(const jsbind::String& value);
    jsbind::String link() const;
    void link(const jsbind::String& value);
    jsbind::String vLink() const;
    void vLink(const jsbind::String& value);
    jsbind::String aLink() const;
    void aLink(const jsbind::String& value);
    jsbind::String bgColor() const;
    void bgColor(const jsbind::String& value);
    jsbind::String background() const;
    void background(const jsbind::String& value);
    jsbind::Any onportalactivate() const;
    void onportalactivate(const jsbind::Any& value);
};

