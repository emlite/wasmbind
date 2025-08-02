#include <webbind/CSSFontFaceRule.hpp>
#include <webbind/CSSFontFaceDescriptors.hpp>


CSSFontFaceRule CSSFontFaceRule::take_ownership(Handle h) noexcept {
        return CSSFontFaceRule(h);
    }
CSSFontFaceRule CSSFontFaceRule::clone() const noexcept { return *this; }
emlite::Val CSSFontFaceRule::instance() noexcept { return emlite::Val::global("CSSFontFaceRule"); }
CSSFontFaceRule::CSSFontFaceRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSFontFaceRule::CSSFontFaceRule(const emlite::Val &val) noexcept: CSSRule(val) {}


CSSFontFaceDescriptors CSSFontFaceRule::style() const {
    return CSSRule::get("style").as<CSSFontFaceDescriptors>();
}

