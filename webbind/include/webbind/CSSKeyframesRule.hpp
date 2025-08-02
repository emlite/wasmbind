#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSRuleList;
class CSSKeyframeRule;


/// The CSSKeyframesRule class.
/// [`CSSKeyframesRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule)
class CSSKeyframesRule : public CSSRule {
    explicit CSSKeyframesRule(Handle h) noexcept;

public:
    explicit CSSKeyframesRule(const emlite::Val &val) noexcept;
    static CSSKeyframesRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSKeyframesRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSKeyframesRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`CSSKeyframesRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/name)
    void name(const jsbind::String& value);
    /// Getter of the `cssRules` attribute.
    /// [`CSSKeyframesRule.cssRules`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/cssRules)
    [[nodiscard]] CSSRuleList cssRules() const;
    /// Getter of the `length` attribute.
    /// [`CSSKeyframesRule.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/length)
    [[nodiscard]] unsigned long length() const;
    /// The appendRule method.
    /// [`CSSKeyframesRule.appendRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/appendRule)
    jsbind::Undefined appendRule(const jsbind::String& rule);
    /// The deleteRule method.
    /// [`CSSKeyframesRule.deleteRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/deleteRule)
    jsbind::Undefined deleteRule(const jsbind::String& select);
    /// The findRule method.
    /// [`CSSKeyframesRule.findRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule/findRule)
    CSSKeyframeRule findRule(const jsbind::String& select);
};

