#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class USBDevice;
class USBDeviceRequestOptions;


class USBDeviceRequestOptions : public emlite::Val {
  explicit USBDeviceRequestOptions(Handle h) noexcept;
public:
    static USBDeviceRequestOptions take_ownership(Handle h) noexcept;
    explicit USBDeviceRequestOptions(const emlite::Val &val) noexcept;
    USBDeviceRequestOptions() noexcept;
    [[nodiscard]] USBDeviceRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The USB class.
/// [`USB`](https://developer.mozilla.org/en-US/docs/Web/API/USB)
class USB : public EventTarget {
    explicit USB(Handle h) noexcept;

public:
    explicit USB(const emlite::Val &val) noexcept;
    static USB take_ownership(Handle h) noexcept;

    [[nodiscard]] USB clone() const noexcept;
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

