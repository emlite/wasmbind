#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type PushPermissionDescriptor
/// [`PushPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/PushPermissionDescriptor)
class PushPermissionDescriptor : public PermissionDescriptor {
  explicit PushPermissionDescriptor(Handle h) noexcept;
public:
    static PushPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit PushPermissionDescriptor(const emlite::Val &val) noexcept;
    PushPermissionDescriptor() noexcept;
    [[nodiscard]] PushPermissionDescriptor clone() const noexcept;
    [[nodiscard]] bool userVisibleOnly() const;
    void userVisibleOnly(bool value);
};

} // namespace webbind