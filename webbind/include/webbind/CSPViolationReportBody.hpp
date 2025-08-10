#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type CSPViolationReportBody
class CSPViolationReportBody : public ReportBody {
  explicit CSPViolationReportBody(Handle h) noexcept;
public:
    static CSPViolationReportBody take_ownership(Handle h) noexcept;
    explicit CSPViolationReportBody(const emlite::Val &val) noexcept;
    CSPViolationReportBody() noexcept;
    [[nodiscard]] CSPViolationReportBody clone() const noexcept;
    /// Getter of the `documentURL` attribute.
    [[nodiscard]] jsbind::String documentURL() const;
    /// Setter of the `documentURL` attribute.
    void documentURL(const jsbind::String& value);
    /// Getter of the `referrer` attribute.
    [[nodiscard]] jsbind::String referrer() const;
    /// Setter of the `referrer` attribute.
    void referrer(const jsbind::String& value);
    /// Getter of the `blockedURL` attribute.
    [[nodiscard]] jsbind::String blockedURL() const;
    /// Setter of the `blockedURL` attribute.
    void blockedURL(const jsbind::String& value);
    /// Getter of the `effectiveDirective` attribute.
    [[nodiscard]] jsbind::String effectiveDirective() const;
    /// Setter of the `effectiveDirective` attribute.
    void effectiveDirective(const jsbind::String& value);
    /// Getter of the `originalPolicy` attribute.
    [[nodiscard]] jsbind::String originalPolicy() const;
    /// Setter of the `originalPolicy` attribute.
    void originalPolicy(const jsbind::String& value);
    /// Getter of the `sourceFile` attribute.
    [[nodiscard]] jsbind::String sourceFile() const;
    /// Setter of the `sourceFile` attribute.
    void sourceFile(const jsbind::String& value);
    /// Getter of the `sample` attribute.
    [[nodiscard]] jsbind::String sample() const;
    /// Setter of the `sample` attribute.
    void sample(const jsbind::String& value);
    /// Getter of the `disposition` attribute.
    [[nodiscard]] SecurityPolicyViolationEventDisposition disposition() const;
    /// Setter of the `disposition` attribute.
    void disposition(const SecurityPolicyViolationEventDisposition& value);
    /// Getter of the `statusCode` attribute.
    [[nodiscard]] unsigned short statusCode() const;
    /// Setter of the `statusCode` attribute.
    void statusCode(unsigned short value);
    /// Getter of the `lineNumber` attribute.
    [[nodiscard]] unsigned long lineNumber() const;
    /// Setter of the `lineNumber` attribute.
    void lineNumber(unsigned long value);
    /// Getter of the `columnNumber` attribute.
    [[nodiscard]] unsigned long columnNumber() const;
    /// Setter of the `columnNumber` attribute.
    void columnNumber(unsigned long value);
};

} // namespace webbind