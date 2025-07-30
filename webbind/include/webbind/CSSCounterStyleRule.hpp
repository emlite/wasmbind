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
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String system() const;
    void system(const jsbind::String& value);
    jsbind::String symbols() const;
    void symbols(const jsbind::String& value);
    jsbind::String additiveSymbols() const;
    void additiveSymbols(const jsbind::String& value);
    jsbind::String negative() const;
    void negative(const jsbind::String& value);
    jsbind::String prefix() const;
    void prefix(const jsbind::String& value);
    jsbind::String suffix() const;
    void suffix(const jsbind::String& value);
    jsbind::String range() const;
    void range(const jsbind::String& value);
    jsbind::String pad() const;
    void pad(const jsbind::String& value);
    jsbind::String speakAs() const;
    void speakAs(const jsbind::String& value);
    jsbind::String fallback() const;
    void fallback(const jsbind::String& value);
};

