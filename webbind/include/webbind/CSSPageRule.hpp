#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"

class CSSPageDescriptors;


/// The CSSPageRule class.
/// [`CSSPageRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule)
class CSSPageRule : public CSSGroupingRule {
    explicit CSSPageRule(Handle h) noexcept;

public:
    explicit CSSPageRule(const emlite::Val &val) noexcept;
    static CSSPageRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSPageRule clone() const noexcept;
    /// Getter of the `selectorText` attribute.
    /// [`CSSPageRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/selectorText)
    [[nodiscard]] jsbind::String selectorText() const;
    /// Setter of the `selectorText` attribute.
    /// [`CSSPageRule.selectorText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/selectorText)
    void selectorText(const jsbind::String& value);
    /// Getter of the `style` attribute.
    /// [`CSSPageRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule/style)
    [[nodiscard]] CSSPageDescriptors style() const;
};

