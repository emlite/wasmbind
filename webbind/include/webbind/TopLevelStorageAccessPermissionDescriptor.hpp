#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type TopLevelStorageAccessPermissionDescriptor
/// [`TopLevelStorageAccessPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/TopLevelStorageAccessPermissionDescriptor)
class TopLevelStorageAccessPermissionDescriptor : public PermissionDescriptor {
  explicit TopLevelStorageAccessPermissionDescriptor(Handle h) noexcept;
public:
    static TopLevelStorageAccessPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit TopLevelStorageAccessPermissionDescriptor(const emlite::Val &val) noexcept;
    TopLevelStorageAccessPermissionDescriptor() noexcept;
    [[nodiscard]] TopLevelStorageAccessPermissionDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String requestedOrigin() const;
    void requestedOrigin(const jsbind::String& value);
};

} // namespace webbind