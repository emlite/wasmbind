#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type PermissionsPolicyViolationReportBody
/// [`PermissionsPolicyViolationReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionsPolicyViolationReportBody)
class PermissionsPolicyViolationReportBody : public ReportBody {
  explicit PermissionsPolicyViolationReportBody(Handle h) noexcept;
public:
    static PermissionsPolicyViolationReportBody take_ownership(Handle h) noexcept;
    explicit PermissionsPolicyViolationReportBody(const emlite::Val &val) noexcept;
    PermissionsPolicyViolationReportBody() noexcept;
    [[nodiscard]] PermissionsPolicyViolationReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String featureId() const;
    void featureId(const jsbind::String& value);
    [[nodiscard]] jsbind::String sourceFile() const;
    void sourceFile(const jsbind::String& value);
    [[nodiscard]] long lineNumber() const;
    void lineNumber(long value);
    [[nodiscard]] long columnNumber() const;
    void columnNumber(long value);
    [[nodiscard]] jsbind::String disposition() const;
    void disposition(const jsbind::String& value);
    [[nodiscard]] jsbind::String allowAttribute() const;
    void allowAttribute(const jsbind::String& value);
    [[nodiscard]] jsbind::String srcAttribute() const;
    void srcAttribute(const jsbind::String& value);
};

} // namespace webbind