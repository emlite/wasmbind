#include <webbind/BackgroundFetchRegistration.hpp>
#include <webbind/BackgroundFetchRecord.hpp>
#include <webbind/CacheQueryOptions.hpp>

namespace webbind {

BackgroundFetchRegistration BackgroundFetchRegistration::take_ownership(Handle h) noexcept {
    return BackgroundFetchRegistration(h);
}

BackgroundFetchRegistration BackgroundFetchRegistration::clone() const noexcept { return *this; }

emlite::Val BackgroundFetchRegistration::instance() noexcept { return emlite::Val::global("BackgroundFetchRegistration"); }

BackgroundFetchRegistration::BackgroundFetchRegistration(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

BackgroundFetchRegistration::BackgroundFetchRegistration(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String BackgroundFetchRegistration::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

long long BackgroundFetchRegistration::uploadTotal() const {
    return EventTarget::get("uploadTotal").as<long long>();
}

long long BackgroundFetchRegistration::uploaded() const {
    return EventTarget::get("uploaded").as<long long>();
}

long long BackgroundFetchRegistration::downloadTotal() const {
    return EventTarget::get("downloadTotal").as<long long>();
}

long long BackgroundFetchRegistration::downloaded() const {
    return EventTarget::get("downloaded").as<long long>();
}

BackgroundFetchResult BackgroundFetchRegistration::result() const {
    return EventTarget::get("result").as<BackgroundFetchResult>();
}

BackgroundFetchFailureReason BackgroundFetchRegistration::failureReason() const {
    return EventTarget::get("failureReason").as<BackgroundFetchFailureReason>();
}

bool BackgroundFetchRegistration::recordsAvailable() const {
    return EventTarget::get("recordsAvailable").as<bool>();
}

jsbind::Any BackgroundFetchRegistration::onprogress() const {
    return EventTarget::get("onprogress").as<jsbind::Any>();
}

void BackgroundFetchRegistration::onprogress(const jsbind::Any& value) {
    EventTarget::set("onprogress", value);
}

jsbind::Promise<bool> BackgroundFetchRegistration::abort() {
    return EventTarget::call("abort").as<jsbind::Promise<bool>>();
}

jsbind::Promise<BackgroundFetchRecord> BackgroundFetchRegistration::match(const jsbind::Any& request) {
    return EventTarget::call("match", request).as<jsbind::Promise<BackgroundFetchRecord>>();
}

jsbind::Promise<BackgroundFetchRecord> BackgroundFetchRegistration::match(const jsbind::Any& request, const CacheQueryOptions& options) {
    return EventTarget::call("match", request, options).as<jsbind::Promise<BackgroundFetchRecord>>();
}

jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>> BackgroundFetchRegistration::matchAll() {
    return EventTarget::call("matchAll").as<jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>>>();
}

jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>> BackgroundFetchRegistration::matchAll(const jsbind::Any& request) {
    return EventTarget::call("matchAll", request).as<jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>>>();
}

jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>> BackgroundFetchRegistration::matchAll(const jsbind::Any& request, const CacheQueryOptions& options) {
    return EventTarget::call("matchAll", request, options).as<jsbind::Promise<jsbind::TypedArray<BackgroundFetchRecord>>>();
}


} // namespace webbind