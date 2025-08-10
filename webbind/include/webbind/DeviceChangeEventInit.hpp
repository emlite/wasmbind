#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class MediaDeviceInfo;

/// Dictionary type DeviceChangeEventInit
/// [`DeviceChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEventInit)
class DeviceChangeEventInit : public EventInit {
  explicit DeviceChangeEventInit(Handle h) noexcept;
public:
    static DeviceChangeEventInit take_ownership(Handle h) noexcept;
    explicit DeviceChangeEventInit(const emlite::Val &val) noexcept;
    DeviceChangeEventInit() noexcept;
    [[nodiscard]] DeviceChangeEventInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<MediaDeviceInfo> devices() const;
    void devices(const jsbind::TypedArray<MediaDeviceInfo>& value);
};

} // namespace webbind