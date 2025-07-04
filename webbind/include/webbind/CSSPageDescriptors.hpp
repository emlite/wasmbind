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
    jsbind::CSSOMString margin() const;
    void margin(const jsbind::CSSOMString& value);
    jsbind::CSSOMString marginTop() const;
    void marginTop(const jsbind::CSSOMString& value);
    jsbind::CSSOMString marginRight() const;
    void marginRight(const jsbind::CSSOMString& value);
    jsbind::CSSOMString marginBottom() const;
    void marginBottom(const jsbind::CSSOMString& value);
    jsbind::CSSOMString marginLeft() const;
    void marginLeft(const jsbind::CSSOMString& value);
    jsbind::CSSOMString margin_top() const;
    void margin_top(const jsbind::CSSOMString& value);
    jsbind::CSSOMString margin_right() const;
    void margin_right(const jsbind::CSSOMString& value);
    jsbind::CSSOMString margin_bottom() const;
    void margin_bottom(const jsbind::CSSOMString& value);
    jsbind::CSSOMString margin_left() const;
    void margin_left(const jsbind::CSSOMString& value);
    jsbind::CSSOMString size() const;
    void size(const jsbind::CSSOMString& value);
    jsbind::CSSOMString pageOrientation() const;
    void pageOrientation(const jsbind::CSSOMString& value);
    jsbind::CSSOMString page_orientation() const;
    void page_orientation(const jsbind::CSSOMString& value);
    jsbind::CSSOMString marks() const;
    void marks(const jsbind::CSSOMString& value);
    jsbind::CSSOMString bleed() const;
    void bleed(const jsbind::CSSOMString& value);
};

