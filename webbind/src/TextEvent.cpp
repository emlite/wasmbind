#include <webbind/TextEvent.hpp>
#include <webbind/Window.hpp>


TextEvent TextEvent::take_ownership(Handle h) noexcept {
        return TextEvent(h);
    }
TextEvent TextEvent::clone() const noexcept { return *this; }
TextEvent::TextEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
TextEvent::TextEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


jsbind::DOMString TextEvent::data() const {
    return UIEvent::get("data").as<jsbind::DOMString>();
}

jsbind::Undefined TextEvent::initTextEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const Window& view, const jsbind::DOMString& data) {
    return UIEvent::call("initTextEvent", type, bubbles, cancelable, view, data).as<jsbind::Undefined>();
}

