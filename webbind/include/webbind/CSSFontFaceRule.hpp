#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

class CSSFontFaceDescriptors;

/// Interface CSSFontFaceRule
/// [`CSSFontFaceRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceRule)
class CSSFontFaceRule : public CSSRule {
    explicit CSSFontFaceRule(Handle h) noexcept;
public:
    explicit CSSFontFaceRule(const emlite::Val &val) noexcept;
    static CSSFontFaceRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSFontFaceRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSFontFaceRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceRule/style)
    /// [`CSSFontFaceRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceRule/style)
    [[nodiscard]] CSSFontFaceDescriptors style() const;
};

} // namespace webbind