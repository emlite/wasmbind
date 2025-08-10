#include <webbind/MIDIInputMap.hpp>

namespace webbind {

MIDIInputMap MIDIInputMap::take_ownership(Handle h) noexcept {
        return MIDIInputMap(h);
    }
MIDIInputMap MIDIInputMap::clone() const noexcept { return *this; }
emlite::Val MIDIInputMap::instance() noexcept { return emlite::Val::global("MIDIInputMap"); }
MIDIInputMap::MIDIInputMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MIDIInputMap::MIDIInputMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind