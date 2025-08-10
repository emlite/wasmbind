#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type PrivateNetworkAccessPermissionDescriptor
class PrivateNetworkAccessPermissionDescriptor : public PermissionDescriptor {
  explicit PrivateNetworkAccessPermissionDescriptor(Handle h) noexcept;
public:
    static PrivateNetworkAccessPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit PrivateNetworkAccessPermissionDescriptor(const emlite::Val &val) noexcept;
    PrivateNetworkAccessPermissionDescriptor() noexcept;
    [[nodiscard]] PrivateNetworkAccessPermissionDescriptor clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
};

} // namespace webbind