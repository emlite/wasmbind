#include <webbind/ServiceWorkerRegistration.hpp>
#include <webbind/ServiceWorker.hpp>
#include <webbind/NavigationPreloadManager.hpp>
#include <webbind/ServiceWorkerRegistration.hpp>
#include <webbind/BackgroundFetchManager.hpp>
#include <webbind/SyncManager.hpp>
#include <webbind/ContentIndex.hpp>
#include <webbind/CookieStoreManager.hpp>
#include <webbind/NotificationOptions.hpp>
#include <webbind/Notification.hpp>
#include <webbind/GetNotificationOptions.hpp>
#include <webbind/PaymentManager.hpp>
#include <webbind/PeriodicSyncManager.hpp>
#include <webbind/PushManager.hpp>

namespace webbind {

ServiceWorkerRegistration ServiceWorkerRegistration::take_ownership(Handle h) noexcept {
    return ServiceWorkerRegistration(h);
}

ServiceWorkerRegistration ServiceWorkerRegistration::clone() const noexcept { return *this; }

emlite::Val ServiceWorkerRegistration::instance() noexcept { return emlite::Val::global("ServiceWorkerRegistration"); }

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

jsbind::String ServiceWorkerRegistration::scope() const {
    return EventTarget::get("scope").as<jsbind::String>();
}

ServiceWorkerUpdateViaCache ServiceWorkerRegistration::updateViaCache() const {
    return EventTarget::get("updateViaCache").as<ServiceWorkerUpdateViaCache>();
}

jsbind::Promise<ServiceWorkerRegistration> ServiceWorkerRegistration::update() {
    return EventTarget::call("update").as<jsbind::Promise<ServiceWorkerRegistration>>();
}

jsbind::Promise<bool> ServiceWorkerRegistration::unregister() {
    return EventTarget::call("unregister").as<jsbind::Promise<bool>>();
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

jsbind::Promise<jsbind::Undefined> ServiceWorkerRegistration::showNotification(const jsbind::String& title) {
    return EventTarget::call("showNotification", title).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ServiceWorkerRegistration::showNotification(const jsbind::String& title, const NotificationOptions& options) {
    return EventTarget::call("showNotification", title, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<Notification>> ServiceWorkerRegistration::getNotifications() {
    return EventTarget::call("getNotifications").as<jsbind::Promise<jsbind::TypedArray<Notification>>>();
}

jsbind::Promise<jsbind::TypedArray<Notification>> ServiceWorkerRegistration::getNotifications(const GetNotificationOptions& filter) {
    return EventTarget::call("getNotifications", filter).as<jsbind::Promise<jsbind::TypedArray<Notification>>>();
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


} // namespace webbind