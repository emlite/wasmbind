#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSViewTransitionRule
/// [`CSSViewTransitionRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule)
class CSSViewTransitionRule : public CSSRule {
    explicit CSSViewTransitionRule(Handle h) noexcept;
public:
    explicit CSSViewTransitionRule(const emlite::Val &val) noexcept;
    static CSSViewTransitionRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSViewTransitionRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSViewTransitionRule.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule/navigation)
    /// [`CSSViewTransitionRule.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule/navigation)
    [[nodiscard]] jsbind::String navigation() const;
    /// [`CSSViewTransitionRule.types`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule/types)
    /// [`CSSViewTransitionRule.types`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule/types)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
};

} // namespace webbind