#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSConditionRule.hpp"

namespace webbind {

/// Interface CSSContainerRule
/// [`CSSContainerRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule)
class CSSContainerRule : public CSSConditionRule {
    explicit CSSContainerRule(Handle h) noexcept;
public:
    explicit CSSContainerRule(const emlite::Val &val) noexcept;
    static CSSContainerRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSContainerRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSContainerRule.containerName`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule/containerName)
    /// [`CSSContainerRule.containerName`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule/containerName)
    [[nodiscard]] jsbind::String containerName() const;
    /// [`CSSContainerRule.containerQuery`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule/containerQuery)
    /// [`CSSContainerRule.containerQuery`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule/containerQuery)
    [[nodiscard]] jsbind::String containerQuery() const;
};

} // namespace webbind