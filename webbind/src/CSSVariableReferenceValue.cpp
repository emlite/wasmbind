#include <webbind/CSSVariableReferenceValue.hpp>
#include <webbind/CSSUnparsedValue.hpp>


CSSVariableReferenceValue CSSVariableReferenceValue::take_ownership(Handle h) noexcept {
        return CSSVariableReferenceValue(h);
    }
CSSVariableReferenceValue CSSVariableReferenceValue::clone() const noexcept { return *this; }
CSSVariableReferenceValue::CSSVariableReferenceValue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSVariableReferenceValue::CSSVariableReferenceValue(const emlite::Val &val) noexcept: emlite::Val(val) {}


CSSVariableReferenceValue::CSSVariableReferenceValue(const jsbind::USVString& variable, const CSSUnparsedValue& fallback): emlite::Val(emlite::Val::global("CSSVariableReferenceValue").new_(variable, fallback)) {}

jsbind::USVString CSSVariableReferenceValue::variable() const {
    return emlite::Val::get("variable").as<jsbind::USVString>();
}

void CSSVariableReferenceValue::variable(const jsbind::USVString& value) {
    emlite::Val::set("variable", value);
}

CSSUnparsedValue CSSVariableReferenceValue::fallback() const {
    return emlite::Val::get("fallback").as<CSSUnparsedValue>();
}

