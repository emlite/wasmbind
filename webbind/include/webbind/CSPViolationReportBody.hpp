#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type CSPViolationReportBody
/// [`CSPViolationReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/CSPViolationReportBody)
class CSPViolationReportBody : public ReportBody {
  explicit CSPViolationReportBody(Handle h) noexcept;
public:
    static CSPViolationReportBody take_ownership(Handle h) noexcept;
    explicit CSPViolationReportBody(const emlite::Val &val) noexcept;
    CSPViolationReportBody() noexcept;
    [[nodiscard]] CSPViolationReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String documentURL() const;
    void documentURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String referrer() const;
    void referrer(const jsbind::String& value);
    [[nodiscard]] jsbind::String blockedURL() const;
    void blockedURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String effectiveDirective() const;
    void effectiveDirective(const jsbind::String& value);
    [[nodiscard]] jsbind::String originalPolicy() const;
    void originalPolicy(const jsbind::String& value);
    [[nodiscard]] jsbind::String sourceFile() const;
    void sourceFile(const jsbind::String& value);
    [[nodiscard]] jsbind::String sample() const;
    void sample(const jsbind::String& value);
    [[nodiscard]] SecurityPolicyViolationEventDisposition disposition() const;
    void disposition(const SecurityPolicyViolationEventDisposition& value);
    [[nodiscard]] unsigned short statusCode() const;
    void statusCode(unsigned short value);
    [[nodiscard]] unsigned long lineNumber() const;
    void lineNumber(unsigned long value);
    [[nodiscard]] unsigned long columnNumber() const;
    void columnNumber(unsigned long value);
};

} // namespace webbind