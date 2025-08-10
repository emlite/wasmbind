#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class MIDIPort;

/// Dictionary type MIDIConnectionEventInit
class MIDIConnectionEventInit : public EventInit {
  explicit MIDIConnectionEventInit(Handle h) noexcept;
public:
    static MIDIConnectionEventInit take_ownership(Handle h) noexcept;
    explicit MIDIConnectionEventInit(const emlite::Val &val) noexcept;
    MIDIConnectionEventInit() noexcept;
    [[nodiscard]] MIDIConnectionEventInit clone() const noexcept;
    /// Getter of the `port` attribute.
    [[nodiscard]] MIDIPort port() const;
    /// Setter of the `port` attribute.
    void port(const MIDIPort& value);
};

} // namespace webbind