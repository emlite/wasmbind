#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"


class CSSScopeRule : public CSSGroupingRule {
    explicit CSSScopeRule(Handle h) noexcept;

public:
    explicit CSSScopeRule(const emlite::Val &val) noexcept;
    static CSSScopeRule take_ownership(Handle h) noexcept;

    CSSScopeRule clone() const noexcept;
    jsbind::String start() const;
    jsbind::String end() const;
};

