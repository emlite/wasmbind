#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSStyleProperties;


class CSSNestedDeclarations : public CSSRule {
    explicit CSSNestedDeclarations(Handle h) noexcept;

public:
    explicit CSSNestedDeclarations(const emlite::Val &val) noexcept;
    static CSSNestedDeclarations take_ownership(Handle h) noexcept;

    CSSNestedDeclarations clone() const noexcept;
    CSSStyleProperties style() const;
};

