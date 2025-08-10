#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSGroupingRule.hpp"

namespace webbind {

class CSSStyleProperties;
class StylePropertyMap;

/// Interface CSSStyleRule
/// [`CSSStyleRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule)
class CSSStyleRule : public CSSGroupingRule {
    explicit CSSStyleRule(Handle h) noexcept;
public:
    explicit CSSStyleRule(const emlite::Val &val) noexcept;
    static CSSStyleRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSStyleRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `selectorText` attribute.
    /// [`CSSStyleRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/selectorText)
    [[nodiscard]] jsbind::String selectorText() const;
    /// Setter of the `selectorText` attribute.
    /// [`CSSStyleRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/selectorText)
    void selectorText(const jsbind::String& value);
    /// Getter of the `style` attribute.
    /// [`CSSStyleRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/style)
    [[nodiscard]] CSSStyleProperties style() const;
    /// Getter of the `styleMap` attribute.
    /// [`CSSStyleRule.styleMap`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/styleMap)
    [[nodiscard]] StylePropertyMap styleMap() const;
};

} // namespace webbind