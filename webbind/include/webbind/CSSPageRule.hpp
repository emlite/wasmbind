#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"

class CSSPageDescriptors;


class CSSPageRule : public CSSGroupingRule {
    explicit CSSPageRule(Handle h) noexcept;

public:
    explicit CSSPageRule(const emlite::Val &val) noexcept;
    static CSSPageRule take_ownership(Handle h) noexcept;

    CSSPageRule clone() const noexcept;
    jsbind::CSSOMString selectorText() const;
    void selectorText(const jsbind::CSSOMString& value);
    CSSPageDescriptors style() const;
};

