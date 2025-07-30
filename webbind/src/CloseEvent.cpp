#include <webbind/CloseEvent.hpp>


CloseEvent CloseEvent::take_ownership(Handle h) noexcept {
        return CloseEvent(h);
    }
CloseEvent CloseEvent::clone() const noexcept { return *this; }
CloseEvent::CloseEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CloseEvent::CloseEvent(const emlite::Val &val) noexcept: Event(val) {}


CloseEvent::CloseEvent(const jsbind::String& type) : Event(emlite::Val::global("CloseEvent").new_(type)) {}

CloseEvent::CloseEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("CloseEvent").new_(type, eventInitDict)) {}

bool CloseEvent::wasClean() const {
    return Event::get("wasClean").as<bool>();
}

unsigned short CloseEvent::code() const {
    return Event::get("code").as<unsigned short>();
}

jsbind::String CloseEvent::reason() const {
    return Event::get("reason").as<jsbind::String>();
}

