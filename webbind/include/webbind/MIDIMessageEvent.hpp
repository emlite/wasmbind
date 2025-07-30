#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class MIDIMessageEvent : public Event {
    explicit MIDIMessageEvent(Handle h) noexcept;

public:
    explicit MIDIMessageEvent(const emlite::Val &val) noexcept;
    static MIDIMessageEvent take_ownership(Handle h) noexcept;

    MIDIMessageEvent clone() const noexcept;
    MIDIMessageEvent(const jsbind::String& type);
    MIDIMessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::Uint8Array data() const;
};

