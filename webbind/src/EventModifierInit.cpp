#include <webbind/EventModifierInit.hpp>

namespace webbind {

EventModifierInit::EventModifierInit(Handle h) noexcept : UIEventInit(emlite::Val::take_ownership(h)) {}
EventModifierInit EventModifierInit::take_ownership(Handle h) noexcept {
    return EventModifierInit(h);
}

EventModifierInit::EventModifierInit(const emlite::Val &val) noexcept: UIEventInit(val) {}

EventModifierInit::EventModifierInit() noexcept: UIEventInit(emlite::Val::object()) {}

EventModifierInit EventModifierInit::clone() const noexcept { return *this; }

bool EventModifierInit::ctrlKey() const {
    return emlite::Val::get("ctrlKey").as<bool>();
}

void EventModifierInit::ctrlKey(bool value) {
    emlite::Val::set("ctrlKey", value);
}

bool EventModifierInit::shiftKey() const {
    return emlite::Val::get("shiftKey").as<bool>();
}

void EventModifierInit::shiftKey(bool value) {
    emlite::Val::set("shiftKey", value);
}

bool EventModifierInit::altKey() const {
    return emlite::Val::get("altKey").as<bool>();
}

void EventModifierInit::altKey(bool value) {
    emlite::Val::set("altKey", value);
}

bool EventModifierInit::metaKey() const {
    return emlite::Val::get("metaKey").as<bool>();
}

void EventModifierInit::metaKey(bool value) {
    emlite::Val::set("metaKey", value);
}

bool EventModifierInit::modifierAltGraph() const {
    return emlite::Val::get("modifierAltGraph").as<bool>();
}

void EventModifierInit::modifierAltGraph(bool value) {
    emlite::Val::set("modifierAltGraph", value);
}

bool EventModifierInit::modifierCapsLock() const {
    return emlite::Val::get("modifierCapsLock").as<bool>();
}

void EventModifierInit::modifierCapsLock(bool value) {
    emlite::Val::set("modifierCapsLock", value);
}

bool EventModifierInit::modifierFn() const {
    return emlite::Val::get("modifierFn").as<bool>();
}

void EventModifierInit::modifierFn(bool value) {
    emlite::Val::set("modifierFn", value);
}

bool EventModifierInit::modifierFnLock() const {
    return emlite::Val::get("modifierFnLock").as<bool>();
}

void EventModifierInit::modifierFnLock(bool value) {
    emlite::Val::set("modifierFnLock", value);
}

bool EventModifierInit::modifierHyper() const {
    return emlite::Val::get("modifierHyper").as<bool>();
}

void EventModifierInit::modifierHyper(bool value) {
    emlite::Val::set("modifierHyper", value);
}

bool EventModifierInit::modifierNumLock() const {
    return emlite::Val::get("modifierNumLock").as<bool>();
}

void EventModifierInit::modifierNumLock(bool value) {
    emlite::Val::set("modifierNumLock", value);
}

bool EventModifierInit::modifierScrollLock() const {
    return emlite::Val::get("modifierScrollLock").as<bool>();
}

void EventModifierInit::modifierScrollLock(bool value) {
    emlite::Val::set("modifierScrollLock", value);
}

bool EventModifierInit::modifierSuper() const {
    return emlite::Val::get("modifierSuper").as<bool>();
}

void EventModifierInit::modifierSuper(bool value) {
    emlite::Val::set("modifierSuper", value);
}

bool EventModifierInit::modifierSymbol() const {
    return emlite::Val::get("modifierSymbol").as<bool>();
}

void EventModifierInit::modifierSymbol(bool value) {
    emlite::Val::set("modifierSymbol", value);
}

bool EventModifierInit::modifierSymbolLock() const {
    return emlite::Val::get("modifierSymbolLock").as<bool>();
}

void EventModifierInit::modifierSymbolLock(bool value) {
    emlite::Val::set("modifierSymbolLock", value);
}


} // namespace webbind