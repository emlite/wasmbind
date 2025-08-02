#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "InterestGroupScriptRunnerGlobalScope.hpp"
#include "enums.hpp"


/// The InterestGroupReportingScriptRunnerGlobalScope class.
/// [`InterestGroupReportingScriptRunnerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupReportingScriptRunnerGlobalScope)
class InterestGroupReportingScriptRunnerGlobalScope : public InterestGroupScriptRunnerGlobalScope {
    explicit InterestGroupReportingScriptRunnerGlobalScope(Handle h) noexcept;

public:
    explicit InterestGroupReportingScriptRunnerGlobalScope(const emlite::Val &val) noexcept;
    static InterestGroupReportingScriptRunnerGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] InterestGroupReportingScriptRunnerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The sendReportTo method.
    /// [`InterestGroupReportingScriptRunnerGlobalScope.sendReportTo`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupReportingScriptRunnerGlobalScope/sendReportTo)
    jsbind::Undefined sendReportTo(const jsbind::String& url);
    /// The registerAdBeacon method.
    /// [`InterestGroupReportingScriptRunnerGlobalScope.registerAdBeacon`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupReportingScriptRunnerGlobalScope/registerAdBeacon)
    jsbind::Undefined registerAdBeacon(const jsbind::Record<jsbind::String, jsbind::String>& map);
    /// The registerAdMacro method.
    /// [`InterestGroupReportingScriptRunnerGlobalScope.registerAdMacro`](https://developer.mozilla.org/en-US/docs/Web/API/InterestGroupReportingScriptRunnerGlobalScope/registerAdMacro)
    jsbind::Undefined registerAdMacro(const jsbind::String& name, const jsbind::String& value);
};

