#include "webbind/InterestGroupReportingScriptRunnerGlobalScope.hpp"

namespace webbind {

InterestGroupReportingScriptRunnerGlobalScope InterestGroupReportingScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupReportingScriptRunnerGlobalScope(h);
    }
InterestGroupReportingScriptRunnerGlobalScope InterestGroupReportingScriptRunnerGlobalScope::clone() const noexcept { return *this; }
emlite::Val InterestGroupReportingScriptRunnerGlobalScope::instance() noexcept { return emlite::Val::global("InterestGroupReportingScriptRunnerGlobalScope"); }
InterestGroupReportingScriptRunnerGlobalScope::InterestGroupReportingScriptRunnerGlobalScope(Handle h) noexcept : InterestGroupScriptRunnerGlobalScope(emlite::Val::take_ownership(h)) {}
InterestGroupReportingScriptRunnerGlobalScope::InterestGroupReportingScriptRunnerGlobalScope(const emlite::Val &val) noexcept: InterestGroupScriptRunnerGlobalScope(val) {}

jsbind::Undefined InterestGroupReportingScriptRunnerGlobalScope::sendReportTo(const jsbind::String& url) {
    return InterestGroupScriptRunnerGlobalScope::call("sendReportTo", url).as<jsbind::Undefined>();
}

jsbind::Undefined InterestGroupReportingScriptRunnerGlobalScope::registerAdBeacon(const jsbind::Record<jsbind::String, jsbind::String>& map) {
    return InterestGroupScriptRunnerGlobalScope::call("registerAdBeacon", map).as<jsbind::Undefined>();
}

jsbind::Undefined InterestGroupReportingScriptRunnerGlobalScope::registerAdMacro(const jsbind::String& name, const jsbind::String& value) {
    return InterestGroupScriptRunnerGlobalScope::call("registerAdMacro", name, value).as<jsbind::Undefined>();
}


} // namespace webbind