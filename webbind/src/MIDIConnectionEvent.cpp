#include <webbind/MIDIConnectionEvent.hpp>
#include <webbind/MIDIPort.hpp>


MIDIConnectionEvent MIDIConnectionEvent::take_ownership(Handle h) noexcept {
        return MIDIConnectionEvent(h);
    }
MIDIConnectionEvent MIDIConnectionEvent::clone() const noexcept { return *this; }
MIDIConnectionEvent::MIDIConnectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MIDIConnectionEvent::MIDIConnectionEvent(const emlite::Val &val) noexcept: Event(val) {}


MIDIConnectionEvent::MIDIConnectionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("MIDIConnectionEvent").new_(type, eventInitDict)) {}

MIDIPort MIDIConnectionEvent::port() const {
    return Event::get("port").as<MIDIPort>();
}

