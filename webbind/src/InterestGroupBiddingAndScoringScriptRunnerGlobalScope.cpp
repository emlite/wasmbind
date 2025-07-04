#include <webbind/InterestGroupBiddingAndScoringScriptRunnerGlobalScope.hpp>
#include <webbind/ForDebuggingOnly.hpp>
#include <webbind/RealTimeReporting.hpp>


InterestGroupBiddingAndScoringScriptRunnerGlobalScope InterestGroupBiddingAndScoringScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupBiddingAndScoringScriptRunnerGlobalScope(h);
    }
InterestGroupBiddingAndScoringScriptRunnerGlobalScope InterestGroupBiddingAndScoringScriptRunnerGlobalScope::clone() const noexcept { return *this; }
InterestGroupBiddingAndScoringScriptRunnerGlobalScope::InterestGroupBiddingAndScoringScriptRunnerGlobalScope(Handle h) noexcept : InterestGroupScriptRunnerGlobalScope(emlite::Val::take_ownership(h)) {}
InterestGroupBiddingAndScoringScriptRunnerGlobalScope::InterestGroupBiddingAndScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept: InterestGroupScriptRunnerGlobalScope(val) {}


ForDebuggingOnly InterestGroupBiddingAndScoringScriptRunnerGlobalScope::forDebuggingOnly() const {
    return InterestGroupScriptRunnerGlobalScope::get("forDebuggingOnly").as<ForDebuggingOnly>();
}

RealTimeReporting InterestGroupBiddingAndScoringScriptRunnerGlobalScope::realTimeReporting() const {
    return InterestGroupScriptRunnerGlobalScope::get("realTimeReporting").as<RealTimeReporting>();
}

