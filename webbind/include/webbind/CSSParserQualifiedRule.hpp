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
    CSSParserQualifiedRule(const jsbind::Sequence<jsbind::Any>& prelude);
    CSSParserQualifiedRule(const jsbind::Sequence<jsbind::Any>& prelude, const jsbind::Sequence<CSSParserRule>& body);
    jsbind::FrozenArray<CSSParserValue> prelude() const;
    jsbind::FrozenArray<CSSParserRule> body() const;
};

