#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSGroupingRule.hpp"

namespace webbind {

/// Interface CSSConditionRule
/// [`CSSConditionRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSConditionRule)
class CSSConditionRule : public CSSGroupingRule {
    explicit CSSConditionRule(Handle h) noexcept;
public:
    explicit CSSConditionRule(const emlite::Val &val) noexcept;
    static CSSConditionRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSConditionRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSConditionRule.conditionText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSConditionRule/conditionText)
    /// [`CSSConditionRule.conditionText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSConditionRule/conditionText)
    [[nodiscard]] jsbind::String conditionText() const;
};

} // namespace webbind