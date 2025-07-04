#include <webbind/MIDIOutputMap.hpp>


MIDIOutputMap MIDIOutputMap::take_ownership(Handle h) noexcept {
        return MIDIOutputMap(h);
    }
MIDIOutputMap MIDIOutputMap::clone() const noexcept { return *this; }
MIDIOutputMap::MIDIOutputMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MIDIOutputMap::MIDIOutputMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


