#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "InterestGroupScriptRunnerGlobalScope.hpp"

namespace webbind {

class ForDebuggingOnly;
class RealTimeReporting;

/// Interface InterestGroupBiddingAndScoringScriptRunnerGlobalScope
/// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope)
class InterestGroupBiddingAndScoringScriptRunnerGlobalScope : public InterestGroupScriptRunnerGlobalScope {
    explicit InterestGroupBiddingAndScoringScriptRunnerGlobalScope(Handle h) noexcept;
public:
    explicit InterestGroupBiddingAndScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupBiddingAndScoringScriptRunnerGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] InterestGroupBiddingAndScoringScriptRunnerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope.forDebuggingOnly`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope/forDebuggingOnly)
    /// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope.forDebuggingOnly`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope/forDebuggingOnly)
    [[nodiscard]] ForDebuggingOnly forDebuggingOnly() const;
    /// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope.realTimeReporting`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope/realTimeReporting)
    /// [`InterestGroupBiddingAndScoringScriptRunnerGlobalScope.realTimeReporting`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupBiddingAndScoringScriptRunnerGlobalScope/realTimeReporting)
    [[nodiscard]] RealTimeReporting realTimeReporting() const;
};

} // namespace webbind