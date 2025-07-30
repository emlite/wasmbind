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
    CSSParserDeclaration(const jsbind::String& name);
    CSSParserDeclaration(const jsbind::String& name, const jsbind::TypedArray<CSSParserRule>& body);
    jsbind::String name() const;
    jsbind::TypedArray<CSSParserValue> body() const;
};

