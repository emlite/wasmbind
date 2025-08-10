#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLContextOptions
/// [`MLContextOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLContextOptions)
class MLContextOptions : public emlite::Val {
  explicit MLContextOptions(Handle h) noexcept;
public:
    static MLContextOptions take_ownership(Handle h) noexcept;
    explicit MLContextOptions(const emlite::Val &val) noexcept;
    MLContextOptions() noexcept;
    [[nodiscard]] MLContextOptions clone() const noexcept;
    [[nodiscard]] MLPowerPreference powerPreference() const;
    void powerPreference(const MLPowerPreference& value);
};

} // namespace webbind