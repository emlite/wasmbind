#include <webbind/MIDIMessageEvent.hpp>
#include <webbind/MIDIMessageEventInit.hpp>

namespace webbind {

MIDIMessageEvent MIDIMessageEvent::take_ownership(Handle h) noexcept {
        return MIDIMessageEvent(h);
    }
MIDIMessageEvent MIDIMessageEvent::clone() const noexcept { return *this; }
emlite::Val MIDIMessageEvent::instance() noexcept { return emlite::Val::global("MIDIMessageEvent"); }
MIDIMessageEvent::MIDIMessageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MIDIMessageEvent::MIDIMessageEvent(const emlite::Val &val) noexcept: Event(val) {}

MIDIMessageEvent::MIDIMessageEvent(const jsbind::String& type) : Event(emlite::Val::global("MIDIMessageEvent").new_(type)) {}

MIDIMessageEvent::MIDIMessageEvent(const jsbind::String& type, const MIDIMessageEventInit& eventInitDict) : Event(emlite::Val::global("MIDIMessageEvent").new_(type, eventInitDict)) {}

jsbind::Uint8Array MIDIMessageEvent::data() const {
    return Event::get("data").as<jsbind::Uint8Array>();
}


} // namespace webbind