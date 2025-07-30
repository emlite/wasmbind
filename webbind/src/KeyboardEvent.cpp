#include <webbind/KeyboardEvent.hpp>
#include <webbind/Window.hpp>


KeyboardEvent KeyboardEvent::take_ownership(Handle h) noexcept {
        return KeyboardEvent(h);
    }
KeyboardEvent KeyboardEvent::clone() const noexcept { return *this; }
KeyboardEvent::KeyboardEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
KeyboardEvent::KeyboardEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


KeyboardEvent::KeyboardEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("KeyboardEvent").new_(type)) {}

KeyboardEvent::KeyboardEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : UIEvent(emlite::Val::global("KeyboardEvent").new_(type, eventInitDict)) {}

jsbind::String KeyboardEvent::key() const {
    return UIEvent::get("key").as<jsbind::String>();
}

jsbind::String KeyboardEvent::code() const {
    return UIEvent::get("code").as<jsbind::String>();
}

unsigned long KeyboardEvent::location() const {
    return UIEvent::get("location").as<unsigned long>();
}

bool KeyboardEvent::ctrlKey() const {
    return UIEvent::get("ctrlKey").as<bool>();
}

bool KeyboardEvent::shiftKey() const {
    return UIEvent::get("shiftKey").as<bool>();
}

bool KeyboardEvent::altKey() const {
    return UIEvent::get("altKey").as<bool>();
}

bool KeyboardEvent::metaKey() const {
    return UIEvent::get("metaKey").as<bool>();
}

bool KeyboardEvent::repeat() const {
    return UIEvent::get("repeat").as<bool>();
}

bool KeyboardEvent::isComposing() const {
    return UIEvent::get("isComposing").as<bool>();
}

bool KeyboardEvent::getModifierState(const jsbind::String& keyArg) {
    return UIEvent::call("getModifierState", keyArg).as<bool>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg) {
    return UIEvent::call("initKeyboardEvent", typeArg).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg, keyArg).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg, keyArg, locationArg).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg, keyArg, locationArg, ctrlKey).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg, keyArg, locationArg, ctrlKey, altKey).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg, keyArg, locationArg, ctrlKey, altKey, shiftKey).as<jsbind::Undefined>();
}

jsbind::Undefined KeyboardEvent::initKeyboardEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, const jsbind::String& keyArg, unsigned long locationArg, bool ctrlKey, bool altKey, bool shiftKey, bool metaKey) {
    return UIEvent::call("initKeyboardEvent", typeArg, bubblesArg, cancelableArg, viewArg, keyArg, locationArg, ctrlKey, altKey, shiftKey, metaKey).as<jsbind::Undefined>();
}

unsigned long KeyboardEvent::charCode() const {
    return UIEvent::get("charCode").as<unsigned long>();
}

unsigned long KeyboardEvent::keyCode() const {
    return UIEvent::get("keyCode").as<unsigned long>();
}

