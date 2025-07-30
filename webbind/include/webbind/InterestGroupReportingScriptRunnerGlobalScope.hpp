#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupScriptRunnerGlobalScope.hpp"
#include "enums.hpp"


class InterestGroupReportingScriptRunnerGlobalScope : public InterestGroupScriptRunnerGlobalScope {
    explicit InterestGroupReportingScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupReportingScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupReportingScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    InterestGroupReportingScriptRunnerGlobalScope clone() const noexcept;
    jsbind::Undefined sendReportTo(const jsbind::String& url);
    jsbind::Undefined registerAdBeacon(const jsbind::Record<jsbind::String, jsbind::String>& map);
    jsbind::Undefined registerAdMacro(const jsbind::String& name, const jsbind::String& value);
};

