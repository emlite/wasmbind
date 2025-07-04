#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSNamespaceRule : public CSSRule {
    explicit CSSNamespaceRule(Handle h) noexcept;

public:
    explicit CSSNamespaceRule(const emlite::Val &val) noexcept;
    static CSSNamespaceRule take_ownership(Handle h) noexcept;

    CSSNamespaceRule clone() const noexcept;
    jsbind::CSSOMString namespaceURI() const;
    jsbind::CSSOMString prefix() const;
};

