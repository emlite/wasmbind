#include "webbind/MouseEventInit.hpp"
#include "webbind/EventTarget.hpp"

using emlite::Val;
namespace webbind {

MouseEventInit::MouseEventInit(Handle h) noexcept : EventModifierInit(emlite::Val::take_ownership(h)) {}
MouseEventInit MouseEventInit::take_ownership(Handle h) noexcept {
        return MouseEventInit(h);
    }
MouseEventInit::MouseEventInit(const emlite::Val &val) noexcept: EventModifierInit(val) {}
MouseEventInit::MouseEventInit() noexcept: EventModifierInit(emlite::Val::object()) {}
MouseEventInit MouseEventInit::clone() const noexcept { return *this; }

long MouseEventInit::screenX() const {
    return emlite::Val::get("screenX").as<long>();
}

void MouseEventInit::screenX(long value) {
    emlite::Val::set("screenX", value);
}

long MouseEventInit::screenY() const {
    return emlite::Val::get("screenY").as<long>();
}

void MouseEventInit::screenY(long value) {
    emlite::Val::set("screenY", value);
}

long MouseEventInit::clientX() const {
    return emlite::Val::get("clientX").as<long>();
}

void MouseEventInit::clientX(long value) {
    emlite::Val::set("clientX", value);
}

long MouseEventInit::clientY() const {
    return emlite::Val::get("clientY").as<long>();
}

void MouseEventInit::clientY(long value) {
    emlite::Val::set("clientY", value);
}

short MouseEventInit::button() const {
    return emlite::Val::get("button").as<short>();
}

void MouseEventInit::button(short value) {
    emlite::Val::set("button", value);
}

unsigned short MouseEventInit::buttons() const {
    return emlite::Val::get("buttons").as<unsigned short>();
}

void MouseEventInit::buttons(unsigned short value) {
    emlite::Val::set("buttons", value);
}

EventTarget MouseEventInit::relatedTarget() const {
    return emlite::Val::get("relatedTarget").as<EventTarget>();
}

void MouseEventInit::relatedTarget(const EventTarget& value) {
    emlite::Val::set("relatedTarget", value);
}


} // namespace webbind