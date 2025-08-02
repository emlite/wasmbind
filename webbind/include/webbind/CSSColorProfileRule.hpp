#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSColorProfileRule class.
/// [`CSSColorProfileRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule)
class CSSColorProfileRule : public CSSRule {
    explicit CSSColorProfileRule(Handle h) noexcept;

public:
    explicit CSSColorProfileRule(const emlite::Val &val) noexcept;
    static CSSColorProfileRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSColorProfileRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSColorProfileRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `src` attribute.
    /// [`CSSColorProfileRule.src`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/src)
    [[nodiscard]] jsbind::String src() const;
    /// Getter of the `renderingIntent` attribute.
    /// [`CSSColorProfileRule.renderingIntent`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/renderingIntent)
    [[nodiscard]] jsbind::String renderingIntent() const;
    /// Getter of the `components` attribute.
    /// [`CSSColorProfileRule.components`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorProfileRule/components)
    [[nodiscard]] jsbind::String components() const;
};

