#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type InterventionReportBody
class InterventionReportBody : public ReportBody {
  explicit InterventionReportBody(Handle h) noexcept;
public:
    static InterventionReportBody take_ownership(Handle h) noexcept;
    explicit InterventionReportBody(const emlite::Val &val) noexcept;
    InterventionReportBody() noexcept;
    [[nodiscard]] InterventionReportBody clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::String message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::String& value);
    /// Getter of the `sourceFile` attribute.
    [[nodiscard]] jsbind::String sourceFile() const;
    /// Setter of the `sourceFile` attribute.
    void sourceFile(const jsbind::String& value);
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