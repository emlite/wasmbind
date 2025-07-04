#include <webbind/StorageBucket.hpp>
#include <webbind/StorageManager.hpp>
#include <webbind/IDBFactory.hpp>
#include <webbind/CacheStorage.hpp>
#include <webbind/FileSystemDirectoryHandle.hpp>


StorageBucket StorageBucket::take_ownership(Handle h) noexcept {
        return StorageBucket(h);
    }
StorageBucket StorageBucket::clone() const noexcept { return *this; }
StorageBucket::StorageBucket(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageBucket::StorageBucket(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString StorageBucket::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::Promise StorageBucket::persist() {
    return emlite::Val::call("persist").as<jsbind::Promise>();
}

jsbind::Promise StorageBucket::persisted() {
    return emlite::Val::call("persisted").as<jsbind::Promise>();
}

jsbind::Promise StorageBucket::estimate() {
    return emlite::Val::call("estimate").as<jsbind::Promise>();
}

jsbind::Promise StorageBucket::setExpires(const jsbind::Any& expires) {
    return emlite::Val::call("setExpires", expires).as<jsbind::Promise>();
}

jsbind::Promise StorageBucket::expires() {
    return emlite::Val::call("expires").as<jsbind::Promise>();
}

IDBFactory StorageBucket::indexedDB() const {
    return emlite::Val::get("indexedDB").as<IDBFactory>();
}

CacheStorage StorageBucket::caches() const {
    return emlite::Val::get("caches").as<CacheStorage>();
}

jsbind::Promise StorageBucket::getDirectory() {
    return emlite::Val::call("getDirectory").as<jsbind::Promise>();
}

