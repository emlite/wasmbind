#include <webbind/MIDIInput.hpp>


MIDIInput MIDIInput::take_ownership(Handle h) noexcept {
        return MIDIInput(h);
    }
MIDIInput MIDIInput::clone() const noexcept { return *this; }
MIDIInput::MIDIInput(Handle h) noexcept : MIDIPort(emlite::Val::take_ownership(h)) {}
MIDIInput::MIDIInput(const emlite::Val &val) noexcept: MIDIPort(val) {}


jsbind::Any MIDIInput::onmidimessage() const {
    return MIDIPort::get("onmidimessage").as<jsbind::Any>();
}

void MIDIInput::onmidimessage(const jsbind::Any& value) {
    MIDIPort::set("onmidimessage", value);
}

