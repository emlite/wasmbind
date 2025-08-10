#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type CameraDevicePermissionDescriptor
/// [`CameraDevicePermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/CameraDevicePermissionDescriptor)
class CameraDevicePermissionDescriptor : public PermissionDescriptor {
  explicit CameraDevicePermissionDescriptor(Handle h) noexcept;
public:
    static CameraDevicePermissionDescriptor take_ownership(Handle h) noexcept;
    explicit CameraDevicePermissionDescriptor(const emlite::Val &val) noexcept;
    CameraDevicePermissionDescriptor() noexcept;
    [[nodiscard]] CameraDevicePermissionDescriptor clone() const noexcept;
    [[nodiscard]] bool panTiltZoom() const;
    void panTiltZoom(bool value);
};

} // namespace webbind