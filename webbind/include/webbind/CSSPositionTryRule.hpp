#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

class CSSPositionTryDescriptors;

/// Interface CSSPositionTryRule
/// [`CSSPositionTryRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule)
class CSSPositionTryRule : public CSSRule {
    explicit CSSPositionTryRule(Handle h) noexcept;
public:
    explicit CSSPositionTryRule(const emlite::Val &val) noexcept;
    static CSSPositionTryRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSPositionTryRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSPositionTryRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule/name)
    /// [`CSSPositionTryRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSPositionTryRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule/style)
    /// [`CSSPositionTryRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule/style)
    [[nodiscard]] CSSPositionTryDescriptors style() const;
};

} // namespace webbind