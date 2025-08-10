#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSPropertyRule
/// [`CSSPropertyRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule)
class CSSPropertyRule : public CSSRule {
    explicit CSSPropertyRule(Handle h) noexcept;
public:
    explicit CSSPropertyRule(const emlite::Val &val) noexcept;
    static CSSPropertyRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSPropertyRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSPropertyRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/name)
    /// [`CSSPropertyRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSPropertyRule.syntax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/syntax)
    /// [`CSSPropertyRule.syntax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/syntax)
    [[nodiscard]] jsbind::String syntax() const;
    /// [`CSSPropertyRule.inherits`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/inherits)
    /// [`CSSPropertyRule.inherits`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/inherits)
    [[nodiscard]] bool inherits() const;
    /// [`CSSPropertyRule.initialValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/initialValue)
    /// [`CSSPropertyRule.initialValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/initialValue)
    [[nodiscard]] jsbind::String initialValue() const;
};

} // namespace webbind