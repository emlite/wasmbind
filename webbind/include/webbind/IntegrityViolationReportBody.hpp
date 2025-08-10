#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type IntegrityViolationReportBody
class IntegrityViolationReportBody : public ReportBody {
  explicit IntegrityViolationReportBody(Handle h) noexcept;
public:
    static IntegrityViolationReportBody take_ownership(Handle h) noexcept;
    explicit IntegrityViolationReportBody(const emlite::Val &val) noexcept;
    IntegrityViolationReportBody() noexcept;
    [[nodiscard]] IntegrityViolationReportBody clone() const noexcept;
    /// Getter of the `documentURL` attribute.
    [[nodiscard]] jsbind::String documentURL() const;
    /// Setter of the `documentURL` attribute.
    void documentURL(const jsbind::String& value);
    /// Getter of the `blockedURL` attribute.
    [[nodiscard]] jsbind::String blockedURL() const;
    /// Setter of the `blockedURL` attribute.
    void blockedURL(const jsbind::String& value);
    /// Getter of the `destination` attribute.
    [[nodiscard]] jsbind::String destination() const;
    /// Setter of the `destination` attribute.
    void destination(const jsbind::String& value);
    /// Getter of the `reportOnly` attribute.
    [[nodiscard]] bool reportOnly() const;
    /// Setter of the `reportOnly` attribute.
    void reportOnly(bool value);
};

} // namespace webbind