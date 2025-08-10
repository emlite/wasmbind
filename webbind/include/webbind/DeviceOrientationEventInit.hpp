#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type DeviceOrientationEventInit
/// [`DeviceOrientationEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEventInit)
class DeviceOrientationEventInit : public EventInit {
  explicit DeviceOrientationEventInit(Handle h) noexcept;
public:
    static DeviceOrientationEventInit take_ownership(Handle h) noexcept;
    explicit DeviceOrientationEventInit(const emlite::Val &val) noexcept;
    DeviceOrientationEventInit() noexcept;
    [[nodiscard]] DeviceOrientationEventInit clone() const noexcept;
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
    [[nodiscard]] double gamma() const;
    void gamma(double value);
    [[nodiscard]] bool absolute() const;
    void absolute(bool value);
};

} // namespace webbind