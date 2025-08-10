#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MIDIOptions
/// [`MIDIOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOptions)
class MIDIOptions : public emlite::Val {
  explicit MIDIOptions(Handle h) noexcept;
public:
    static MIDIOptions take_ownership(Handle h) noexcept;
    explicit MIDIOptions(const emlite::Val &val) noexcept;
    MIDIOptions() noexcept;
    [[nodiscard]] MIDIOptions clone() const noexcept;
    [[nodiscard]] bool sysex() const;
    void sysex(bool value);
    [[nodiscard]] bool software() const;
    void software(bool value);
};

} // namespace webbind