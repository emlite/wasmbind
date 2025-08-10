#include "webbind/MIDIOutputMap.hpp"

namespace webbind {

MIDIOutputMap MIDIOutputMap::take_ownership(Handle h) noexcept {
        return MIDIOutputMap(h);
    }
MIDIOutputMap MIDIOutputMap::clone() const noexcept { return *this; }
emlite::Val MIDIOutputMap::instance() noexcept { return emlite::Val::global("MIDIOutputMap"); }
MIDIOutputMap::MIDIOutputMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MIDIOutputMap::MIDIOutputMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind