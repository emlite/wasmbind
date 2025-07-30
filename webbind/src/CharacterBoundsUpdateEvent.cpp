#include <webbind/CharacterBoundsUpdateEvent.hpp>


CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent::take_ownership(Handle h) noexcept {
        return CharacterBoundsUpdateEvent(h);
    }
CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent::clone() const noexcept { return *this; }
CharacterBoundsUpdateEvent::CharacterBoundsUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CharacterBoundsUpdateEvent::CharacterBoundsUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}


CharacterBoundsUpdateEvent::CharacterBoundsUpdateEvent(const jsbind::String& type) : Event(emlite::Val::global("CharacterBoundsUpdateEvent").new_(type)) {}

CharacterBoundsUpdateEvent::CharacterBoundsUpdateEvent(const jsbind::String& type, const jsbind::Any& options) : Event(emlite::Val::global("CharacterBoundsUpdateEvent").new_(type, options)) {}

unsigned long CharacterBoundsUpdateEvent::rangeStart() const {
    return Event::get("rangeStart").as<unsigned long>();
}

unsigned long CharacterBoundsUpdateEvent::rangeEnd() const {
    return Event::get("rangeEnd").as<unsigned long>();
}

