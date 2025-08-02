#include <webbind/CSSVariableReferenceValue.hpp>
#include <webbind/CSSUnparsedValue.hpp>


CSSVariableReferenceValue CSSVariableReferenceValue::take_ownership(Handle h) noexcept {
        return CSSVariableReferenceValue(h);
    }
CSSVariableReferenceValue CSSVariableReferenceValue::clone() const noexcept { return *this; }
emlite::Val CSSVariableReferenceValue::instance() noexcept { return emlite::Val::global("CSSVariableReferenceValue"); }
CSSVariableReferenceValue::CSSVariableReferenceValue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSVariableReferenceValue::CSSVariableReferenceValue(const emlite::Val &val) noexcept: emlite::Val(val) {}


CSSVariableReferenceValue::CSSVariableReferenceValue(const jsbind::String& variable) : emlite::Val(emlite::Val::global("CSSVariableReferenceValue").new_(variable)) {}

CSSVariableReferenceValue::CSSVariableReferenceValue(const jsbind::String& variable, const CSSUnparsedValue& fallback) : emlite::Val(emlite::Val::global("CSSVariableReferenceValue").new_(variable, fallback)) {}

jsbind::String CSSVariableReferenceValue::variable() const {
    return emlite::Val::get("variable").as<jsbind::String>();
}

void CSSVariableReferenceValue::variable(const jsbind::String& value) {
    emlite::Val::set("variable", value);
}

CSSUnparsedValue CSSVariableReferenceValue::fallback() const {
    return emlite::Val::get("fallback").as<CSSUnparsedValue>();
}

