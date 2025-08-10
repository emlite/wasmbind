#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type XRSessionSupportedPermissionDescriptor
class XRSessionSupportedPermissionDescriptor : public PermissionDescriptor {
  explicit XRSessionSupportedPermissionDescriptor(Handle h) noexcept;
public:
    static XRSessionSupportedPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit XRSessionSupportedPermissionDescriptor(const emlite::Val &val) noexcept;
    XRSessionSupportedPermissionDescriptor() noexcept;
    [[nodiscard]] XRSessionSupportedPermissionDescriptor clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] XRSessionMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const XRSessionMode& value);
};

} // namespace webbind