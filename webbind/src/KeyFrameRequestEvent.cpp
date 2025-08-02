#include <webbind/KeyFrameRequestEvent.hpp>


KeyFrameRequestEvent KeyFrameRequestEvent::take_ownership(Handle h) noexcept {
        return KeyFrameRequestEvent(h);
    }
KeyFrameRequestEvent KeyFrameRequestEvent::clone() const noexcept { return *this; }
emlite::Val KeyFrameRequestEvent::instance() noexcept { return emlite::Val::global("KeyFrameRequestEvent"); }
KeyFrameRequestEvent::KeyFrameRequestEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
KeyFrameRequestEvent::KeyFrameRequestEvent(const emlite::Val &val) noexcept: Event(val) {}


KeyFrameRequestEvent::KeyFrameRequestEvent(const jsbind::String& type) : Event(emlite::Val::global("KeyFrameRequestEvent").new_(type)) {}

KeyFrameRequestEvent::KeyFrameRequestEvent(const jsbind::String& type, const jsbind::String& rid) : Event(emlite::Val::global("KeyFrameRequestEvent").new_(type, rid)) {}

jsbind::String KeyFrameRequestEvent::rid() const {
    return Event::get("rid").as<jsbind::String>();
}

