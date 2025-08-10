#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type Report
/// [`Report`](https://developer.mozilla.org/en-US/docs/Web/API/Report)
class Report : public emlite::Val {
  explicit Report(Handle h) noexcept;
public:
    static Report take_ownership(Handle h) noexcept;
    explicit Report(const emlite::Val &val) noexcept;
    Report() noexcept;
    [[nodiscard]] Report clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] ReportBody body() const;
    void body(const ReportBody& value);
};

} // namespace webbind