#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSStyleProperties;


/// The CSSKeyframeRule class.
/// [`CSSKeyframeRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule)
class CSSKeyframeRule : public CSSRule {
    explicit CSSKeyframeRule(Handle h) noexcept;

public:
    explicit CSSKeyframeRule(const emlite::Val &val) noexcept;
    static CSSKeyframeRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSKeyframeRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `keyText` attribute.
    /// [`CSSKeyframeRule.keyText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/keyText)
    [[nodiscard]] jsbind::String keyText() const;
    /// Setter of the `keyText` attribute.
    /// [`CSSKeyframeRule.keyText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/keyText)
    void keyText(const jsbind::String& value);
    /// Getter of the `style` attribute.
    /// [`CSSKeyframeRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/style)
    [[nodiscard]] CSSStyleProperties style() const;
};

