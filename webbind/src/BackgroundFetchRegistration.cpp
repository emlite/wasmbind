#include <webbind/BackgroundFetchRegistration.hpp>
#include <webbind/BackgroundFetchRecord.hpp>


CacheQueryOptions::CacheQueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CacheQueryOptions CacheQueryOptions::take_ownership(Handle h) noexcept {
        return CacheQueryOptions(h);
    }
CacheQueryOptions::CacheQueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CacheQueryOptions::CacheQueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CacheQueryOptions CacheQueryOptions::clone() const noexcept { return *this; }

bool CacheQueryOptions::ignoreSearch() const {
    return emlite::Val::get("ignoreSearch").as<bool>();
}

void CacheQueryOptions::ignoreSearch(bool value) {
    emlite::Val::set("ignoreSearch", value);
}

bool CacheQueryOptions::ignoreMethod() const {
    return emlite::Val::get("ignoreMethod").as<bool>();
}

void CacheQueryOptions::ignoreMethod(bool value) {
    emlite::Val::set("ignoreMethod", value);
}

bool CacheQueryOptions::ignoreVary() const {
    return emlite::Val::get("ignoreVary").as<bool>();
}

void CacheQueryOptions::ignoreVary(bool value) {
    emlite::Val::set("ignoreVary", value);
}

BackgroundFetchRegistration BackgroundFetchRegistration::take_ownership(Handle h) noexcept {
        return BackgroundFetchRegistration(h);
    }
BackgroundFetchRegistration BackgroundFetchRegistration::clone() const noexcept { return *this; }
BackgroundFetchRegistration::BackgroundFetchRegistration(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BackgroundFetchRegistration::BackgroundFetchRegistration(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::DOMString BackgroundFetchRegistration::id() const {
    return EventTarget::get("id").as<jsbind::DOMString>();
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

jsbind::Promise BackgroundFetchRegistration::abort() {
    return EventTarget::call("abort").as<jsbind::Promise>();
}

jsbind::Promise BackgroundFetchRegistration::match(const jsbind::Any& request, const CacheQueryOptions& options) {
    return EventTarget::call("match", request, options).as<jsbind::Promise>();
}

jsbind::Promise BackgroundFetchRegistration::matchAll(const jsbind::Any& request, const CacheQueryOptions& options) {
    return EventTarget::call("matchAll", request, options).as<jsbind::Promise>();
}

