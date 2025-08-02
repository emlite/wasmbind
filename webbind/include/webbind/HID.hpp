#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class HIDDevice;
class HIDDeviceRequestOptions;


class HIDDeviceRequestOptions : public emlite::Val {
  explicit HIDDeviceRequestOptions(Handle h) noexcept;
public:
    static HIDDeviceRequestOptions take_ownership(Handle h) noexcept;
    explicit HIDDeviceRequestOptions(const emlite::Val &val) noexcept;
    HIDDeviceRequestOptions() noexcept;
    [[nodiscard]] HIDDeviceRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The HID class.
/// [`HID`](https://developer.mozilla.org/en-US/docs/Web/API/HID)
class HID : public EventTarget {
    explicit HID(Handle h) noexcept;

public:
    explicit HID(const emlite::Val &val) noexcept;
    static HID take_ownership(Handle h) noexcept;

    [[nodiscard]] HID clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `onconnect` attribute.
    /// [`HID.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/HID/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`HID.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/HID/onconnect)
    void onconnect(const jsbind::Any& value);
    /// Getter of the `ondisconnect` attribute.
    /// [`HID.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/HID/ondisconnect)
    [[nodiscard]] jsbind::Any ondisconnect() const;
    /// Setter of the `ondisconnect` attribute.
    /// [`HID.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/HID/ondisconnect)
    void ondisconnect(const jsbind::Any& value);
    /// The getDevices method.
    /// [`HID.getDevices`](https://developer.mozilla.org/en-US/docs/Web/API/HID/getDevices)
    jsbind::Promise<jsbind::TypedArray<HIDDevice>> getDevices();
    /// The requestDevice method.
    /// [`HID.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/HID/requestDevice)
    jsbind::Promise<jsbind::TypedArray<HIDDevice>> requestDevice(const HIDDeviceRequestOptions& options);
};

