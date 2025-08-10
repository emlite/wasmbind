#include "webbind/InterestGroupBiddingScriptRunnerGlobalScope.hpp"

namespace webbind {

InterestGroupBiddingScriptRunnerGlobalScope InterestGroupBiddingScriptRunnerGlobalScope::take_ownership(Handle h) noexcept {
        return InterestGroupBiddingScriptRunnerGlobalScope(h);
    }
InterestGroupBiddingScriptRunnerGlobalScope InterestGroupBiddingScriptRunnerGlobalScope::clone() const noexcept { return *this; }
emlite::Val InterestGroupBiddingScriptRunnerGlobalScope::instance() noexcept { return emlite::Val::global("InterestGroupBiddingScriptRunnerGlobalScope"); }
InterestGroupBiddingScriptRunnerGlobalScope::InterestGroupBiddingScriptRunnerGlobalScope(Handle h) noexcept : InterestGroupBiddingAndScoringScriptRunnerGlobalScope(emlite::Val::take_ownership(h)) {}
InterestGroupBiddingScriptRunnerGlobalScope::InterestGroupBiddingScriptRunnerGlobalScope(const emlite::Val &val) noexcept: InterestGroupBiddingAndScoringScriptRunnerGlobalScope(val) {}

bool InterestGroupBiddingScriptRunnerGlobalScope::setBid() {
    return InterestGroupBiddingAndScoringScriptRunnerGlobalScope::call("setBid").as<bool>();
}

bool InterestGroupBiddingScriptRunnerGlobalScope::setBid(const jsbind::Any& oneOrManyBids) {
    return InterestGroupBiddingAndScoringScriptRunnerGlobalScope::call("setBid", oneOrManyBids).as<bool>();
}

jsbind::Undefined InterestGroupBiddingScriptRunnerGlobalScope::setPriority(double priority) {
    return InterestGroupBiddingAndScoringScriptRunnerGlobalScope::call("setPriority", priority).as<jsbind::Undefined>();
}

jsbind::Undefined InterestGroupBiddingScriptRunnerGlobalScope::setPrioritySignalsOverride(const jsbind::String& key) {
    return InterestGroupBiddingAndScoringScriptRunnerGlobalScope::call("setPrioritySignalsOverride", key).as<jsbind::Undefined>();
}

jsbind::Undefined InterestGroupBiddingScriptRunnerGlobalScope::setPrioritySignalsOverride(const jsbind::String& key, double priority) {
    return InterestGroupBiddingAndScoringScriptRunnerGlobalScope::call("setPrioritySignalsOverride", key, priority).as<jsbind::Undefined>();
}


} // namespace webbind