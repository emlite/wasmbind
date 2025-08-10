#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type InterventionReportBody
/// [`InterventionReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/InterventionReportBody)
class InterventionReportBody : public ReportBody {
  explicit InterventionReportBody(Handle h) noexcept;
public:
    static InterventionReportBody take_ownership(Handle h) noexcept;
    explicit InterventionReportBody(const emlite::Val &val) noexcept;
    InterventionReportBody() noexcept;
    [[nodiscard]] InterventionReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
    [[nodiscard]] jsbind::String sourceFile() const;
    void sourceFile(const jsbind::String& value);
    [[nodiscard]] unsigned long lineNumber() const;
    void lineNumber(unsigned long value);
    [[nodiscard]] unsigned long columnNumber() const;
    void columnNumber(unsigned long value);
};

} // namespace webbind