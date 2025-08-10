#include "webbind/CSSContainerRule.hpp"

namespace webbind {

CSSContainerRule CSSContainerRule::take_ownership(Handle h) noexcept {
        return CSSContainerRule(h);
    }
CSSContainerRule CSSContainerRule::clone() const noexcept { return *this; }
emlite::Val CSSContainerRule::instance() noexcept { return emlite::Val::global("CSSContainerRule"); }
CSSContainerRule::CSSContainerRule(Handle h) noexcept : CSSConditionRule(emlite::Val::take_ownership(h)) {}
CSSContainerRule::CSSContainerRule(const emlite::Val &val) noexcept: CSSConditionRule(val) {}

jsbind::String CSSContainerRule::containerName() const {
    return CSSConditionRule::get("containerName").as<jsbind::String>();
}

jsbind::String CSSContainerRule::containerQuery() const {
    return CSSConditionRule::get("containerQuery").as<jsbind::String>();
}


} // namespace webbind