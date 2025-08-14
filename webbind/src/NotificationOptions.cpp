#include <webbind/NotificationOptions.hpp>
#include <webbind/NotificationAction.hpp>

namespace webbind {

NotificationOptions::NotificationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NotificationOptions NotificationOptions::take_ownership(Handle h) noexcept {
    return NotificationOptions(h);
}

NotificationOptions::NotificationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

NotificationOptions::NotificationOptions() noexcept: emlite::Val(emlite::Val::object()) {}

NotificationOptions NotificationOptions::clone() const noexcept { return *this; }

NotificationDirection NotificationOptions::dir() const {
    return emlite::Val::get("dir").as<NotificationDirection>();
}

void NotificationOptions::dir(const NotificationDirection& value) {
    emlite::Val::set("dir", value);
}

jsbind::String NotificationOptions::lang() const {
    return emlite::Val::get("lang").as<jsbind::String>();
}

void NotificationOptions::lang(const jsbind::String& value) {
    emlite::Val::set("lang", value);
}

jsbind::String NotificationOptions::body() const {
    return emlite::Val::get("body").as<jsbind::String>();
}

void NotificationOptions::body(const jsbind::String& value) {
    emlite::Val::set("body", value);
}

jsbind::String NotificationOptions::navigate() const {
    return emlite::Val::get("navigate").as<jsbind::String>();
}

void NotificationOptions::navigate(const jsbind::String& value) {
    emlite::Val::set("navigate", value);
}

jsbind::String NotificationOptions::tag() const {
    return emlite::Val::get("tag").as<jsbind::String>();
}

void NotificationOptions::tag(const jsbind::String& value) {
    emlite::Val::set("tag", value);
}

jsbind::String NotificationOptions::image() const {
    return emlite::Val::get("image").as<jsbind::String>();
}

void NotificationOptions::image(const jsbind::String& value) {
    emlite::Val::set("image", value);
}

jsbind::String NotificationOptions::icon() const {
    return emlite::Val::get("icon").as<jsbind::String>();
}

void NotificationOptions::icon(const jsbind::String& value) {
    emlite::Val::set("icon", value);
}

jsbind::String NotificationOptions::badge() const {
    return emlite::Val::get("badge").as<jsbind::String>();
}

void NotificationOptions::badge(const jsbind::String& value) {
    emlite::Val::set("badge", value);
}

jsbind::Any NotificationOptions::vibrate() const {
    return emlite::Val::get("vibrate").as<jsbind::Any>();
}

void NotificationOptions::vibrate(const jsbind::Any& value) {
    emlite::Val::set("vibrate", value);
}

jsbind::Any NotificationOptions::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

void NotificationOptions::timestamp(const jsbind::Any& value) {
    emlite::Val::set("timestamp", value);
}

bool NotificationOptions::renotify() const {
    return emlite::Val::get("renotify").as<bool>();
}

void NotificationOptions::renotify(bool value) {
    emlite::Val::set("renotify", value);
}

bool NotificationOptions::silent() const {
    return emlite::Val::get("silent").as<bool>();
}

void NotificationOptions::silent(bool value) {
    emlite::Val::set("silent", value);
}

bool NotificationOptions::requireInteraction() const {
    return emlite::Val::get("requireInteraction").as<bool>();
}

void NotificationOptions::requireInteraction(bool value) {
    emlite::Val::set("requireInteraction", value);
}

jsbind::Any NotificationOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void NotificationOptions::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

jsbind::TypedArray<NotificationAction> NotificationOptions::actions() const {
    return emlite::Val::get("actions").as<jsbind::TypedArray<NotificationAction>>();
}

void NotificationOptions::actions(const jsbind::TypedArray<NotificationAction>& value) {
    emlite::Val::set("actions", value);
}


} // namespace webbind