#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


class CSSPageDescriptors : public CSSStyleDeclaration {
    explicit CSSPageDescriptors(Handle h) noexcept;

public:
    explicit CSSPageDescriptors(const emlite::Val &val) noexcept;
    static CSSPageDescriptors take_ownership(Handle h) noexcept;

    CSSPageDescriptors clone() const noexcept;
    jsbind::String margin() const;
    void margin(const jsbind::String& value);
    jsbind::String marginTop() const;
    void marginTop(const jsbind::String& value);
    jsbind::String marginRight() const;
    void marginRight(const jsbind::String& value);
    jsbind::String marginBottom() const;
    void marginBottom(const jsbind::String& value);
    jsbind::String marginLeft() const;
    void marginLeft(const jsbind::String& value);
    jsbind::String margin_top() const;
    void margin_top(const jsbind::String& value);
    jsbind::String margin_right() const;
    void margin_right(const jsbind::String& value);
    jsbind::String margin_bottom() const;
    void margin_bottom(const jsbind::String& value);
    jsbind::String margin_left() const;
    void margin_left(const jsbind::String& value);
    jsbind::String size() const;
    void size(const jsbind::String& value);
    jsbind::String pageOrientation() const;
    void pageOrientation(const jsbind::String& value);
    jsbind::String page_orientation() const;
    void page_orientation(const jsbind::String& value);
    jsbind::String marks() const;
    void marks(const jsbind::String& value);
    jsbind::String bleed() const;
    void bleed(const jsbind::String& value);
};

