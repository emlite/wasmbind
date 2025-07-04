#include <webbind/MIDIInputMap.hpp>


MIDIInputMap MIDIInputMap::take_ownership(Handle h) noexcept {
        return MIDIInputMap(h);
    }
MIDIInputMap MIDIInputMap::clone() const noexcept { return *this; }
MIDIInputMap::MIDIInputMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MIDIInputMap::MIDIInputMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


