#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleDeclaration.hpp"
#include "enums.hpp"


/// The CSSStyleProperties class.
/// [`CSSStyleProperties`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleProperties)
class CSSStyleProperties : public CSSStyleDeclaration {
    explicit CSSStyleProperties(Handle h) noexcept;

public:
    explicit CSSStyleProperties(const emlite::Val &val) noexcept;
    static CSSStyleProperties take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSStyleProperties clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `cssFloat` attribute.
    /// [`CSSStyleProperties.cssFloat`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleProperties/cssFloat)
    [[nodiscard]] jsbind::String cssFloat() const;
    /// Setter of the `cssFloat` attribute.
    /// [`CSSStyleProperties.cssFloat`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleProperties/cssFloat)
    void cssFloat(const jsbind::String& value);
};

