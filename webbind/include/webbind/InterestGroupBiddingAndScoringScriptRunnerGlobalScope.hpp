#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupScriptRunnerGlobalScope.hpp"
#include "enums.hpp"

class ForDebuggingOnly;
class RealTimeReporting;


class InterestGroupBiddingAndScoringScriptRunnerGlobalScope : public InterestGroupScriptRunnerGlobalScope {
    explicit InterestGroupBiddingAndScoringScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupBiddingAndScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupBiddingAndScoringScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    InterestGroupBiddingAndScoringScriptRunnerGlobalScope clone() const noexcept;
    ForDebuggingOnly forDebuggingOnly() const;
    RealTimeReporting realTimeReporting() const;
};

