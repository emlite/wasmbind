#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"

class CSSStyleProperties;
class StylePropertyMap;


class CSSStyleRule : public CSSGroupingRule {
    explicit CSSStyleRule(Handle h) noexcept;

public:
    explicit CSSStyleRule(const emlite::Val &val) noexcept;
    static CSSStyleRule take_ownership(Handle h) noexcept;

    CSSStyleRule clone() const noexcept;
    jsbind::CSSOMString selectorText() const;
    void selectorText(const jsbind::CSSOMString& value);
    CSSStyleProperties style() const;
    StylePropertyMap styleMap() const;
};

