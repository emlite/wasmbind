#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSViewTransitionRule class.
/// [`CSSViewTransitionRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule)
class CSSViewTransitionRule : public CSSRule {
    explicit CSSViewTransitionRule(Handle h) noexcept;

public:
    explicit CSSViewTransitionRule(const emlite::Val &val) noexcept;
    static CSSViewTransitionRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSViewTransitionRule clone() const noexcept;
    /// Getter of the `navigation` attribute.
    /// [`CSSViewTransitionRule.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule/navigation)
    [[nodiscard]] jsbind::String navigation() const;
    /// Getter of the `types` attribute.
    /// [`CSSViewTransitionRule.types`](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule/types)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
};

