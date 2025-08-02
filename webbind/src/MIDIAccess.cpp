#include <webbind/MIDIAccess.hpp>
#include <webbind/MIDIInputMap.hpp>
#include <webbind/MIDIOutputMap.hpp>


MIDIAccess MIDIAccess::take_ownership(Handle h) noexcept {
        return MIDIAccess(h);
    }
MIDIAccess MIDIAccess::clone() const noexcept { return *this; }
emlite::Val MIDIAccess::instance() noexcept { return emlite::Val::global("MIDIAccess"); }
MIDIAccess::MIDIAccess(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MIDIAccess::MIDIAccess(const emlite::Val &val) noexcept: EventTarget(val) {}


MIDIInputMap MIDIAccess::inputs() const {
    return EventTarget::get("inputs").as<MIDIInputMap>();
}

MIDIOutputMap MIDIAccess::outputs() const {
    return EventTarget::get("outputs").as<MIDIOutputMap>();
}

jsbind::Any MIDIAccess::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void MIDIAccess::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

bool MIDIAccess::sysexEnabled() const {
    return EventTarget::get("sysexEnabled").as<bool>();
}

