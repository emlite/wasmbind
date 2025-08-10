#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSConditionRule.hpp"

namespace webbind {

/// Interface CSSSupportsRule
/// [`CSSSupportsRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSupportsRule)
class CSSSupportsRule : public CSSConditionRule {
    explicit CSSSupportsRule(Handle h) noexcept;
public:
    explicit CSSSupportsRule(const emlite::Val &val) noexcept;
    static CSSSupportsRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSSupportsRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `matches` attribute.
    /// [`CSSSupportsRule.matches`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSupportsRule/matches)
    [[nodiscard]] bool matches() const;
};

} // namespace webbind