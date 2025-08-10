#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type CrashReportBody
/// [`CrashReportBody`](https://developer.mozilla.org/en-US/docs/Web/API/CrashReportBody)
class CrashReportBody : public ReportBody {
  explicit CrashReportBody(Handle h) noexcept;
public:
    static CrashReportBody take_ownership(Handle h) noexcept;
    explicit CrashReportBody(const emlite::Val &val) noexcept;
    CrashReportBody() noexcept;
    [[nodiscard]] CrashReportBody clone() const noexcept;
    [[nodiscard]] jsbind::String reason() const;
    void reason(const jsbind::String& value);
    [[nodiscard]] jsbind::String stack() const;
    void stack(const jsbind::String& value);
    [[nodiscard]] bool is_top_level() const;
    void is_top_level(bool value);
    [[nodiscard]] DocumentVisibilityState page_visibility() const;
    void page_visibility(const DocumentVisibilityState& value);
};

} // namespace webbind