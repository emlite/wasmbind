#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type ClipboardPermissionDescriptor
class ClipboardPermissionDescriptor : public PermissionDescriptor {
  explicit ClipboardPermissionDescriptor(Handle h) noexcept;
public:
    static ClipboardPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit ClipboardPermissionDescriptor(const emlite::Val &val) noexcept;
    ClipboardPermissionDescriptor() noexcept;
    [[nodiscard]] ClipboardPermissionDescriptor clone() const noexcept;
    /// Getter of the `allowWithoutGesture` attribute.
    [[nodiscard]] bool allowWithoutGesture() const;
    /// Setter of the `allowWithoutGesture` attribute.
    void allowWithoutGesture(bool value);
};

} // namespace webbind