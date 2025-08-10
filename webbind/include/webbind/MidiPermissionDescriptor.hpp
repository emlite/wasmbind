#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

/// Dictionary type MidiPermissionDescriptor
class MidiPermissionDescriptor : public PermissionDescriptor {
  explicit MidiPermissionDescriptor(Handle h) noexcept;
public:
    static MidiPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit MidiPermissionDescriptor(const emlite::Val &val) noexcept;
    MidiPermissionDescriptor() noexcept;
    [[nodiscard]] MidiPermissionDescriptor clone() const noexcept;
    /// Getter of the `sysex` attribute.
    [[nodiscard]] bool sysex() const;
    /// Setter of the `sysex` attribute.
    void sysex(bool value);
};

} // namespace webbind