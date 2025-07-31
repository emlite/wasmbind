#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.hpp"
#include "enums.hpp"


/// The InterestGroupScoringScriptRunnerGlobalScope class.
/// [`InterestGroupScoringScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScoringScriptRunnerGlobalScope)
class InterestGroupScoringScriptRunnerGlobalScope : public InterestGroupBiddingAndScoringScriptRunnerGlobalScope {
    explicit InterestGroupScoringScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupScoringScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] InterestGroupScoringScriptRunnerGlobalScope clone() const noexcept;
};

