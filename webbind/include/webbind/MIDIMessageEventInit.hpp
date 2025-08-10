#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MIDIMessageEventInit
class MIDIMessageEventInit : public EventInit {
  explicit MIDIMessageEventInit(Handle h) noexcept;
public:
    static MIDIMessageEventInit take_ownership(Handle h) noexcept;
    explicit MIDIMessageEventInit(const emlite::Val &val) noexcept;
    MIDIMessageEventInit() noexcept;
    [[nodiscard]] MIDIMessageEventInit clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Uint8Array data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Uint8Array& value);
};

} // namespace webbind