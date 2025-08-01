#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSStyleDeclaration;


/// The CSSMarginRule class.
/// [`CSSMarginRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMarginRule)
class CSSMarginRule : public CSSRule {
    explicit CSSMarginRule(Handle h) noexcept;

public:
    explicit CSSMarginRule(const emlite::Val &val) noexcept;
    static CSSMarginRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMarginRule clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSMarginRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMarginRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `style` attribute.
    /// [`CSSMarginRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMarginRule/style)
    [[nodiscard]] CSSStyleDeclaration style() const;
};

