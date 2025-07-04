#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


class CSSStyleProperties : public CSSStyleDeclaration {
    explicit CSSStyleProperties(Handle h) noexcept;

public:
    explicit CSSStyleProperties(const emlite::Val &val) noexcept;
    static CSSStyleProperties take_ownership(Handle h) noexcept;

    CSSStyleProperties clone() const noexcept;
    jsbind::CSSOMString cssFloat() const;
    void cssFloat(const jsbind::CSSOMString& value);
};

