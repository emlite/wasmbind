#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

class CSSStyleProperties;

/// Interface CSSNestedDeclarations
/// [`CSSNestedDeclarations`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNestedDeclarations)
class CSSNestedDeclarations : public CSSRule {
    explicit CSSNestedDeclarations(Handle h) noexcept;
public:
    explicit CSSNestedDeclarations(const emlite::Val &val) noexcept;
    static CSSNestedDeclarations take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSNestedDeclarations clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSNestedDeclarations.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNestedDeclarations/style)
    /// [`CSSNestedDeclarations.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNestedDeclarations/style)
    [[nodiscard]] CSSStyleProperties style() const;
};

} // namespace webbind