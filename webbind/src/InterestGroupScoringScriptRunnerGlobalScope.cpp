#include "webbind/InterestGroupScoringScriptRunnerGlobalScope.hpp"

namespace webbind {

InterestGroupScoringScriptRunnerGlobalScope InterestGroupScoringScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupScoringScriptRunnerGlobalScope(h);
    }
InterestGroupScoringScriptRunnerGlobalScope InterestGroupScoringScriptRunnerGlobalScope::clone() const noexcept { return *this; }
emlite::Val InterestGroupScoringScriptRunnerGlobalScope::instance() noexcept { return emlite::Val::global("InterestGroupScoringScriptRunnerGlobalScope"); }
InterestGroupScoringScriptRunnerGlobalScope::InterestGroupScoringScriptRunnerGlobalScope(Handle h) noexcept : InterestGroupBiddingAndScoringScriptRunnerGlobalScope(emlite::Val::take_ownership(h)) {}
InterestGroupScoringScriptRunnerGlobalScope::InterestGroupScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept: InterestGroupBiddingAndScoringScriptRunnerGlobalScope(val) {}


} // namespace webbind