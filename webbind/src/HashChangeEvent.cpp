#include <webbind/HashChangeEvent.hpp>


HashChangeEvent HashChangeEvent::take_ownership(Handle h) noexcept {
        return HashChangeEvent(h);
    }
HashChangeEvent HashChangeEvent::clone() const noexcept { return *this; }
HashChangeEvent::HashChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
HashChangeEvent::HashChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


HashChangeEvent::HashChangeEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("HashChangeEvent").new_(type)) {}

HashChangeEvent::HashChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("HashChangeEvent").new_(type, eventInitDict)) {}

jsbind::USVString HashChangeEvent::oldURL() const {
    return Event::get("oldURL").as<jsbind::USVString>();
}

jsbind::USVString HashChangeEvent::newURL() const {
    return Event::get("newURL").as<jsbind::USVString>();
}

