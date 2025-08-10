#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PermissionDescriptor
/// [`PermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionDescriptor)
class PermissionDescriptor : public emlite::Val {
  explicit PermissionDescriptor(Handle h) noexcept;
public:
    static PermissionDescriptor take_ownership(Handle h) noexcept;
    explicit PermissionDescriptor(const emlite::Val &val) noexcept;
    PermissionDescriptor() noexcept;
    [[nodiscard]] PermissionDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind