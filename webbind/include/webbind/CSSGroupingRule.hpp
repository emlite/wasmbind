#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSRuleList;


/// The CSSGroupingRule class.
/// [`CSSGroupingRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSGroupingRule)
class CSSGroupingRule : public CSSRule {
    explicit CSSGroupingRule(Handle h) noexcept;

public:
    explicit CSSGroupingRule(const emlite::Val &val) noexcept;
    static CSSGroupingRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSGroupingRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `cssRules` attribute.
    /// [`CSSGroupingRule.cssRules`](https://developer.mozilla.org/en-US/docs/Web/API/CSSGroupingRule/cssRules)
    [[nodiscard]] CSSRuleList cssRules() const;
    /// The insertRule method.
    /// [`CSSGroupingRule.insertRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSGroupingRule/insertRule)
    unsigned long insertRule(const jsbind::String& rule);
    /// The insertRule method.
    /// [`CSSGroupingRule.insertRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSGroupingRule/insertRule)
    unsigned long insertRule(const jsbind::String& rule, unsigned long index);
    /// The deleteRule method.
    /// [`CSSGroupingRule.deleteRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSGroupingRule/deleteRule)
    jsbind::Undefined deleteRule(unsigned long index);
};

