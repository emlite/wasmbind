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
    jsbind::String cssText() const;
    void cssText(const jsbind::String& value);
    unsigned long length() const;
    jsbind::String item(unsigned long index);
    jsbind::String getPropertyValue(const jsbind::String& property);
    jsbind::String getPropertyPriority(const jsbind::String& property);
    jsbind::Undefined setProperty(const jsbind::String& property, const jsbind::String& value);
    jsbind::Undefined setProperty(const jsbind::String& property, const jsbind::String& value, const jsbind::String& priority);
    jsbind::String removeProperty(const jsbind::String& property);
    CSSRule parentRule() const;
};

