#include <webbind/MIDIMessageEvent.hpp>


MIDIMessageEvent MIDIMessageEvent::take_ownership(Handle h) noexcept {
        return MIDIMessageEvent(h);
    }
MIDIMessageEvent MIDIMessageEvent::clone() const noexcept { return *this; }
MIDIMessageEvent::MIDIMessageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MIDIMessageEvent::MIDIMessageEvent(const emlite::Val &val) noexcept: Event(val) {}


MIDIMessageEvent::MIDIMessageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("MIDIMessageEvent").new_(type, eventInitDict)) {}

jsbind::Uint8Array MIDIMessageEvent::data() const {
    return Event::get("data").as<jsbind::Uint8Array>();
}

