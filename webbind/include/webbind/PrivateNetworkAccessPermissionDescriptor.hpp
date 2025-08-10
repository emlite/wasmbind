#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type PrivateNetworkAccessPermissionDescriptor
/// [`PrivateNetworkAccessPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateNetworkAccessPermissionDescriptor)
class PrivateNetworkAccessPermissionDescriptor : public PermissionDescriptor {
  explicit PrivateNetworkAccessPermissionDescriptor(Handle h) noexcept;
public:
    static PrivateNetworkAccessPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit PrivateNetworkAccessPermissionDescriptor(const emlite::Val &val) noexcept;
    PrivateNetworkAccessPermissionDescriptor() noexcept;
    [[nodiscard]] PrivateNetworkAccessPermissionDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
};

} // namespace webbind