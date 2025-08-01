#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MIDIPort;


/// The MIDIConnectionEvent class.
/// [`MIDIConnectionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIConnectionEvent)
class MIDIConnectionEvent : public Event {
    explicit MIDIConnectionEvent(Handle h) noexcept;

public:
    explicit MIDIConnectionEvent(const emlite::Val &val) noexcept;
    static MIDIConnectionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIConnectionEvent clone() const noexcept;
    /// The `new MIDIConnectionEvent(..)` constructor, creating a new MIDIConnectionEvent instance
    MIDIConnectionEvent(const jsbind::String& type);
    /// The `new MIDIConnectionEvent(..)` constructor, creating a new MIDIConnectionEvent instance
    MIDIConnectionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `port` attribute.
    /// [`MIDIConnectionEvent.port`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIConnectionEvent/port)
    [[nodiscard]] MIDIPort port() const;
};

