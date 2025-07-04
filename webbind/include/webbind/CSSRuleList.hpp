#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSRule;


class CSSRuleList : public emlite::Val {
    explicit CSSRuleList(Handle h) noexcept;

public:
    explicit CSSRuleList(const emlite::Val &val) noexcept;
    static CSSRuleList take_ownership(Handle h) noexcept;

    CSSRuleList clone() const noexcept;
    CSSRule item(unsigned long index);
    unsigned long length() const;
};

