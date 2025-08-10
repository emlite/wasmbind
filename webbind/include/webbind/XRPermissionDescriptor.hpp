#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type XRPermissionDescriptor
class XRPermissionDescriptor : public PermissionDescriptor {
  explicit XRPermissionDescriptor(Handle h) noexcept;
public:
    static XRPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit XRPermissionDescriptor(const emlite::Val &val) noexcept;
    XRPermissionDescriptor() noexcept;
    [[nodiscard]] XRPermissionDescriptor clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] XRSessionMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const XRSessionMode& value);
    /// Getter of the `requiredFeatures` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredFeatures() const;
    /// Setter of the `requiredFeatures` attribute.
    void requiredFeatures(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `optionalFeatures` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> optionalFeatures() const;
    /// Setter of the `optionalFeatures` attribute.
    void optionalFeatures(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind