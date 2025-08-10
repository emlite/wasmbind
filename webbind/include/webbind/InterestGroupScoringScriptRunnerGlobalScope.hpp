#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "InterestGroupBiddingAndScoringScriptRunnerGlobalScope.hpp"

namespace webbind {

/// Interface InterestGroupScoringScriptRunnerGlobalScope
/// [`InterestGroupScoringScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScoringScriptRunnerGlobalScope)
class InterestGroupScoringScriptRunnerGlobalScope : public InterestGroupBiddingAndScoringScriptRunnerGlobalScope {
    explicit InterestGroupScoringScriptRunnerGlobalScope(Handle h) noexcept;
public:
    explicit InterestGroupScoringScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupScoringScriptRunnerGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] InterestGroupScoringScriptRunnerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind