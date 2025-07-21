#include <webbind/MIDIPort.hpp>


MIDIPort MIDIPort::take_ownership(Handle h) noexcept {
        return MIDIPort(h);
    }
MIDIPort MIDIPort::clone() const noexcept { return *this; }
MIDIPort::MIDIPort(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MIDIPort::MIDIPort(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::DOMString MIDIPort::id() const {
    return EventTarget::get("id").as<jsbind::DOMString>();
}

jsbind::DOMString MIDIPort::manufacturer() const {
    return EventTarget::get("manufacturer").as<jsbind::DOMString>();
}

jsbind::DOMString MIDIPort::name() const {
    return EventTarget::get("name").as<jsbind::DOMString>();
}

MIDIPortType MIDIPort::type() const {
    return EventTarget::get("type").as<MIDIPortType>();
}

jsbind::DOMString MIDIPort::version() const {
    return EventTarget::get("version").as<jsbind::DOMString>();
}

MIDIPortDeviceState MIDIPort::state() const {
    return EventTarget::get("state").as<MIDIPortDeviceState>();
}

MIDIPortConnectionState MIDIPort::connection() const {
    return EventTarget::get("connection").as<MIDIPortConnectionState>();
}

jsbind::Any MIDIPort::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void MIDIPort::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

jsbind::Promise<MIDIPort> MIDIPort::open() {
    return EventTarget::call("open").as<jsbind::Promise<MIDIPort>>();
}

jsbind::Promise<MIDIPort> MIDIPort::close() {
    return EventTarget::call("close").as<jsbind::Promise<MIDIPort>>();
}

