#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type DeviceOrientationEventInit
class DeviceOrientationEventInit : public EventInit {
  explicit DeviceOrientationEventInit(Handle h) noexcept;
public:
    static DeviceOrientationEventInit take_ownership(Handle h) noexcept;
    explicit DeviceOrientationEventInit(const emlite::Val &val) noexcept;
    DeviceOrientationEventInit() noexcept;
    [[nodiscard]] DeviceOrientationEventInit clone() const noexcept;
    /// Getter of the `alpha` attribute.
    [[nodiscard]] double alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(double value);
    /// Getter of the `beta` attribute.
    [[nodiscard]] double beta() const;
    /// Setter of the `beta` attribute.
    void beta(double value);
    /// Getter of the `gamma` attribute.
    [[nodiscard]] double gamma() const;
    /// Setter of the `gamma` attribute.
    void gamma(double value);
    /// Getter of the `absolute` attribute.
    [[nodiscard]] bool absolute() const;
    /// Setter of the `absolute` attribute.
    void absolute(bool value);
};

} // namespace webbind