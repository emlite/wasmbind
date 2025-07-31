#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSConditionRule.hpp"
#include "enums.hpp"


/// The CSSContainerRule class.
/// [`CSSContainerRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule)
class CSSContainerRule : public CSSConditionRule {
    explicit CSSContainerRule(Handle h) noexcept;

public:
    explicit CSSContainerRule(const emlite::Val &val) noexcept;
    static CSSContainerRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSContainerRule clone() const noexcept;
    /// Getter of the `containerName` attribute.
    /// [`CSSContainerRule.containerName`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule/containerName)
    [[nodiscard]] jsbind::String containerName() const;
    /// Getter of the `containerQuery` attribute.
    /// [`CSSContainerRule.containerQuery`](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule/containerQuery)
    [[nodiscard]] jsbind::String containerQuery() const;
};

