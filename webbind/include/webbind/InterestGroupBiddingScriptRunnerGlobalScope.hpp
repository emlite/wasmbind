#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.hpp"
#include "enums.hpp"


/// The InterestGroupBiddingScriptRunnerGlobalScope class.
/// [`InterestGroupBiddingScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope)
class InterestGroupBiddingScriptRunnerGlobalScope : public InterestGroupBiddingAndScoringScriptRunnerGlobalScope {
    explicit InterestGroupBiddingScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupBiddingScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupBiddingScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] InterestGroupBiddingScriptRunnerGlobalScope clone() const noexcept;
    /// The setBid method.
    /// [`InterestGroupBiddingScriptRunnerGlobalScope.setBid`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope/setBid)
    bool setBid();
    /// The setBid method.
    /// [`InterestGroupBiddingScriptRunnerGlobalScope.setBid`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope/setBid)
    bool setBid(const jsbind::Any& oneOrManyBids);
    /// The setPriority method.
    /// [`InterestGroupBiddingScriptRunnerGlobalScope.setPriority`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope/setPriority)
    jsbind::Undefined setPriority(double priority);
    /// The setPrioritySignalsOverride method.
    /// [`InterestGroupBiddingScriptRunnerGlobalScope.setPrioritySignalsOverride`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope/setPrioritySignalsOverride)
    jsbind::Undefined setPrioritySignalsOverride(const jsbind::String& key);
    /// The setPrioritySignalsOverride method.
    /// [`InterestGroupBiddingScriptRunnerGlobalScope.setPrioritySignalsOverride`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingScriptRunnerGlobalScope/setPrioritySignalsOverride)
    jsbind::Undefined setPrioritySignalsOverride(const jsbind::String& key, double priority);
};

