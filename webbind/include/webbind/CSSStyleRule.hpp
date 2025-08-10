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
    /// [`CSSStyleRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/selectorText)
    /// [`CSSStyleRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/selectorText)
    [[nodiscard]] jsbind::String selectorText() const;
    /// Setter of the `selectorText` attribute.
    /// [`CSSStyleRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/selectorText)
    void selectorText(const jsbind::String& value);
    /// [`CSSStyleRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/style)
    /// [`CSSStyleRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/style)
    [[nodiscard]] CSSStyleProperties style() const;
    /// [`CSSStyleRule.styleMap`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/styleMap)
    /// [`CSSStyleRule.styleMap`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule/styleMap)
    [[nodiscard]] StylePropertyMap styleMap() const;
};

} // namespace webbind