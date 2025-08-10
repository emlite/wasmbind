#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLContextOptions
class MLContextOptions : public emlite::Val {
  explicit MLContextOptions(Handle h) noexcept;
public:
    static MLContextOptions take_ownership(Handle h) noexcept;
    explicit MLContextOptions(const emlite::Val &val) noexcept;
    MLContextOptions() noexcept;
    [[nodiscard]] MLContextOptions clone() const noexcept;
    /// Getter of the `powerPreference` attribute.
    [[nodiscard]] MLPowerPreference powerPreference() const;
    /// Setter of the `powerPreference` attribute.
    void powerPreference(const MLPowerPreference& value);
};

} // namespace webbind