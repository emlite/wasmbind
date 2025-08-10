#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type ClipboardPermissionDescriptor
/// [`ClipboardPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardPermissionDescriptor)
class ClipboardPermissionDescriptor : public PermissionDescriptor {
  explicit ClipboardPermissionDescriptor(Handle h) noexcept;
public:
    static ClipboardPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit ClipboardPermissionDescriptor(const emlite::Val &val) noexcept;
    ClipboardPermissionDescriptor() noexcept;
    [[nodiscard]] ClipboardPermissionDescriptor clone() const noexcept;
    [[nodiscard]] bool allowWithoutGesture() const;
    void allowWithoutGesture(bool value);
};

} // namespace webbind