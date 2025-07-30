#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MIDIPort;


class MIDIPort : public EventTarget {
    explicit MIDIPort(Handle h) noexcept;

public:
    explicit MIDIPort(const emlite::Val &val) noexcept;
    static MIDIPort take_ownership(Handle h) noexcept;

    MIDIPort clone() const noexcept;
    jsbind::String id() const;
    jsbind::String manufacturer() const;
    jsbind::String name() const;
    MIDIPortType type() const;
    jsbind::String version() const;
    MIDIPortDeviceState state() const;
    MIDIPortConnectionState connection() const;
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    jsbind::Promise<MIDIPort> open();
    jsbind::Promise<MIDIPort> close();
};

