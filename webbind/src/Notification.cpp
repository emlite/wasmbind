#include <webbind/Notification.hpp>
#include <webbind/ServiceWorkerRegistration.hpp>


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

jsbind::String NotificationAction::icon() const {
    return emlite::Val::get("icon").as<jsbind::String>();
}

void NotificationAction::icon(const jsbind::String& value) {
    emlite::Val::set("icon", value);
}

Notification Notification::take_ownership(Handle h) noexcept {
        return Notification(h);
    }
Notification Notification::clone() const noexcept { return *this; }
Notification::Notification(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Notification::Notification(const emlite::Val &val) noexcept: EventTarget(val) {}


Notification::Notification(const jsbind::String& title) : EventTarget(emlite::Val::global("Notification").new_(title)) {}

Notification::Notification(const jsbind::String& title, const NotificationOptions& options) : EventTarget(emlite::Val::global("Notification").new_(title, options)) {}

NotificationPermission Notification::permission() {
    return emlite::Val::global("notification").get("permission").as<NotificationPermission>();
}

jsbind::Promise<NotificationPermission> Notification::requestPermission() {
    return emlite::Val::global("notification").call("requestPermission").as<jsbind::Promise<NotificationPermission>>();
}

jsbind::Promise<NotificationPermission> Notification::requestPermission(const jsbind::Function& deprecatedCallback) {
    return emlite::Val::global("notification").call("requestPermission", deprecatedCallback).as<jsbind::Promise<NotificationPermission>>();
}

unsigned long Notification::maxActions() {
    return emlite::Val::global("notification").get("maxActions").as<unsigned long>();
}

jsbind::Any Notification::onclick() const {
    return EventTarget::get("onclick").as<jsbind::Any>();
}

void Notification::onclick(const jsbind::Any& value) {
    EventTarget::set("onclick", value);
}

jsbind::Any Notification::onshow() const {
    return EventTarget::get("onshow").as<jsbind::Any>();
}

void Notification::onshow(const jsbind::Any& value) {
    EventTarget::set("onshow", value);
}

jsbind::Any Notification::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void Notification::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any Notification::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void Notification::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

jsbind::String Notification::title() const {
    return EventTarget::get("title").as<jsbind::String>();
}

NotificationDirection Notification::dir() const {
    return EventTarget::get("dir").as<NotificationDirection>();
}

jsbind::String Notification::lang() const {
    return EventTarget::get("lang").as<jsbind::String>();
}

jsbind::String Notification::body() const {
    return EventTarget::get("body").as<jsbind::String>();
}

jsbind::String Notification::tag() const {
    return EventTarget::get("tag").as<jsbind::String>();
}

jsbind::String Notification::image() const {
    return EventTarget::get("image").as<jsbind::String>();
}

jsbind::String Notification::icon() const {
    return EventTarget::get("icon").as<jsbind::String>();
}

jsbind::String Notification::badge() const {
    return EventTarget::get("badge").as<jsbind::String>();
}

jsbind::TypedArray<unsigned long> Notification::vibrate() const {
    return EventTarget::get("vibrate").as<jsbind::TypedArray<unsigned long>>();
}

jsbind::Any Notification::timestamp() const {
    return EventTarget::get("timestamp").as<jsbind::Any>();
}

bool Notification::renotify() const {
    return EventTarget::get("renotify").as<bool>();
}

bool Notification::silent() const {
    return EventTarget::get("silent").as<bool>();
}

bool Notification::requireInteraction() const {
    return EventTarget::get("requireInteraction").as<bool>();
}

jsbind::Any Notification::data() const {
    return EventTarget::get("data").as<jsbind::Any>();
}

jsbind::TypedArray<NotificationAction> Notification::actions() const {
    return EventTarget::get("actions").as<jsbind::TypedArray<NotificationAction>>();
}

jsbind::Undefined Notification::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

