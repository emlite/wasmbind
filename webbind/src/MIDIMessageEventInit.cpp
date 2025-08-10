#include <webbind/MIDIMessageEventInit.hpp>

namespace webbind {

MIDIMessageEventInit::MIDIMessageEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MIDIMessageEventInit MIDIMessageEventInit::take_ownership(Handle h) noexcept {
    return MIDIMessageEventInit(h);
}

MIDIMessageEventInit::MIDIMessageEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

MIDIMessageEventInit::MIDIMessageEventInit() noexcept: EventInit(emlite::Val::object()) {}

MIDIMessageEventInit MIDIMessageEventInit::clone() const noexcept { return *this; }

jsbind::Uint8Array MIDIMessageEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::Uint8Array>();
}

void MIDIMessageEventInit::data(const jsbind::Uint8Array& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind