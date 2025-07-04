#include <webbind/InterestGroupScriptRunnerGlobalScope.hpp>
#include <webbind/PrivateAggregation.hpp>
#include <webbind/ProtectedAudienceUtilities.hpp>


InterestGroupScriptRunnerGlobalScope InterestGroupScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupScriptRunnerGlobalScope(h);
    }
InterestGroupScriptRunnerGlobalScope InterestGroupScriptRunnerGlobalScope::clone() const noexcept { return *this; }
InterestGroupScriptRunnerGlobalScope::InterestGroupScriptRunnerGlobalScope(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
InterestGroupScriptRunnerGlobalScope::InterestGroupScriptRunnerGlobalScope(const emlite::Val &val) noexcept: emlite::Val(val) {}


PrivateAggregation InterestGroupScriptRunnerGlobalScope::privateAggregation() const {
    return emlite::Val::get("privateAggregation").as<PrivateAggregation>();
}

ProtectedAudienceUtilities InterestGroupScriptRunnerGlobalScope::protectedAudience() const {
    return emlite::Val::get("protectedAudience").as<ProtectedAudienceUtilities>();
}

