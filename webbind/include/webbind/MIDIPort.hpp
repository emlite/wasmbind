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
    jsbind::DOMString id() const;
    jsbind::DOMString manufacturer() const;
    jsbind::DOMString name() const;
    MIDIPortType type() const;
    jsbind::DOMString version() const;
    MIDIPortDeviceState state() const;
    MIDIPortConnectionState connection() const;
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    jsbind::Promise open();
    jsbind::Promise close();
};

