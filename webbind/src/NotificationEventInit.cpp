#include <webbind/NotificationEventInit.hpp>
#include <webbind/Notification.hpp>

using emlite::Val;
namespace webbind {

NotificationEventInit::NotificationEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
NotificationEventInit NotificationEventInit::take_ownership(Handle h) noexcept {
        return NotificationEventInit(h);
    }
NotificationEventInit::NotificationEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
NotificationEventInit::NotificationEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
NotificationEventInit NotificationEventInit::clone() const noexcept { return *this; }

Notification NotificationEventInit::notification() const {
    return emlite::Val::get("notification").as<Notification>();
}

void NotificationEventInit::notification(const Notification& value) {
    emlite::Val::set("notification", value);
}

jsbind::String NotificationEventInit::action() const {
    return emlite::Val::get("action").as<jsbind::String>();
}

void NotificationEventInit::action(const jsbind::String& value) {
    emlite::Val::set("action", value);
}


} // namespace webbind