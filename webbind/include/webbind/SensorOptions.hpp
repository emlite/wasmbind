#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SensorOptions
class SensorOptions : public emlite::Val {
  explicit SensorOptions(Handle h) noexcept;
public:
    static SensorOptions take_ownership(Handle h) noexcept;
    explicit SensorOptions(const emlite::Val &val) noexcept;
    SensorOptions() noexcept;
    [[nodiscard]] SensorOptions clone() const noexcept;
    /// Getter of the `frequency` attribute.
    [[nodiscard]] double frequency() const;
    /// Setter of the `frequency` attribute.
    void frequency(double value);
};

} // namespace webbind