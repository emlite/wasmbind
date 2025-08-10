#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

class USBDeviceFilter;

/// Dictionary type USBPermissionDescriptor
class USBPermissionDescriptor : public PermissionDescriptor {
  explicit USBPermissionDescriptor(Handle h) noexcept;
public:
    static USBPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit USBPermissionDescriptor(const emlite::Val &val) noexcept;
    USBPermissionDescriptor() noexcept;
    [[nodiscard]] USBPermissionDescriptor clone() const noexcept;
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<USBDeviceFilter>& value);
    /// Getter of the `exclusionFilters` attribute.
    [[nodiscard]] jsbind::TypedArray<USBDeviceFilter> exclusionFilters() const;
    /// Setter of the `exclusionFilters` attribute.
    void exclusionFilters(const jsbind::TypedArray<USBDeviceFilter>& value);
};

} // namespace webbind