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
    HIDDeviceRequestOptions clone() const noexcept;
    jsbind::Sequence<jsbind::Any> filters() const;
    void filters(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> exclusionFilters() const;
    void exclusionFilters(const jsbind::Sequence<jsbind::Any>& value);
};

class HID : public EventTarget {
    explicit HID(Handle h) noexcept;

public:
    explicit HID(const emlite::Val &val) noexcept;
    static HID take_ownership(Handle h) noexcept;

    HID clone() const noexcept;
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
    jsbind::Any ondisconnect() const;
    void ondisconnect(const jsbind::Any& value);
    jsbind::Promise<jsbind::Sequence<HIDDevice>> getDevices();
    jsbind::Promise<jsbind::Sequence<HIDDevice>> requestDevice(const HIDDeviceRequestOptions& options);
};

