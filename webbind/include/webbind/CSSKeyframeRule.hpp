#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

class CSSStyleProperties;

/// Interface CSSKeyframeRule
/// [`CSSKeyframeRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule)
class CSSKeyframeRule : public CSSRule {
    explicit CSSKeyframeRule(Handle h) noexcept;
public:
    explicit CSSKeyframeRule(const emlite::Val &val) noexcept;
    static CSSKeyframeRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSKeyframeRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSKeyframeRule.keyText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/keyText)
    /// [`CSSKeyframeRule.keyText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/keyText)
    [[nodiscard]] jsbind::String keyText() const;
    /// Setter of the `keyText` attribute.
    /// [`CSSKeyframeRule.keyText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/keyText)
    void keyText(const jsbind::String& value);
    /// [`CSSKeyframeRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/style)
    /// [`CSSKeyframeRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule/style)
    [[nodiscard]] CSSStyleProperties style() const;
};

} // namespace webbind