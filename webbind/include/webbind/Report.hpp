#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ReportBody.hpp"

namespace webbind {

/// Dictionary type Report
class Report : public emlite::Val {
  explicit Report(Handle h) noexcept;
public:
    static Report take_ownership(Handle h) noexcept;
    explicit Report(const emlite::Val &val) noexcept;
    Report() noexcept;
    [[nodiscard]] Report clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `body` attribute.
    [[nodiscard]] ReportBody body() const;
    /// Setter of the `body` attribute.
    void body(const ReportBody& value);
};

} // namespace webbind