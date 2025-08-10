#include <webbind/MIDIOptions.hpp>

namespace webbind {

MIDIOptions::MIDIOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MIDIOptions MIDIOptions::take_ownership(Handle h) noexcept {
    return MIDIOptions(h);
}

MIDIOptions::MIDIOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

MIDIOptions::MIDIOptions() noexcept: emlite::Val(emlite::Val::object()) {}

MIDIOptions MIDIOptions::clone() const noexcept { return *this; }

bool MIDIOptions::sysex() const {
    return emlite::Val::get("sysex").as<bool>();
}

void MIDIOptions::sysex(bool value) {
    emlite::Val::set("sysex", value);
}

bool MIDIOptions::software() const {
    return emlite::Val::get("software").as<bool>();
}

void MIDIOptions::software(bool value) {
    emlite::Val::set("software", value);
}


} // namespace webbind