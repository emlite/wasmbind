#include <webbind/KeyboardEventInit.hpp>

using emlite::Val;
namespace webbind {

KeyboardEventInit::KeyboardEventInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
KeyboardEventInit KeyboardEventInit::take_ownership(Handle h) noexcept {
        return KeyboardEventInit(h);
    }
KeyboardEventInit::KeyboardEventInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
KeyboardEventInit::KeyboardEventInit() noexcept: emlite::Val(emlite::Val::object()) {}
KeyboardEventInit KeyboardEventInit::clone() const noexcept { return *this; }

unsigned long KeyboardEventInit::charCode() const {
    return emlite::Val::get("charCode").as<unsigned long>();
}

void KeyboardEventInit::charCode(unsigned long value) {
    emlite::Val::set("charCode", value);
}

unsigned long KeyboardEventInit::keyCode() const {
    return emlite::Val::get("keyCode").as<unsigned long>();
}

void KeyboardEventInit::keyCode(unsigned long value) {
    emlite::Val::set("keyCode", value);
}


} // namespace webbind