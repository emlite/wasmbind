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
    CSSParserAtRule(const jsbind::DOMString& name, const jsbind::Sequence<jsbind::Any>& prelude, const jsbind::Sequence<CSSParserRule>& body);
    jsbind::DOMString name() const;
    jsbind::FrozenArray<CSSParserValue> prelude() const;
    jsbind::FrozenArray<CSSParserRule> body() const;
};

