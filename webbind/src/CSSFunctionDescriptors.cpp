#include <webbind/CSSFunctionDescriptors.hpp>


CSSFunctionDescriptors CSSFunctionDescriptors::take_ownership(Handle h) noexcept {
        return CSSFunctionDescriptors(h);
    }
CSSFunctionDescriptors CSSFunctionDescriptors::clone() const noexcept { return *this; }
CSSFunctionDescriptors::CSSFunctionDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSFunctionDescriptors::CSSFunctionDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}


jsbind::String CSSFunctionDescriptors::result() const {
    return CSSStyleDeclaration::get("result").as<jsbind::String>();
}

void CSSFunctionDescriptors::result(const jsbind::String& value) {
    CSSStyleDeclaration::set("result", value);
}

