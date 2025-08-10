#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MIDIOptions
class MIDIOptions : public emlite::Val {
  explicit MIDIOptions(Handle h) noexcept;
public:
    static MIDIOptions take_ownership(Handle h) noexcept;
    explicit MIDIOptions(const emlite::Val &val) noexcept;
    MIDIOptions() noexcept;
    [[nodiscard]] MIDIOptions clone() const noexcept;
    /// Getter of the `sysex` attribute.
    [[nodiscard]] bool sysex() const;
    /// Setter of the `sysex` attribute.
    void sysex(bool value);
    /// Getter of the `software` attribute.
    [[nodiscard]] bool software() const;
    /// Setter of the `software` attribute.
    void software(bool value);
};

} // namespace webbind