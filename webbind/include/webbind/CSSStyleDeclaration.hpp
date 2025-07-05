#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSRule;


class CSSStyleDeclaration : public emlite::Val {
    explicit CSSStyleDeclaration(Handle h) noexcept;

public:
    explicit CSSStyleDeclaration(const emlite::Val &val) noexcept;
    static CSSStyleDeclaration take_ownership(Handle h) noexcept;

    CSSStyleDeclaration clone() const noexcept;
    jsbind::CSSOMString cssText() const;
    void cssText(const jsbind::CSSOMString& value);
    unsigned long length() const;
    jsbind::CSSOMString item(unsigned long index);
    jsbind::CSSOMString getPropertyValue(const jsbind::CSSOMString& property);
    jsbind::CSSOMString getPropertyPriority(const jsbind::CSSOMString& property);
    jsbind::Undefined setProperty(const jsbind::CSSOMString& property, const jsbind::CSSOMString& value);
    jsbind::Undefined setProperty(const jsbind::CSSOMString& property, const jsbind::CSSOMString& value, const jsbind::CSSOMString& priority);
    jsbind::CSSOMString removeProperty(const jsbind::CSSOMString& property);
    CSSRule parentRule() const;
};

