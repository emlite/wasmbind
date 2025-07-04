#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSRule;
class CSSStyleSheet;


class CSSRule : public emlite::Val {
    explicit CSSRule(Handle h) noexcept;

public:
    explicit CSSRule(const emlite::Val &val) noexcept;
    static CSSRule take_ownership(Handle h) noexcept;

    CSSRule clone() const noexcept;
    jsbind::CSSOMString cssText() const;
    void cssText(const jsbind::CSSOMString& value);
    CSSRule parentRule() const;
    CSSStyleSheet parentStyleSheet() const;
    unsigned short type() const;
};

