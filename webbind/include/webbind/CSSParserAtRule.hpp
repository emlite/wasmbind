#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserRule.hpp"
#include "enums.hpp"

class CSSParserValue;


class CSSParserAtRule : public CSSParserRule {
    explicit CSSParserAtRule(Handle h) noexcept;

public:
    explicit CSSParserAtRule(const emlite::Val &val) noexcept;
    static CSSParserAtRule take_ownership(Handle h) noexcept;

    CSSParserAtRule clone() const noexcept;
    CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude);
    CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude, const jsbind::TypedArray<CSSParserRule>& body);
    jsbind::String name() const;
    jsbind::TypedArray<CSSParserValue> prelude() const;
    jsbind::TypedArray<CSSParserRule> body() const;
};

