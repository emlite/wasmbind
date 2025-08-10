#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class PrivateAggregation;
class ProtectedAudienceUtilities;

/// Interface InterestGroupScriptRunnerGlobalScope
/// [`InterestGroupScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope)
class InterestGroupScriptRunnerGlobalScope : public emlite::Val {
    explicit InterestGroupScriptRunnerGlobalScope(Handle h) noexcept;
public:
    explicit InterestGroupScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupScriptRunnerGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] InterestGroupScriptRunnerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`InterestGroupScriptRunnerGlobalScope.privateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope/privateAggregation)
    /// [`InterestGroupScriptRunnerGlobalScope.privateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope/privateAggregation)
    [[nodiscard]] PrivateAggregation privateAggregation() const;
    /// [`InterestGroupScriptRunnerGlobalScope.protectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope/protectedAudience)
    /// [`InterestGroupScriptRunnerGlobalScope.protectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope/protectedAudience)
    [[nodiscard]] ProtectedAudienceUtilities protectedAudience() const;
};

} // namespace webbind