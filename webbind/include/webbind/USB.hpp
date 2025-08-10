#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "USBDeviceRequestOptions.hpp"

namespace webbind {

class USBDevice;

/// Interface USB
/// [`USB`](https://developer.mozilla.org/en-US/docs/Web/API/USB)
class USB : public EventTarget {
    explicit USB(Handle h) noexcept;
public:
    explicit USB(const emlite::Val &val) noexcept;
    static USB take_ownership(Handle h) noexcept;
    [[nodiscard]] USB clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `onconnect` attribute.
    /// [`USB.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/USB/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`USB.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/USB/onconnect)
    void onconnect(const jsbind::Any& value);
    /// Getter of the `ondisconnect` attribute.
    /// [`USB.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/USB/ondisconnect)
    [[nodiscard]] jsbind::Any ondisconnect() const;
    /// Setter of the `ondisconnect` attribute.
    /// [`USB.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/USB/ondisconnect)
    void ondisconnect(const jsbind::Any& value);
    /// The getDevices method.
    /// [`USB.getDevices`](https://developer.mozilla.org/en-US/docs/Web/API/USB/getDevices)
    jsbind::Promise<jsbind::TypedArray<USBDevice>> getDevices();
    /// The requestDevice method.
    /// [`USB.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/USB/requestDevice)
    jsbind::Promise<USBDevice> requestDevice(const USBDeviceRequestOptions& options);
};

} // namespace webbind