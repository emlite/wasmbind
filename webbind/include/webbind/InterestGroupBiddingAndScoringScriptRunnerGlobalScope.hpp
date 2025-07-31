#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupScriptRunnerGlobalScope.hpp"
#include "enums.hpp"

class ForDebuggingOnly;
class RealTimeReporting;


/// The InterestGroupBiddingAndScoringScriptRunnerGlobalScope class.
/// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope)
class InterestGroupBiddingAndScoringScriptRunnerGlobalScope : public InterestGroupScriptRunnerGlobalScope {
    explicit InterestGroupBiddingAndScoringScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupBiddingAndScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupBiddingAndScoringScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] InterestGroupBiddingAndScoringScriptRunnerGlobalScope clone() const noexcept;
    /// Getter of the `forDebuggingOnly` attribute.
    /// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope.forDebuggingOnly`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope/forDebuggingOnly)
    [[nodiscard]] ForDebuggingOnly forDebuggingOnly() const;
    /// Getter of the `realTimeReporting` attribute.
    /// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope.realTimeReporting`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope/realTimeReporting)
    [[nodiscard]] RealTimeReporting realTimeReporting() const;
};

