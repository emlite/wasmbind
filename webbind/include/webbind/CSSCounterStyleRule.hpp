#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSCounterStyleRule : public CSSRule {
    explicit CSSCounterStyleRule(Handle h) noexcept;

public:
    explicit CSSCounterStyleRule(const emlite::Val &val) noexcept;
    static CSSCounterStyleRule take_ownership(Handle h) noexcept;

    CSSCounterStyleRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    void name(const jsbind::CSSOMString& value);
    jsbind::CSSOMString system() const;
    void system(const jsbind::CSSOMString& value);
    jsbind::CSSOMString symbols() const;
    void symbols(const jsbind::CSSOMString& value);
    jsbind::CSSOMString additiveSymbols() const;
    void additiveSymbols(const jsbind::CSSOMString& value);
    jsbind::CSSOMString negative() const;
    void negative(const jsbind::CSSOMString& value);
    jsbind::CSSOMString prefix() const;
    void prefix(const jsbind::CSSOMString& value);
    jsbind::CSSOMString suffix() const;
    void suffix(const jsbind::CSSOMString& value);
    jsbind::CSSOMString range() const;
    void range(const jsbind::CSSOMString& value);
    jsbind::CSSOMString pad() const;
    void pad(const jsbind::CSSOMString& value);
    jsbind::CSSOMString speakAs() const;
    void speakAs(const jsbind::CSSOMString& value);
    jsbind::CSSOMString fallback() const;
    void fallback(const jsbind::CSSOMString& value);
};

