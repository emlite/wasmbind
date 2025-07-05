#include <webbind/NotificationEvent.hpp>
#include <webbind/Notification.hpp>


NotificationEvent NotificationEvent::take_ownership(Handle h) noexcept {
        return NotificationEvent(h);
    }
NotificationEvent NotificationEvent::clone() const noexcept { return *this; }
NotificationEvent::NotificationEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
NotificationEvent::NotificationEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


NotificationEvent::NotificationEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("NotificationEvent").new_(type, eventInitDict)) {}

Notification NotificationEvent::notification() const {
    return ExtendableEvent::get("notification").as<Notification>();
}

jsbind::DOMString NotificationEvent::action() const {
    return ExtendableEvent::get("action").as<jsbind::DOMString>();
}

