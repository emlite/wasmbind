#include "webbind/TextEvent.hpp"
#include "webbind/Window.hpp"

namespace webbind {

TextEvent TextEvent::take_ownership(Handle h) noexcept {
        return TextEvent(h);
    }
TextEvent TextEvent::clone() const noexcept { return *this; }
emlite::Val TextEvent::instance() noexcept { return emlite::Val::global("TextEvent"); }
TextEvent::TextEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
TextEvent::TextEvent(const emlite::Val &val) noexcept: UIEvent(val) {}

jsbind::String TextEvent::data() const {
    return UIEvent::get("data").as<jsbind::String>();
}

jsbind::Undefined TextEvent::initTextEvent(const jsbind::String& type) {
    return UIEvent::call("initTextEvent", type).as<jsbind::Undefined>();
}

jsbind::Undefined TextEvent::initTextEvent(const jsbind::String& type, bool bubbles) {
    return UIEvent::call("initTextEvent", type, bubbles).as<jsbind::Undefined>();
}

jsbind::Undefined TextEvent::initTextEvent(const jsbind::String& type, bool bubbles, bool cancelable) {
    return UIEvent::call("initTextEvent", type, bubbles, cancelable).as<jsbind::Undefined>();
}

jsbind::Undefined TextEvent::initTextEvent(const jsbind::String& type, bool bubbles, bool cancelable, const Window& view) {
    return UIEvent::call("initTextEvent", type, bubbles, cancelable, view).as<jsbind::Undefined>();
}

jsbind::Undefined TextEvent::initTextEvent(const jsbind::String& type, bool bubbles, bool cancelable, const Window& view, const jsbind::String& data) {
    return UIEvent::call("initTextEvent", type, bubbles, cancelable, view, data).as<jsbind::Undefined>();
}


} // namespace webbind