#include <webbind/CSSFunctionRule.hpp>
#include <webbind/FunctionParameter.hpp>

namespace webbind {

CSSFunctionRule CSSFunctionRule::take_ownership(Handle h) noexcept {
        return CSSFunctionRule(h);
    }
CSSFunctionRule CSSFunctionRule::clone() const noexcept { return *this; }
emlite::Val CSSFunctionRule::instance() noexcept { return emlite::Val::global("CSSFunctionRule"); }
CSSFunctionRule::CSSFunctionRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSFunctionRule::CSSFunctionRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}

jsbind::String CSSFunctionRule::name() const {
    return CSSGroupingRule::get("name").as<jsbind::String>();
}

jsbind::TypedArray<FunctionParameter> CSSFunctionRule::getParameters() {
    return CSSGroupingRule::call("getParameters").as<jsbind::TypedArray<FunctionParameter>>();
}

jsbind::String CSSFunctionRule::returnType() const {
    return CSSGroupingRule::get("returnType").as<jsbind::String>();
}


} // namespace webbind