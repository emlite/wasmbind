#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSGroupingRule.hpp"

namespace webbind {

class CSSPageDescriptors;

/// Interface CSSPageRule
/// [`CSSPageRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule)
class CSSPageRule : public CSSGroupingRule {
    explicit CSSPageRule(Handle h) noexcept;
public:
    explicit CSSPageRule(const emlite::Val &val) noexcept;
    static CSSPageRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSPageRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSPageRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/selectorText)
    /// [`CSSPageRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/selectorText)
    [[nodiscard]] jsbind::String selectorText() const;
    /// Setter of the `selectorText` attribute.
    /// [`CSSPageRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/selectorText)
    void selectorText(const jsbind::String& value);
    /// [`CSSPageRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/style)
    /// [`CSSPageRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/style)
    [[nodiscard]] CSSPageDescriptors style() const;
};

} // namespace webbind