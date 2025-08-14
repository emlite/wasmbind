#include <webbind/NotificationAction.hpp>

namespace webbind {

NotificationAction::NotificationAction(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NotificationAction NotificationAction::take_ownership(Handle h) noexcept {
    return NotificationAction(h);
}

NotificationAction::NotificationAction(const emlite::Val &val) noexcept: emlite::Val(val) {}

NotificationAction::NotificationAction() noexcept: emlite::Val(emlite::Val::object()) {}

NotificationAction NotificationAction::clone() const noexcept { return *this; }

jsbind::String NotificationAction::action() const {
    return emlite::Val::get("action").as<jsbind::String>();
}

void NotificationAction::action(const jsbind::String& value) {
    emlite::Val::set("action", value);
}

jsbind::String NotificationAction::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void NotificationAction::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

jsbind::String NotificationAction::navigate() const {
    return emlite::Val::get("navigate").as<jsbind::String>();
}

void NotificationAction::navigate(const jsbind::String& value) {
    emlite::Val::set("navigate", value);
}

jsbind::String NotificationAction::icon() const {
    return emlite::Val::get("icon").as<jsbind::String>();
}

void NotificationAction::icon(const jsbind::String& value) {
    emlite::Val::set("icon", value);
}


} // namespace webbind