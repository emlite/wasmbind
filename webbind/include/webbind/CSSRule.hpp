#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSRule;
class CSSStyleSheet;


/// The CSSRule class.
/// [`CSSRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule)
class CSSRule : public emlite::Val {
    explicit CSSRule(Handle h) noexcept;

public:
    explicit CSSRule(const emlite::Val &val) noexcept;
    static CSSRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSRule clone() const noexcept;
    /// Getter of the `cssText` attribute.
    /// [`CSSRule.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/cssText)
    [[nodiscard]] jsbind::String cssText() const;
    /// Setter of the `cssText` attribute.
    /// [`CSSRule.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/cssText)
    void cssText(const jsbind::String& value);
    /// Getter of the `parentRule` attribute.
    /// [`CSSRule.parentRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/parentRule)
    [[nodiscard]] CSSRule parentRule() const;
    /// Getter of the `parentStyleSheet` attribute.
    /// [`CSSRule.parentStyleSheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/parentStyleSheet)
    [[nodiscard]] CSSStyleSheet parentStyleSheet() const;
    /// Getter of the `type` attribute.
    /// [`CSSRule.type`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule/type)
    [[nodiscard]] unsigned short type() const;
};

