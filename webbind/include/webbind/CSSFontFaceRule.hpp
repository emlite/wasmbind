#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSFontFaceDescriptors;


/// The CSSFontFaceRule class.
/// [`CSSFontFaceRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceRule)
class CSSFontFaceRule : public CSSRule {
    explicit CSSFontFaceRule(Handle h) noexcept;

public:
    explicit CSSFontFaceRule(const emlite::Val &val) noexcept;
    static CSSFontFaceRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSFontFaceRule clone() const noexcept;
    /// Getter of the `style` attribute.
    /// [`CSSFontFaceRule.style`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFaceRule/style)
    [[nodiscard]] CSSFontFaceDescriptors style() const;
};

