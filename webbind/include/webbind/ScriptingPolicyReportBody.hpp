#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type ScriptingPolicyReportBody
class ScriptingPolicyReportBody : public ReportBody {
  explicit ScriptingPolicyReportBody(Handle h) noexcept;
public:
    static ScriptingPolicyReportBody take_ownership(Handle h) noexcept;
    explicit ScriptingPolicyReportBody(const emlite::Val &val) noexcept;
    ScriptingPolicyReportBody() noexcept;
    [[nodiscard]] ScriptingPolicyReportBody clone() const noexcept;
    /// Getter of the `violationType` attribute.
    [[nodiscard]] jsbind::String violationType() const;
    /// Setter of the `violationType` attribute.
    void violationType(const jsbind::String& value);
    /// Getter of the `violationURL` attribute.
    [[nodiscard]] jsbind::String violationURL() const;
    /// Setter of the `violationURL` attribute.
    void violationURL(const jsbind::String& value);
    /// Getter of the `violationSample` attribute.
    [[nodiscard]] jsbind::String violationSample() const;
    /// Setter of the `violationSample` attribute.
    void violationSample(const jsbind::String& value);
    /// Getter of the `lineno` attribute.
    [[nodiscard]] unsigned long lineno() const;
    /// Setter of the `lineno` attribute.
    void lineno(unsigned long value);
    /// Getter of the `colno` attribute.
    [[nodiscard]] unsigned long colno() const;
    /// Setter of the `colno` attribute.
    void colno(unsigned long value);
};

} // namespace webbind