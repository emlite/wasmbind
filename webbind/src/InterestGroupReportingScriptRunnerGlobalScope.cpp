#include <webbind/InterestGroupReportingScriptRunnerGlobalScope.hpp>


InterestGroupReportingScriptRunnerGlobalScope InterestGroupReportingScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupReportingScriptRunnerGlobalScope(h);
    }
InterestGroupReportingScriptRunnerGlobalScope InterestGroupReportingScriptRunnerGlobalScope::clone() const noexcept { return *this; }
InterestGroupReportingScriptRunnerGlobalScope::InterestGroupReportingScriptRunnerGlobalScope(Handle h) noexcept : InterestGroupScriptRunnerGlobalScope(emlite::Val::take_ownership(h)) {}
InterestGroupReportingScriptRunnerGlobalScope::InterestGroupReportingScriptRunnerGlobalScope(const emlite::Val &val) noexcept: InterestGroupScriptRunnerGlobalScope(val) {}


jsbind::Undefined InterestGroupReportingScriptRunnerGlobalScope::sendReportTo(const jsbind::DOMString& url) {
    return InterestGroupScriptRunnerGlobalScope::call("sendReportTo", url).as<jsbind::Undefined>();
}

jsbind::Undefined InterestGroupReportingScriptRunnerGlobalScope::registerAdBeacon(const jsbind::Record<jsbind::DOMString, jsbind::USVString>& map) {
    return InterestGroupScriptRunnerGlobalScope::call("registerAdBeacon", map).as<jsbind::Undefined>();
}

jsbind::Undefined InterestGroupReportingScriptRunnerGlobalScope::registerAdMacro(const jsbind::DOMString& name, const jsbind::USVString& value) {
    return InterestGroupScriptRunnerGlobalScope::call("registerAdMacro", name, value).as<jsbind::Undefined>();
}

