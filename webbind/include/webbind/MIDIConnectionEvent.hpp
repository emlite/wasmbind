#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MIDIPort;


class MIDIConnectionEvent : public Event {
    explicit MIDIConnectionEvent(Handle h) noexcept;

public:
    explicit MIDIConnectionEvent(const emlite::Val &val) noexcept;
    static MIDIConnectionEvent take_ownership(Handle h) noexcept;

    MIDIConnectionEvent clone() const noexcept;
    MIDIConnectionEvent(const jsbind::DOMString& type);
    MIDIConnectionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    MIDIPort port() const;
};

