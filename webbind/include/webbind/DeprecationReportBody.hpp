#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type DeprecationReportBody
/// [`DeprecationReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/DeprecationReportBody)
class DeprecationReportBody : public ReportBody {
  explicit DeprecationReportBody(Handle h) noexcept;
public:
    static DeprecationReportBody take_ownership(Handle h) noexcept;
    explicit DeprecationReportBody(const emlite::Val &val) noexcept;
    DeprecationReportBody() noexcept;
    [[nodiscard]] DeprecationReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::Object anticipatedRemoval() const;
    void anticipatedRemoval(const jsbind::Object& value);
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