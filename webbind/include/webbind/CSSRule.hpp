#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSRule;
class CSSStyleSheet;

/// Interface CSSRule
/// [`CSSRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule)
class CSSRule : public emlite::Val {
    explicit CSSRule(Handle h) noexcept;
public:
    explicit CSSRule(const emlite::Val &val) noexcept;
    static CSSRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSRule.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/cssText)
    /// [`CSSRule.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/cssText)
    [[nodiscard]] jsbind::String cssText() const;
    /// Setter of the `cssText` attribute.
    /// [`CSSRule.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/cssText)
    void cssText(const jsbind::String& value);
    /// [`CSSRule.parentRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/parentRule)
    /// [`CSSRule.parentRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/parentRule)
    [[nodiscard]] CSSRule parentRule() const;
    /// [`CSSRule.parentStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/parentStyleSheet)
    /// [`CSSRule.parentStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/parentStyleSheet)
    [[nodiscard]] CSSStyleSheet parentStyleSheet() const;
    /// [`CSSRule.type`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/type)
    /// [`CSSRule.type`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/type)
    [[nodiscard]] unsigned short type() const;
};

} // namespace webbind