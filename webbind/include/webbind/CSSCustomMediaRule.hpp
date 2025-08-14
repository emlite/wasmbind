#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSCustomMediaRule
/// [`CSSCustomMediaRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCustomMediaRule)
class CSSCustomMediaRule : public CSSRule {
    explicit CSSCustomMediaRule(Handle h) noexcept;
public:
    explicit CSSCustomMediaRule(const emlite::Val &val) noexcept;
    static CSSCustomMediaRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSCustomMediaRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSCustomMediaRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCustomMediaRule/name)
    /// [`CSSCustomMediaRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCustomMediaRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSCustomMediaRule.query`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCustomMediaRule/query)
    /// [`CSSCustomMediaRule.query`](https://developer.mozilla.org/en-US/docs/Web/API/CSSCustomMediaRule/query)
    [[nodiscard]] jsbind::Any query() const;
};

} // namespace webbind