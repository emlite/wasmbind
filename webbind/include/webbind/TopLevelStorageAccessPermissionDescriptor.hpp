#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type TopLevelStorageAccessPermissionDescriptor
class TopLevelStorageAccessPermissionDescriptor : public PermissionDescriptor {
  explicit TopLevelStorageAccessPermissionDescriptor(Handle h) noexcept;
public:
    static TopLevelStorageAccessPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit TopLevelStorageAccessPermissionDescriptor(const emlite::Val &val) noexcept;
    TopLevelStorageAccessPermissionDescriptor() noexcept;
    [[nodiscard]] TopLevelStorageAccessPermissionDescriptor clone() const noexcept;
    /// Getter of the `requestedOrigin` attribute.
    [[nodiscard]] jsbind::String requestedOrigin() const;
    /// Setter of the `requestedOrigin` attribute.
    void requestedOrigin(const jsbind::String& value);
};

} // namespace webbind