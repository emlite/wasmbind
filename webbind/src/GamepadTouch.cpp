#include "webbind/GamepadTouch.hpp"
#include "webbind/DOMPointReadOnly.hpp"
#include "webbind/DOMRectReadOnly.hpp"

using emlite::Val;
namespace webbind {

GamepadTouch::GamepadTouch(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GamepadTouch GamepadTouch::take_ownership(Handle h) noexcept {
        return GamepadTouch(h);
    }
GamepadTouch::GamepadTouch(const emlite::Val &val) noexcept: emlite::Val(val) {}
GamepadTouch::GamepadTouch() noexcept: emlite::Val(emlite::Val::object()) {}
GamepadTouch GamepadTouch::clone() const noexcept { return *this; }

unsigned long GamepadTouch::touchId() const {
    return emlite::Val::get("touchId").as<unsigned long>();
}

void GamepadTouch::touchId(unsigned long value) {
    emlite::Val::set("touchId", value);
}

unsigned char GamepadTouch::surfaceId() const {
    return emlite::Val::get("surfaceId").as<unsigned char>();
}

void GamepadTouch::surfaceId(unsigned char value) {
    emlite::Val::set("surfaceId", value);
}

DOMPointReadOnly GamepadTouch::position() const {
    return emlite::Val::get("position").as<DOMPointReadOnly>();
}

void GamepadTouch::position(const DOMPointReadOnly& value) {
    emlite::Val::set("position", value);
}

DOMRectReadOnly GamepadTouch::surfaceDimensions() const {
    return emlite::Val::get("surfaceDimensions").as<DOMRectReadOnly>();
}

void GamepadTouch::surfaceDimensions(const DOMRectReadOnly& value) {
    emlite::Val::set("surfaceDimensions", value);
}


} // namespace webbind