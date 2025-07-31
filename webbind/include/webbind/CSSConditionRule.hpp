#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"


/// The CSSConditionRule class.
/// [`CSSConditionRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSConditionRule)
class CSSConditionRule : public CSSGroupingRule {
    explicit CSSConditionRule(Handle h) noexcept;

public:
    explicit CSSConditionRule(const emlite::Val &val) noexcept;
    static CSSConditionRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSConditionRule clone() const noexcept;
    /// Getter of the `conditionText` attribute.
    /// [`CSSConditionRule.conditionText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSConditionRule/conditionText)
    [[nodiscard]] jsbind::String conditionText() const;
};

