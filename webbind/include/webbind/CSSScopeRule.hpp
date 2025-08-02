#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"


/// The CSSScopeRule class.
/// [`CSSScopeRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule)
class CSSScopeRule : public CSSGroupingRule {
    explicit CSSScopeRule(Handle h) noexcept;

public:
    explicit CSSScopeRule(const emlite::Val &val) noexcept;
    static CSSScopeRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSScopeRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `start` attribute.
    /// [`CSSScopeRule.start`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule/start)
    [[nodiscard]] jsbind::String start() const;
    /// Getter of the `end` attribute.
    /// [`CSSScopeRule.end`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule/end)
    [[nodiscard]] jsbind::String end() const;
};

