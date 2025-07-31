#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSPropertyRule class.
/// [`CSSPropertyRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule)
class CSSPropertyRule : public CSSRule {
    explicit CSSPropertyRule(Handle h) noexcept;

public:
    explicit CSSPropertyRule(const emlite::Val &val) noexcept;
    static CSSPropertyRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSPropertyRule clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSPropertyRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `syntax` attribute.
    /// [`CSSPropertyRule.syntax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/syntax)
    [[nodiscard]] jsbind::String syntax() const;
    /// Getter of the `inherits` attribute.
    /// [`CSSPropertyRule.inherits`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/inherits)
    [[nodiscard]] bool inherits() const;
    /// Getter of the `initialValue` attribute.
    /// [`CSSPropertyRule.initialValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule/initialValue)
    [[nodiscard]] jsbind::String initialValue() const;
};

