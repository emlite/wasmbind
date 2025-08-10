#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type IntegrityViolationReportBody
/// [`IntegrityViolationReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/IntegrityViolationReportBody)
class IntegrityViolationReportBody : public ReportBody {
  explicit IntegrityViolationReportBody(Handle h) noexcept;
public:
    static IntegrityViolationReportBody take_ownership(Handle h) noexcept;
    explicit IntegrityViolationReportBody(const emlite::Val &val) noexcept;
    IntegrityViolationReportBody() noexcept;
    [[nodiscard]] IntegrityViolationReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String documentURL() const;
    void documentURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String blockedURL() const;
    void blockedURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String destination() const;
    void destination(const jsbind::String& value);
    [[nodiscard]] bool reportOnly() const;
    void reportOnly(bool value);
};

} // namespace webbind