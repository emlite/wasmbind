#include <webbind/PresentationConnectionCloseEvent.hpp>


PresentationConnectionCloseEvent PresentationConnectionCloseEvent::take_ownership(Handle h) noexcept {
        return PresentationConnectionCloseEvent(h);
    }
PresentationConnectionCloseEvent PresentationConnectionCloseEvent::clone() const noexcept { return *this; }
PresentationConnectionCloseEvent::PresentationConnectionCloseEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PresentationConnectionCloseEvent::PresentationConnectionCloseEvent(const emlite::Val &val) noexcept: Event(val) {}


PresentationConnectionCloseEvent::PresentationConnectionCloseEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("PresentationConnectionCloseEvent").new_(type, eventInitDict)) {}

PresentationConnectionCloseReason PresentationConnectionCloseEvent::reason() const {
    return Event::get("reason").as<PresentationConnectionCloseReason>();
}

jsbind::DOMString PresentationConnectionCloseEvent::message() const {
    return Event::get("message").as<jsbind::DOMString>();
}

