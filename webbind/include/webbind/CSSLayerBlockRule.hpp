#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSGroupingRule.hpp"

namespace webbind {

/// Interface CSSLayerBlockRule
/// [`CSSLayerBlockRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLayerBlockRule)
class CSSLayerBlockRule : public CSSGroupingRule {
    explicit CSSLayerBlockRule(Handle h) noexcept;
public:
    explicit CSSLayerBlockRule(const emlite::Val &val) noexcept;
    static CSSLayerBlockRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSLayerBlockRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSLayerBlockRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSLayerBlockRule/name)
    [[nodiscard]] jsbind::String name() const;
};

} // namespace webbind