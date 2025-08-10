#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class USBDevice;

/// Dictionary type USBConnectionEventInit
class USBConnectionEventInit : public EventInit {
  explicit USBConnectionEventInit(Handle h) noexcept;
public:
    static USBConnectionEventInit take_ownership(Handle h) noexcept;
    explicit USBConnectionEventInit(const emlite::Val &val) noexcept;
    USBConnectionEventInit() noexcept;
    [[nodiscard]] USBConnectionEventInit clone() const noexcept;
    /// Getter of the `device` attribute.
    [[nodiscard]] USBDevice device() const;
    /// Setter of the `device` attribute.
    void device(const USBDevice& value);
};

} // namespace webbind