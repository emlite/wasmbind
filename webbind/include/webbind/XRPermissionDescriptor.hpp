#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type XRPermissionDescriptor
/// [`XRPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/XRPermissionDescriptor)
class XRPermissionDescriptor : public PermissionDescriptor {
  explicit XRPermissionDescriptor(Handle h) noexcept;
public:
    static XRPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit XRPermissionDescriptor(const emlite::Val &val) noexcept;
    XRPermissionDescriptor() noexcept;
    [[nodiscard]] XRPermissionDescriptor clone() const noexcept;
    [[nodiscard]] XRSessionMode mode() const;
    void mode(const XRSessionMode& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredFeatures() const;
    void requiredFeatures(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> optionalFeatures() const;
    void optionalFeatures(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind