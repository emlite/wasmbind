#include <webbind/Cache.hpp>
#include <webbind/BackgroundFetchRegistration.hpp>
#include <webbind/Response.hpp>
#include <webbind/Request.hpp>


Cache Cache::take_ownership(Handle h) noexcept {
        return Cache(h);
    }
Cache Cache::clone() const noexcept { return *this; }
Cache::Cache(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Cache::Cache(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise Cache::match(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("match", request, options).as<jsbind::Promise>();
}

jsbind::Promise Cache::matchAll(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("matchAll", request, options).as<jsbind::Promise>();
}

jsbind::Promise Cache::add(const jsbind::Any& request) {
    return emlite::Val::call("add", request).as<jsbind::Promise>();
}

jsbind::Promise Cache::addAll(const jsbind::Sequence<jsbind::Any>& requests) {
    return emlite::Val::call("addAll", requests).as<jsbind::Promise>();
}

jsbind::Promise Cache::put(const jsbind::Any& request, const Response& response) {
    return emlite::Val::call("put", request, response).as<jsbind::Promise>();
}

jsbind::Promise Cache::delete_(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("delete", request, options).as<jsbind::Promise>();
}

jsbind::Promise Cache::keys(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("keys", request, options).as<jsbind::Promise>();
}

