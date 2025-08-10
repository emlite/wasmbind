#include <webbind/CharacterBoundsUpdateEventInit.hpp>

using emlite::Val;
namespace webbind {

CharacterBoundsUpdateEventInit::CharacterBoundsUpdateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit::take_ownership(Handle h) noexcept {
        return CharacterBoundsUpdateEventInit(h);
    }
CharacterBoundsUpdateEventInit::CharacterBoundsUpdateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
CharacterBoundsUpdateEventInit::CharacterBoundsUpdateEventInit() noexcept: EventInit(emlite::Val::object()) {}
CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit::clone() const noexcept { return *this; }

unsigned long CharacterBoundsUpdateEventInit::rangeStart() const {
    return emlite::Val::get("rangeStart").as<unsigned long>();
}

void CharacterBoundsUpdateEventInit::rangeStart(unsigned long value) {
    emlite::Val::set("rangeStart", value);
}

unsigned long CharacterBoundsUpdateEventInit::rangeEnd() const {
    return emlite::Val::get("rangeEnd").as<unsigned long>();
}

void CharacterBoundsUpdateEventInit::rangeEnd(unsigned long value) {
    emlite::Val::set("rangeEnd", value);
}


} // namespace webbind