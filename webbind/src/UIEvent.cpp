#include <webbind/UIEvent.hpp>
#include <webbind/UIEventInit.hpp>
#include <webbind/Window.hpp>
#include <webbind/InputDeviceCapabilities.hpp>

namespace webbind {

UIEvent UIEvent::take_ownership(Handle h) noexcept {
        return UIEvent(h);
    }
UIEvent UIEvent::clone() const noexcept { return *this; }
emlite::Val UIEvent::instance() noexcept { return emlite::Val::global("UIEvent"); }
UIEvent::UIEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
UIEvent::UIEvent(const emlite::Val &val) noexcept: Event(val) {}

UIEvent::UIEvent(const jsbind::String& type) : Event(emlite::Val::global("UIEvent").new_(type)) {}

UIEvent::UIEvent(const jsbind::String& type, const UIEventInit& eventInitDict) : Event(emlite::Val::global("UIEvent").new_(type, eventInitDict)) {}

Window UIEvent::view() const {
    return Event::get("view").as<Window>();
}

long UIEvent::detail() const {
    return Event::get("detail").as<long>();
}

InputDeviceCapabilities UIEvent::sourceCapabilities() const {
    return Event::get("sourceCapabilities").as<InputDeviceCapabilities>();
}

jsbind::Undefined UIEvent::initUIEvent(const jsbind::String& typeArg) {
    return Event::call("initUIEvent", typeArg).as<jsbind::Undefined>();
}

jsbind::Undefined UIEvent::initUIEvent(const jsbind::String& typeArg, bool bubblesArg) {
    return Event::call("initUIEvent", typeArg, bubblesArg).as<jsbind::Undefined>();
}

jsbind::Undefined UIEvent::initUIEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg) {
    return Event::call("initUIEvent", typeArg, bubblesArg, cancelableArg).as<jsbind::Undefined>();
}

jsbind::Undefined UIEvent::initUIEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg) {
    return Event::call("initUIEvent", typeArg, bubblesArg, cancelableArg, viewArg).as<jsbind::Undefined>();
}

jsbind::Undefined UIEvent::initUIEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg) {
    return Event::call("initUIEvent", typeArg, bubblesArg, cancelableArg, viewArg, detailArg).as<jsbind::Undefined>();
}

unsigned long UIEvent::which() const {
    return Event::get("which").as<unsigned long>();
}


} // namespace webbind