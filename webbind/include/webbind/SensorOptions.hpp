#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SensorOptions
/// [`SensorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SensorOptions)
class SensorOptions : public emlite::Val {
  explicit SensorOptions(Handle h) noexcept;
public:
    static SensorOptions take_ownership(Handle h) noexcept;
    explicit SensorOptions(const emlite::Val &val) noexcept;
    SensorOptions() noexcept;
    [[nodiscard]] SensorOptions clone() const noexcept;
    [[nodiscard]] double frequency() const;
    void frequency(double value);
};

} // namespace webbind