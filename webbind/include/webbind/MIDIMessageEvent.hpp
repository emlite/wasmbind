#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The MIDIMessageEvent class.
/// [`MIDIMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIMessageEvent)
class MIDIMessageEvent : public Event {
    explicit MIDIMessageEvent(Handle h) noexcept;

public:
    explicit MIDIMessageEvent(const emlite::Val &val) noexcept;
    static MIDIMessageEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] MIDIMessageEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MIDIMessageEvent(..)` constructor, creating a new MIDIMessageEvent instance
    MIDIMessageEvent(const jsbind::String& type);
    /// The `new MIDIMessageEvent(..)` constructor, creating a new MIDIMessageEvent instance
    MIDIMessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`MIDIMessageEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIMessageEvent/data)
    [[nodiscard]] jsbind::Uint8Array data() const;
};

