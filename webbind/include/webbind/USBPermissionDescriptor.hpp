#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"
#include "USBDeviceFilter.hpp"

namespace webbind {

/// Dictionary type USBPermissionDescriptor
/// [`USBPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/USBPermissionDescriptor)
class USBPermissionDescriptor : public PermissionDescriptor {
  explicit USBPermissionDescriptor(Handle h) noexcept;
public:
    static USBPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit USBPermissionDescriptor(const emlite::Val &val) noexcept;
    USBPermissionDescriptor() noexcept;
    [[nodiscard]] USBPermissionDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> filters() const;
    void filters(const jsbind::TypedArray<USBDeviceFilter>& value);
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<USBDeviceFilter>& value);
};

} // namespace webbind