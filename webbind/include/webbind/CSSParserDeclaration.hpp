#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSParserRule.hpp"
#include "enums.hpp"

class CSSParserValue;


class CSSParserDeclaration : public CSSParserRule {
    explicit CSSParserDeclaration(Handle h) noexcept;

public:
    explicit CSSParserDeclaration(const emlite::Val &val) noexcept;
    static CSSParserDeclaration take_ownership(Handle h) noexcept;

    CSSParserDeclaration clone() const noexcept;
    CSSParserDeclaration(const jsbind::DOMString& name, const jsbind::Sequence<CSSParserRule>& body);
    jsbind::DOMString name() const;
    jsbind::FrozenArray<CSSParserValue> body() const;
};

