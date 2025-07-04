#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.hpp"
#include "enums.hpp"


class InterestGroupScoringScriptRunnerGlobalScope : public InterestGroupBiddingAndScoringScriptRunnerGlobalScope {
    explicit InterestGroupScoringScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupScoringScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    InterestGroupScoringScriptRunnerGlobalScope clone() const noexcept;
};

