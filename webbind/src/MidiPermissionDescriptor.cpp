#include "webbind/MidiPermissionDescriptor.hpp"

using emlite::Val;
namespace webbind {

MidiPermissionDescriptor::MidiPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
MidiPermissionDescriptor MidiPermissionDescriptor::take_ownership(Handle h) noexcept {
        return MidiPermissionDescriptor(h);
    }
MidiPermissionDescriptor::MidiPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
MidiPermissionDescriptor::MidiPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
MidiPermissionDescriptor MidiPermissionDescriptor::clone() const noexcept { return *this; }

bool MidiPermissionDescriptor::sysex() const {
    return emlite::Val::get("sysex").as<bool>();
}

void MidiPermissionDescriptor::sysex(bool value) {
    emlite::Val::set("sysex", value);
}


} // namespace webbind