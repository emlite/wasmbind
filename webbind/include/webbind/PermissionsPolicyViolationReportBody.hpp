#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type PermissionsPolicyViolationReportBody
class PermissionsPolicyViolationReportBody : public ReportBody {
  explicit PermissionsPolicyViolationReportBody(Handle h) noexcept;
public:
    static PermissionsPolicyViolationReportBody take_ownership(Handle h) noexcept;
    explicit PermissionsPolicyViolationReportBody(const emlite::Val &val) noexcept;
    PermissionsPolicyViolationReportBody() noexcept;
    [[nodiscard]] PermissionsPolicyViolationReportBody clone() const noexcept;
    /// Getter of the `featureId` attribute.
    [[nodiscard]] jsbind::String featureId() const;
    /// Setter of the `featureId` attribute.
    void featureId(const jsbind::String& value);
    /// Getter of the `sourceFile` attribute.
    [[nodiscard]] jsbind::String sourceFile() const;
    /// Setter of the `sourceFile` attribute.
    void sourceFile(const jsbind::String& value);
    /// Getter of the `lineNumber` attribute.
    [[nodiscard]] long lineNumber() const;
    /// Setter of the `lineNumber` attribute.
    void lineNumber(long value);
    /// Getter of the `columnNumber` attribute.
    [[nodiscard]] long columnNumber() const;
    /// Setter of the `columnNumber` attribute.
    void columnNumber(long value);
    /// Getter of the `disposition` attribute.
    [[nodiscard]] jsbind::String disposition() const;
    /// Setter of the `disposition` attribute.
    void disposition(const jsbind::String& value);
    /// Getter of the `allowAttribute` attribute.
    [[nodiscard]] jsbind::String allowAttribute() const;
    /// Setter of the `allowAttribute` attribute.
    void allowAttribute(const jsbind::String& value);
    /// Getter of the `srcAttribute` attribute.
    [[nodiscard]] jsbind::String srcAttribute() const;
    /// Setter of the `srcAttribute` attribute.
    void srcAttribute(const jsbind::String& value);
};

} // namespace webbind