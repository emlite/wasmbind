#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GenerateTestReportParameters
class GenerateTestReportParameters : public emlite::Val {
  explicit GenerateTestReportParameters(Handle h) noexcept;
public:
    static GenerateTestReportParameters take_ownership(Handle h) noexcept;
    explicit GenerateTestReportParameters(const emlite::Val &val) noexcept;
    GenerateTestReportParameters() noexcept;
    [[nodiscard]] GenerateTestReportParameters clone() const noexcept;
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::String message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::String& value);
    /// Getter of the `group` attribute.
    [[nodiscard]] jsbind::String group() const;
    /// Setter of the `group` attribute.
    void group(const jsbind::String& value);
};

} // namespace webbind