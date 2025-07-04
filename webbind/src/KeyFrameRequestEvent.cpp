#include <webbind/KeyFrameRequestEvent.hpp>


KeyFrameRequestEvent KeyFrameRequestEvent::take_ownership(Handle h) noexcept {
        return KeyFrameRequestEvent(h);
    }
KeyFrameRequestEvent KeyFrameRequestEvent::clone() const noexcept { return *this; }
KeyFrameRequestEvent::KeyFrameRequestEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
KeyFrameRequestEvent::KeyFrameRequestEvent(const emlite::Val &val) noexcept: Event(val) {}


KeyFrameRequestEvent::KeyFrameRequestEvent(const jsbind::DOMString& type, const jsbind::DOMString& rid): Event(emlite::Val::global("KeyFrameRequestEvent").new_(type, rid)) {}

jsbind::DOMString KeyFrameRequestEvent::rid() const {
    return Event::get("rid").as<jsbind::DOMString>();
}

