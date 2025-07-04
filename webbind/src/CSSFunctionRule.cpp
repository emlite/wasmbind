#include <webbind/CSSFunctionRule.hpp>


FunctionParameter::FunctionParameter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FunctionParameter FunctionParameter::take_ownership(Handle h) noexcept {
        return FunctionParameter(h);
    }
FunctionParameter::FunctionParameter(const emlite::Val &val) noexcept: emlite::Val(val) {}
FunctionParameter::FunctionParameter() noexcept: emlite::Val(emlite::Val::object()) {}
FunctionParameter FunctionParameter::clone() const noexcept { return *this; }

jsbind::CSSOMString FunctionParameter::name() const {
    return emlite::Val::get("name").as<jsbind::CSSOMString>();
}

void FunctionParameter::name(const jsbind::CSSOMString& value) {
    emlite::Val::set("name", value);
}

jsbind::CSSOMString FunctionParameter::type() const {
    return emlite::Val::get("type").as<jsbind::CSSOMString>();
}

void FunctionParameter::type(const jsbind::CSSOMString& value) {
    emlite::Val::set("type", value);
}

jsbind::CSSOMString FunctionParameter::defaultValue() const {
    return emlite::Val::get("defaultValue").as<jsbind::CSSOMString>();
}

void FunctionParameter::defaultValue(const jsbind::CSSOMString& value) {
    emlite::Val::set("defaultValue", value);
}

CSSFunctionRule CSSFunctionRule::take_ownership(Handle h) noexcept {
        return CSSFunctionRule(h);
    }
CSSFunctionRule CSSFunctionRule::clone() const noexcept { return *this; }
CSSFunctionRule::CSSFunctionRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSFunctionRule::CSSFunctionRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}


jsbind::CSSOMString CSSFunctionRule::name() const {
    return CSSGroupingRule::get("name").as<jsbind::CSSOMString>();
}

jsbind::Sequence<FunctionParameter> CSSFunctionRule::getParameters() {
    return CSSGroupingRule::call("getParameters").as<jsbind::Sequence<FunctionParameter>>();
}

jsbind::CSSOMString CSSFunctionRule::returnType() const {
    return CSSGroupingRule::get("returnType").as<jsbind::CSSOMString>();
}

