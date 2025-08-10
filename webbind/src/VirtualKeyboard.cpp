#include <webbind/VirtualKeyboard.hpp>
#include <webbind/DOMRect.hpp>

namespace webbind {

VirtualKeyboard VirtualKeyboard::take_ownership(Handle h) noexcept {
    return VirtualKeyboard(h);
}

VirtualKeyboard VirtualKeyboard::clone() const noexcept { return *this; }

emlite::Val VirtualKeyboard::instance() noexcept { return emlite::Val::global("VirtualKeyboard"); }

VirtualKeyboard::VirtualKeyboard(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

VirtualKeyboard::VirtualKeyboard(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Undefined VirtualKeyboard::show() {
    return EventTarget::call("show").as<jsbind::Undefined>();
}

jsbind::Undefined VirtualKeyboard::hide() {
    return EventTarget::call("hide").as<jsbind::Undefined>();
}

DOMRect VirtualKeyboard::boundingRect() const {
    return EventTarget::get("boundingRect").as<DOMRect>();
}

bool VirtualKeyboard::overlaysContent() const {
    return EventTarget::get("overlaysContent").as<bool>();
}

void VirtualKeyboard::overlaysContent(bool value) {
    EventTarget::set("overlaysContent", value);
}

jsbind::Any VirtualKeyboard::ongeometrychange() const {
    return EventTarget::get("ongeometrychange").as<jsbind::Any>();
}

void VirtualKeyboard::ongeometrychange(const jsbind::Any& value) {
    EventTarget::set("ongeometrychange", value);
}


} // namespace webbind