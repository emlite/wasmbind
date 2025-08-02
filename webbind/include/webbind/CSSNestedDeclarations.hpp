#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSStyleProperties;


/// The CSSNestedDeclarations class.
/// [`CSSNestedDeclarations`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNestedDeclarations)
class CSSNestedDeclarations : public CSSRule {
    explicit CSSNestedDeclarations(Handle h) noexcept;

public:
    explicit CSSNestedDeclarations(const emlite::Val &val) noexcept;
    static CSSNestedDeclarations take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSNestedDeclarations clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `style` attribute.
    /// [`CSSNestedDeclarations.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNestedDeclarations/style)
    [[nodiscard]] CSSStyleProperties style() const;
};

