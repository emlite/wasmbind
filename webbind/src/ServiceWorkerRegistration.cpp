#include <webbind/ServiceWorkerRegistration.hpp>
#include <webbind/ServiceWorker.hpp>
#include <webbind/NavigationPreloadManager.hpp>
#include <webbind/BackgroundFetchManager.hpp>
#include <webbind/SyncManager.hpp>
#include <webbind/ContentIndex.hpp>
#include <webbind/CookieStoreManager.hpp>
#include <webbind/Notification.hpp>
#include <webbind/PaymentManager.hpp>
#include <webbind/PeriodicSyncManager.hpp>
#include <webbind/PushManager.hpp>


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

jsbind::DOMString NotificationOptions::lang() const {
    return emlite::Val::get("lang").as<jsbind::DOMString>();
}

void NotificationOptions::lang(const jsbind::DOMString& value) {
    emlite::Val::set("lang", value);
}

jsbind::DOMString NotificationOptions::body() const {
    return emlite::Val::get("body").as<jsbind::DOMString>();
}

void NotificationOptions::body(const jsbind::DOMString& value) {
    emlite::Val::set("body", value);
}

jsbind::DOMString NotificationOptions::tag() const {
    return emlite::Val::get("tag").as<jsbind::DOMString>();
}

void NotificationOptions::tag(const jsbind::DOMString& value) {
    emlite::Val::set("tag", value);
}

jsbind::USVString NotificationOptions::image() const {
    return emlite::Val::get("image").as<jsbind::USVString>();
}

void NotificationOptions::image(const jsbind::USVString& value) {
    emlite::Val::set("image", value);
}

jsbind::USVString NotificationOptions::icon() const {
    return emlite::Val::get("icon").as<jsbind::USVString>();
}

void NotificationOptions::icon(const jsbind::USVString& value) {
    emlite::Val::set("icon", value);
}

jsbind::USVString NotificationOptions::badge() const {
    return emlite::Val::get("badge").as<jsbind::USVString>();
}

void NotificationOptions::badge(const jsbind::USVString& value) {
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

jsbind::Sequence<NotificationAction> NotificationOptions::actions() const {
    return emlite::Val::get("actions").as<jsbind::Sequence<NotificationAction>>();
}

void NotificationOptions::actions(const jsbind::Sequence<NotificationAction>& value) {
    emlite::Val::set("actions", value);
}

GetNotificationOptions::GetNotificationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetNotificationOptions GetNotificationOptions::take_ownership(Handle h) noexcept {
        return GetNotificationOptions(h);
    }
GetNotificationOptions::GetNotificationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GetNotificationOptions::GetNotificationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GetNotificationOptions GetNotificationOptions::clone() const noexcept { return *this; }

jsbind::DOMString GetNotificationOptions::tag() const {
    return emlite::Val::get("tag").as<jsbind::DOMString>();
}

void GetNotificationOptions::tag(const jsbind::DOMString& value) {
    emlite::Val::set("tag", value);
}

ServiceWorkerRegistration ServiceWorkerRegistration::take_ownership(Handle h) noexcept {
        return ServiceWorkerRegistration(h);
    }
ServiceWorkerRegistration ServiceWorkerRegistration::clone() const noexcept { return *this; }
ServiceWorkerRegistration::ServiceWorkerRegistration(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
ServiceWorkerRegistration::ServiceWorkerRegistration(const emlite::Val &val) noexcept: EventTarget(val) {}


ServiceWorker ServiceWorkerRegistration::installing() const {
    return EventTarget::get("installing").as<ServiceWorker>();
}

ServiceWorker ServiceWorkerRegistration::waiting() const {
    return EventTarget::get("waiting").as<ServiceWorker>();
}

ServiceWorker ServiceWorkerRegistration::active() const {
    return EventTarget::get("active").as<ServiceWorker>();
}

NavigationPreloadManager ServiceWorkerRegistration::navigationPreload() const {
    return EventTarget::get("navigationPreload").as<NavigationPreloadManager>();
}

jsbind::USVString ServiceWorkerRegistration::scope() const {
    return EventTarget::get("scope").as<jsbind::USVString>();
}

ServiceWorkerUpdateViaCache ServiceWorkerRegistration::updateViaCache() const {
    return EventTarget::get("updateViaCache").as<ServiceWorkerUpdateViaCache>();
}

jsbind::Promise ServiceWorkerRegistration::update() {
    return EventTarget::call("update").as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerRegistration::unregister() {
    return EventTarget::call("unregister").as<jsbind::Promise>();
}

jsbind::Any ServiceWorkerRegistration::onupdatefound() const {
    return EventTarget::get("onupdatefound").as<jsbind::Any>();
}

void ServiceWorkerRegistration::onupdatefound(const jsbind::Any& value) {
    EventTarget::set("onupdatefound", value);
}

BackgroundFetchManager ServiceWorkerRegistration::backgroundFetch() const {
    return EventTarget::get("backgroundFetch").as<BackgroundFetchManager>();
}

SyncManager ServiceWorkerRegistration::sync() const {
    return EventTarget::get("sync").as<SyncManager>();
}

ContentIndex ServiceWorkerRegistration::index() const {
    return EventTarget::get("index").as<ContentIndex>();
}

CookieStoreManager ServiceWorkerRegistration::cookies() const {
    return EventTarget::get("cookies").as<CookieStoreManager>();
}

jsbind::Promise ServiceWorkerRegistration::showNotification(const jsbind::DOMString& title) {
    return EventTarget::call("showNotification", title).as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerRegistration::showNotification(const jsbind::DOMString& title, const NotificationOptions& options) {
    return EventTarget::call("showNotification", title, options).as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerRegistration::getNotifications() {
    return EventTarget::call("getNotifications").as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerRegistration::getNotifications(const GetNotificationOptions& filter) {
    return EventTarget::call("getNotifications", filter).as<jsbind::Promise>();
}

PaymentManager ServiceWorkerRegistration::paymentManager() const {
    return EventTarget::get("paymentManager").as<PaymentManager>();
}

PeriodicSyncManager ServiceWorkerRegistration::periodicSync() const {
    return EventTarget::get("periodicSync").as<PeriodicSyncManager>();
}

PushManager ServiceWorkerRegistration::pushManager() const {
    return EventTarget::get("pushManager").as<PushManager>();
}

