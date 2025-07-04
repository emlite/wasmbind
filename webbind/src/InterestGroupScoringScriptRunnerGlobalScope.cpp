#include <webbind/InterestGroupScoringScriptRunnerGlobalScope.hpp>


InterestGroupScoringScriptRunnerGlobalScope InterestGroupScoringScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupScoringScriptRunnerGlobalScope(h);
    }
InterestGroupScoringScriptRunnerGlobalScope InterestGroupScoringScriptRunnerGlobalScope::clone() const noexcept { return *this; }
InterestGroupScoringScriptRunnerGlobalScope::InterestGroupScoringScriptRunnerGlobalScope(Handle h) noexcept : InterestGroupBiddingAndScoringScriptRunnerGlobalScope(emlite::Val::take_ownership(h)) {}
InterestGroupScoringScriptRunnerGlobalScope::InterestGroupScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept: InterestGroupBiddingAndScoringScriptRunnerGlobalScope(val) {}


