#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GenerateTestReportParameters
/// [`GenerateTestReportParameters`](https://developer.mozilla.org/en-US/docs/Web/API/GenerateTestReportParameters)
class GenerateTestReportParameters : public emlite::Val {
  explicit GenerateTestReportParameters(Handle h) noexcept;
public:
    static GenerateTestReportParameters take_ownership(Handle h) noexcept;
    explicit GenerateTestReportParameters(const emlite::Val &val) noexcept;
    GenerateTestReportParameters() noexcept;
    [[nodiscard]] GenerateTestReportParameters clone() const noexcept;
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
    [[nodiscard]] jsbind::String group() const;
    void group(const jsbind::String& value);
};

} // namespace webbind