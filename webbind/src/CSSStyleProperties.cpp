#include <webbind/CSSStyleProperties.hpp>

namespace webbind {

CSSStyleProperties CSSStyleProperties::take_ownership(Handle h) noexcept {
        return CSSStyleProperties(h);
    }
CSSStyleProperties CSSStyleProperties::clone() const noexcept { return *this; }
emlite::Val CSSStyleProperties::instance() noexcept { return emlite::Val::global("CSSStyleProperties"); }
CSSStyleProperties::CSSStyleProperties(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSStyleProperties::CSSStyleProperties(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}

jsbind::String CSSStyleProperties::cssFloat() const {
    return CSSStyleDeclaration::get("cssFloat").as<jsbind::String>();
}

void CSSStyleProperties::cssFloat(const jsbind::String& value) {
    CSSStyleDeclaration::set("cssFloat", value);
}


} // namespace webbind