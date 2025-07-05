#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.hpp"
#include "enums.hpp"


class InterestGroupBiddingScriptRunnerGlobalScope : public InterestGroupBiddingAndScoringScriptRunnerGlobalScope {
    explicit InterestGroupBiddingScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupBiddingScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupBiddingScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    InterestGroupBiddingScriptRunnerGlobalScope clone() const noexcept;
    bool setBid();
    bool setBid(const jsbind::Any& oneOrManyBids);
    jsbind::Undefined setPriority(double priority);
    jsbind::Undefined setPrioritySignalsOverride(const jsbind::DOMString& key);
    jsbind::Undefined setPrioritySignalsOverride(const jsbind::DOMString& key, double priority);
};

