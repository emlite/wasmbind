#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PermissionDescriptor
class PermissionDescriptor : public emlite::Val {
  explicit PermissionDescriptor(Handle h) noexcept;
public:
    static PermissionDescriptor take_ownership(Handle h) noexcept;
    explicit PermissionDescriptor(const emlite::Val &val) noexcept;
    PermissionDescriptor() noexcept;
    [[nodiscard]] PermissionDescriptor clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind