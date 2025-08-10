#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSGroupingRule.hpp"

namespace webbind {

/// Interface CSSScopeRule
/// [`CSSScopeRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule)
class CSSScopeRule : public CSSGroupingRule {
    explicit CSSScopeRule(Handle h) noexcept;
public:
    explicit CSSScopeRule(const emlite::Val &val) noexcept;
    static CSSScopeRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSScopeRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSScopeRule.start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule/start)
    /// [`CSSScopeRule.start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule/start)
    [[nodiscard]] jsbind::String start() const;
    /// [`CSSScopeRule.end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule/end)
    /// [`CSSScopeRule.end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule/end)
    [[nodiscard]] jsbind::String end() const;
};

} // namespace webbind