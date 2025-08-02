#include <webbind/ServiceWorkerGlobalScope.hpp>
#include <webbind/Clients.hpp>
#include <webbind/ServiceWorkerRegistration.hpp>
#include <webbind/ServiceWorker.hpp>
#include <webbind/CookieStore.hpp>


ServiceWorkerGlobalScope ServiceWorkerGlobalScope::take_ownership(Handle h) noexcept {
        return ServiceWorkerGlobalScope(h);
    }
ServiceWorkerGlobalScope ServiceWorkerGlobalScope::clone() const noexcept { return *this; }
emlite::Val ServiceWorkerGlobalScope::instance() noexcept { return emlite::Val::global("ServiceWorkerGlobalScope"); }
ServiceWorkerGlobalScope::ServiceWorkerGlobalScope(Handle h) noexcept : WorkerGlobalScope(emlite::Val::take_ownership(h)) {}
ServiceWorkerGlobalScope::ServiceWorkerGlobalScope(const emlite::Val &val) noexcept: WorkerGlobalScope(val) {}


Clients ServiceWorkerGlobalScope::clients() const {
    return WorkerGlobalScope::get("clients").as<Clients>();
}

ServiceWorkerRegistration ServiceWorkerGlobalScope::registration() const {
    return WorkerGlobalScope::get("registration").as<ServiceWorkerRegistration>();
}

ServiceWorker ServiceWorkerGlobalScope::serviceWorker() const {
    return WorkerGlobalScope::get("serviceWorker").as<ServiceWorker>();
}

jsbind::Promise<jsbind::Undefined> ServiceWorkerGlobalScope::skipWaiting() {
    return WorkerGlobalScope::call("skipWaiting").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any ServiceWorkerGlobalScope::oninstall() const {
    return WorkerGlobalScope::get("oninstall").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::oninstall(const jsbind::Any& value) {
    WorkerGlobalScope::set("oninstall", value);
}

jsbind::Any ServiceWorkerGlobalScope::onactivate() const {
    return WorkerGlobalScope::get("onactivate").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onactivate(const jsbind::Any& value) {
    WorkerGlobalScope::set("onactivate", value);
}

jsbind::Any ServiceWorkerGlobalScope::onfetch() const {
    return WorkerGlobalScope::get("onfetch").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onfetch(const jsbind::Any& value) {
    WorkerGlobalScope::set("onfetch", value);
}

jsbind::Any ServiceWorkerGlobalScope::onmessage() const {
    return WorkerGlobalScope::get("onmessage").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onmessage(const jsbind::Any& value) {
    WorkerGlobalScope::set("onmessage", value);
}

jsbind::Any ServiceWorkerGlobalScope::onmessageerror() const {
    return WorkerGlobalScope::get("onmessageerror").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onmessageerror(const jsbind::Any& value) {
    WorkerGlobalScope::set("onmessageerror", value);
}

jsbind::Any ServiceWorkerGlobalScope::onbackgroundfetchsuccess() const {
    return WorkerGlobalScope::get("onbackgroundfetchsuccess").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onbackgroundfetchsuccess(const jsbind::Any& value) {
    WorkerGlobalScope::set("onbackgroundfetchsuccess", value);
}

jsbind::Any ServiceWorkerGlobalScope::onbackgroundfetchfail() const {
    return WorkerGlobalScope::get("onbackgroundfetchfail").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onbackgroundfetchfail(const jsbind::Any& value) {
    WorkerGlobalScope::set("onbackgroundfetchfail", value);
}

jsbind::Any ServiceWorkerGlobalScope::onbackgroundfetchabort() const {
    return WorkerGlobalScope::get("onbackgroundfetchabort").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onbackgroundfetchabort(const jsbind::Any& value) {
    WorkerGlobalScope::set("onbackgroundfetchabort", value);
}

jsbind::Any ServiceWorkerGlobalScope::onbackgroundfetchclick() const {
    return WorkerGlobalScope::get("onbackgroundfetchclick").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onbackgroundfetchclick(const jsbind::Any& value) {
    WorkerGlobalScope::set("onbackgroundfetchclick", value);
}

jsbind::Any ServiceWorkerGlobalScope::onsync() const {
    return WorkerGlobalScope::get("onsync").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onsync(const jsbind::Any& value) {
    WorkerGlobalScope::set("onsync", value);
}

jsbind::Any ServiceWorkerGlobalScope::oncontentdelete() const {
    return WorkerGlobalScope::get("oncontentdelete").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::oncontentdelete(const jsbind::Any& value) {
    WorkerGlobalScope::set("oncontentdelete", value);
}

CookieStore ServiceWorkerGlobalScope::cookieStore() const {
    return WorkerGlobalScope::get("cookieStore").as<CookieStore>();
}

jsbind::Any ServiceWorkerGlobalScope::oncookiechange() const {
    return WorkerGlobalScope::get("oncookiechange").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::oncookiechange(const jsbind::Any& value) {
    WorkerGlobalScope::set("oncookiechange", value);
}

jsbind::Any ServiceWorkerGlobalScope::onnotificationclick() const {
    return WorkerGlobalScope::get("onnotificationclick").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onnotificationclick(const jsbind::Any& value) {
    WorkerGlobalScope::set("onnotificationclick", value);
}

jsbind::Any ServiceWorkerGlobalScope::onnotificationclose() const {
    return WorkerGlobalScope::get("onnotificationclose").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onnotificationclose(const jsbind::Any& value) {
    WorkerGlobalScope::set("onnotificationclose", value);
}

jsbind::Any ServiceWorkerGlobalScope::oncanmakepayment() const {
    return WorkerGlobalScope::get("oncanmakepayment").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::oncanmakepayment(const jsbind::Any& value) {
    WorkerGlobalScope::set("oncanmakepayment", value);
}

jsbind::Any ServiceWorkerGlobalScope::onpaymentrequest() const {
    return WorkerGlobalScope::get("onpaymentrequest").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onpaymentrequest(const jsbind::Any& value) {
    WorkerGlobalScope::set("onpaymentrequest", value);
}

jsbind::Any ServiceWorkerGlobalScope::onperiodicsync() const {
    return WorkerGlobalScope::get("onperiodicsync").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onperiodicsync(const jsbind::Any& value) {
    WorkerGlobalScope::set("onperiodicsync", value);
}

jsbind::Any ServiceWorkerGlobalScope::onpush() const {
    return WorkerGlobalScope::get("onpush").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onpush(const jsbind::Any& value) {
    WorkerGlobalScope::set("onpush", value);
}

jsbind::Any ServiceWorkerGlobalScope::onpushsubscriptionchange() const {
    return WorkerGlobalScope::get("onpushsubscriptionchange").as<jsbind::Any>();
}

void ServiceWorkerGlobalScope::onpushsubscriptionchange(const jsbind::Any& value) {
    WorkerGlobalScope::set("onpushsubscriptionchange", value);
}

