#include <webbind/Cache.hpp>
#include <webbind/CacheQueryOptions.hpp>
#include <webbind/Response.hpp>
#include <webbind/Request.hpp>

namespace webbind {

Cache Cache::take_ownership(Handle h) noexcept {
    return Cache(h);
}

Cache Cache::clone() const noexcept { return *this; }

emlite::Val Cache::instance() noexcept { return emlite::Val::global("Cache"); }

Cache::Cache(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Cache::Cache(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Any> Cache::match(const jsbind::Any& request) {
    return emlite::Val::call("match", request).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> Cache::match(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("match", request, options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::TypedArray<Response>> Cache::matchAll() {
    return emlite::Val::call("matchAll").as<jsbind::Promise<jsbind::TypedArray<Response>>>();
}

jsbind::Promise<jsbind::TypedArray<Response>> Cache::matchAll(const jsbind::Any& request) {
    return emlite::Val::call("matchAll", request).as<jsbind::Promise<jsbind::TypedArray<Response>>>();
}

jsbind::Promise<jsbind::TypedArray<Response>> Cache::matchAll(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("matchAll", request, options).as<jsbind::Promise<jsbind::TypedArray<Response>>>();
}

jsbind::Promise<jsbind::Undefined> Cache::add(const jsbind::Any& request) {
    return emlite::Val::call("add", request).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Cache::addAll(const jsbind::TypedArray<jsbind::Any>& requests) {
    return emlite::Val::call("addAll", requests).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> Cache::put(const jsbind::Any& request, const Response& response) {
    return emlite::Val::call("put", request, response).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<bool> Cache::delete_(const jsbind::Any& request) {
    return emlite::Val::call("delete", request).as<jsbind::Promise<bool>>();
}

jsbind::Promise<bool> Cache::delete_(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("delete", request, options).as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::TypedArray<Request>> Cache::keys() {
    return emlite::Val::call("keys").as<jsbind::Promise<jsbind::TypedArray<Request>>>();
}

jsbind::Promise<jsbind::TypedArray<Request>> Cache::keys(const jsbind::Any& request) {
    return emlite::Val::call("keys", request).as<jsbind::Promise<jsbind::TypedArray<Request>>>();
}

jsbind::Promise<jsbind::TypedArray<Request>> Cache::keys(const jsbind::Any& request, const CacheQueryOptions& options) {
    return emlite::Val::call("keys", request, options).as<jsbind::Promise<jsbind::TypedArray<Request>>>();
}


} // namespace webbind