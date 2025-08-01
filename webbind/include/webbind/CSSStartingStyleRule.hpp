#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"


/// The CSSStartingStyleRule class.
/// [`CSSStartingStyleRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStartingStyleRule)
class CSSStartingStyleRule : public CSSGroupingRule {
    explicit CSSStartingStyleRule(Handle h) noexcept;

public:
    explicit CSSStartingStyleRule(const emlite::Val &val) noexcept;
    static CSSStartingStyleRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSStartingStyleRule clone() const noexcept;
};

