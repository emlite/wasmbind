#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PrivateAggregation;
class ProtectedAudienceUtilities;


class InterestGroupScriptRunnerGlobalScope : public emlite::Val {
    explicit InterestGroupScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    InterestGroupScriptRunnerGlobalScope clone() const noexcept;
    PrivateAggregation privateAggregation() const;
    ProtectedAudienceUtilities protectedAudience() const;
};

