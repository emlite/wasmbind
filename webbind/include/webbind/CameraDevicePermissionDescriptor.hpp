#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type CameraDevicePermissionDescriptor
class CameraDevicePermissionDescriptor : public PermissionDescriptor {
  explicit CameraDevicePermissionDescriptor(Handle h) noexcept;
public:
    static CameraDevicePermissionDescriptor take_ownership(Handle h) noexcept;
    explicit CameraDevicePermissionDescriptor(const emlite::Val &val) noexcept;
    CameraDevicePermissionDescriptor() noexcept;
    [[nodiscard]] CameraDevicePermissionDescriptor clone() const noexcept;
    /// Getter of the `panTiltZoom` attribute.
    [[nodiscard]] bool panTiltZoom() const;
    /// Setter of the `panTiltZoom` attribute.
    void panTiltZoom(bool value);
};

} // namespace webbind