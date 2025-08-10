#include <webbind/CSSStyleSheetInit.hpp>

namespace webbind {

CSSStyleSheetInit::CSSStyleSheetInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSStyleSheetInit CSSStyleSheetInit::take_ownership(Handle h) noexcept {
    return CSSStyleSheetInit(h);
}

CSSStyleSheetInit::CSSStyleSheetInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

CSSStyleSheetInit::CSSStyleSheetInit() noexcept: emlite::Val(emlite::Val::object()) {}

CSSStyleSheetInit CSSStyleSheetInit::clone() const noexcept { return *this; }

jsbind::String CSSStyleSheetInit::baseURL() const {
    return emlite::Val::get("baseURL").as<jsbind::String>();
}

void CSSStyleSheetInit::baseURL(const jsbind::String& value) {
    emlite::Val::set("baseURL", value);
}

jsbind::Any CSSStyleSheetInit::media() const {
    return emlite::Val::get("media").as<jsbind::Any>();
}

void CSSStyleSheetInit::media(const jsbind::Any& value) {
    emlite::Val::set("media", value);
}

bool CSSStyleSheetInit::disabled() const {
    return emlite::Val::get("disabled").as<bool>();
}

void CSSStyleSheetInit::disabled(bool value) {
    emlite::Val::set("disabled", value);
}


} // namespace webbind