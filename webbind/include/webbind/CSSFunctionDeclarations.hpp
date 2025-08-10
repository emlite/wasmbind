#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

class CSSFunctionDescriptors;

/// Interface CSSFunctionDeclarations
/// [`CSSFunctionDeclarations`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDeclarations)
class CSSFunctionDeclarations : public CSSRule {
    explicit CSSFunctionDeclarations(Handle h) noexcept;
public:
    explicit CSSFunctionDeclarations(const emlite::Val &val) noexcept;
    static CSSFunctionDeclarations take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSFunctionDeclarations clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `style` attribute.
    /// [`CSSFunctionDeclarations.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDeclarations/style)
    [[nodiscard]] CSSFunctionDescriptors style() const;
};

} // namespace webbind