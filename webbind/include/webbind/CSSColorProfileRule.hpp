#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSColorProfileRule
/// [`CSSColorProfileRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule)
class CSSColorProfileRule : public CSSRule {
    explicit CSSColorProfileRule(Handle h) noexcept;
public:
    explicit CSSColorProfileRule(const emlite::Val &val) noexcept;
    static CSSColorProfileRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSColorProfileRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSColorProfileRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/name)
    /// [`CSSColorProfileRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSColorProfileRule.src`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/src)
    /// [`CSSColorProfileRule.src`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/src)
    [[nodiscard]] jsbind::String src() const;
    /// [`CSSColorProfileRule.renderingIntent`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/renderingIntent)
    /// [`CSSColorProfileRule.renderingIntent`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/renderingIntent)
    [[nodiscard]] jsbind::String renderingIntent() const;
    /// [`CSSColorProfileRule.components`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/components)
    /// [`CSSColorProfileRule.components`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/components)
    [[nodiscard]] jsbind::String components() const;
};

} // namespace webbind