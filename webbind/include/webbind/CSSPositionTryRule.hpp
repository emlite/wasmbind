#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSPositionTryDescriptors;


/// The CSSPositionTryRule class.
/// [`CSSPositionTryRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule)
class CSSPositionTryRule : public CSSRule {
    explicit CSSPositionTryRule(Handle h) noexcept;

public:
    explicit CSSPositionTryRule(const emlite::Val &val) noexcept;
    static CSSPositionTryRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSPositionTryRule clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSPositionTryRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `style` attribute.
    /// [`CSSPositionTryRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule/style)
    [[nodiscard]] CSSPositionTryDescriptors style() const;
};

