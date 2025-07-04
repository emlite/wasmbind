#include <webbind/CSSKeywordValue.hpp>


CSSKeywordValue CSSKeywordValue::take_ownership(Handle h) noexcept {
        return CSSKeywordValue(h);
    }
CSSKeywordValue CSSKeywordValue::clone() const noexcept { return *this; }
CSSKeywordValue::CSSKeywordValue(Handle h) noexcept : CSSStyleValue(emlite::Val::take_ownership(h)) {}
CSSKeywordValue::CSSKeywordValue(const emlite::Val &val) noexcept: CSSStyleValue(val) {}


CSSKeywordValue::CSSKeywordValue(const jsbind::USVString& value): CSSStyleValue(emlite::Val::global("CSSKeywordValue").new_(value)) {}

jsbind::USVString CSSKeywordValue::value() const {
    return CSSStyleValue::get("value").as<jsbind::USVString>();
}

void CSSKeywordValue::value(const jsbind::USVString& value) {
    CSSStyleValue::set("value", value);
}

