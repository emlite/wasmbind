#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type CrashReportBody
class CrashReportBody : public ReportBody {
  explicit CrashReportBody(Handle h) noexcept;
public:
    static CrashReportBody take_ownership(Handle h) noexcept;
    explicit CrashReportBody(const emlite::Val &val) noexcept;
    CrashReportBody() noexcept;
    [[nodiscard]] CrashReportBody clone() const noexcept;
    /// Getter of the `reason` attribute.
    [[nodiscard]] jsbind::String reason() const;
    /// Setter of the `reason` attribute.
    void reason(const jsbind::String& value);
    /// Getter of the `stack` attribute.
    [[nodiscard]] jsbind::String stack() const;
    /// Setter of the `stack` attribute.
    void stack(const jsbind::String& value);
    /// Getter of the `is_top_level` attribute.
    [[nodiscard]] bool is_top_level() const;
    /// Setter of the `is_top_level` attribute.
    void is_top_level(bool value);
    /// Getter of the `page_visibility` attribute.
    [[nodiscard]] DocumentVisibilityState page_visibility() const;
    /// Setter of the `page_visibility` attribute.
    void page_visibility(const DocumentVisibilityState& value);
};

} // namespace webbind