#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"

class USBDevice;


class USBPermissionResult : public PermissionStatus {
    explicit USBPermissionResult(Handle h) noexcept;

public:
    explicit USBPermissionResult(const emlite::Val &val) noexcept;
    static USBPermissionResult take_ownership(Handle h) noexcept;

    USBPermissionResult clone() const noexcept;
    jsbind::TypedArray<USBDevice> devices() const;
    void devices(const jsbind::TypedArray<USBDevice>& value);
};

