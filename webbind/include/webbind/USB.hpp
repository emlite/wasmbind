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
    USBDeviceRequestOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value);
};

class USB : public EventTarget {
    explicit USB(Handle h) noexcept;

public:
    explicit USB(const emlite::Val &val) noexcept;
    static USB take_ownership(Handle h) noexcept;

    USB clone() const noexcept;
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
    jsbind::Any ondisconnect() const;
    void ondisconnect(const jsbind::Any& value);
    jsbind::Promise<jsbind::TypedArray<USBDevice>> getDevices();
    jsbind::Promise<USBDevice> requestDevice(const USBDeviceRequestOptions& options);
};

