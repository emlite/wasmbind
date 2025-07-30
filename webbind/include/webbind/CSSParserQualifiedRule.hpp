#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserRule.hpp"
#include "enums.hpp"

class CSSParserValue;


class CSSParserQualifiedRule : public CSSParserRule {
    explicit CSSParserQualifiedRule(Handle h) noexcept;

public:
    explicit CSSParserQualifiedRule(const emlite::Val &val) noexcept;
    static CSSParserQualifiedRule take_ownership(Handle h) noexcept;

    CSSParserQualifiedRule clone() const noexcept;
    CSSParserQualifiedRule(const jsbind::TypedArray<jsbind::Any>& prelude);
    CSSParserQualifiedRule(const jsbind::TypedArray<jsbind::Any>& prelude, const jsbind::TypedArray<CSSParserRule>& body);
    jsbind::TypedArray<CSSParserValue> prelude() const;
    jsbind::TypedArray<CSSParserRule> body() const;
};

