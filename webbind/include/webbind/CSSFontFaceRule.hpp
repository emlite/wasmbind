#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSFontFaceDescriptors;


class CSSFontFaceRule : public CSSRule {
    explicit CSSFontFaceRule(Handle h) noexcept;

public:
    explicit CSSFontFaceRule(const emlite::Val &val) noexcept;
    static CSSFontFaceRule take_ownership(Handle h) noexcept;

    CSSFontFaceRule clone() const noexcept;
    CSSFontFaceDescriptors style() const;
};

