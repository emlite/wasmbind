#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type DeprecationReportBody
class DeprecationReportBody : public ReportBody {
  explicit DeprecationReportBody(Handle h) noexcept;
public:
    static DeprecationReportBody take_ownership(Handle h) noexcept;
    explicit DeprecationReportBody(const emlite::Val &val) noexcept;
    DeprecationReportBody() noexcept;
    [[nodiscard]] DeprecationReportBody clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `anticipatedRemoval` attribute.
    [[nodiscard]] jsbind::Object anticipatedRemoval() const;
    /// Setter of the `anticipatedRemoval` attribute.
    void anticipatedRemoval(const jsbind::Object& value);
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