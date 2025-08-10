#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type ScriptingPolicyReportBody
/// [`ScriptingPolicyReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptingPolicyReportBody)
class ScriptingPolicyReportBody : public ReportBody {
  explicit ScriptingPolicyReportBody(Handle h) noexcept;
public:
    static ScriptingPolicyReportBody take_ownership(Handle h) noexcept;
    explicit ScriptingPolicyReportBody(const emlite::Val &val) noexcept;
    ScriptingPolicyReportBody() noexcept;
    [[nodiscard]] ScriptingPolicyReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String violationType() const;
    void violationType(const jsbind::String& value);
    [[nodiscard]] jsbind::String violationURL() const;
    void violationURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String violationSample() const;
    void violationSample(const jsbind::String& value);
    [[nodiscard]] unsigned long lineno() const;
    void lineno(unsigned long value);
    [[nodiscard]] unsigned long colno() const;
    void colno(unsigned long value);
};

} // namespace webbind