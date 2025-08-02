#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PrivateAggregation;
class ProtectedAudienceUtilities;


/// The InterestGroupScriptRunnerGlobalScope class.
/// [`InterestGroupScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope)
class InterestGroupScriptRunnerGlobalScope : public emlite::Val {
    explicit InterestGroupScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] InterestGroupScriptRunnerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `privateAggregation` attribute.
    /// [`InterestGroupScriptRunnerGlobalScope.privateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope/privateAggregation)
    [[nodiscard]] PrivateAggregation privateAggregation() const;
    /// Getter of the `protectedAudience` attribute.
    /// [`InterestGroupScriptRunnerGlobalScope.protectedAudience`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupScriptRunnerGlobalScope/protectedAudience)
    [[nodiscard]] ProtectedAudienceUtilities protectedAudience() const;
};

