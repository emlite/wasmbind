#include "webbind/StorageBucket.hpp"
#include "webbind/StorageEstimate.hpp"
#include "webbind/IDBFactory.hpp"
#include "webbind/CacheStorage.hpp"
#include "webbind/FileSystemDirectoryHandle.hpp"

namespace webbind {

StorageBucket StorageBucket::take_ownership(Handle h) noexcept {
        return StorageBucket(h);
    }
StorageBucket StorageBucket::clone() const noexcept { return *this; }
emlite::Val StorageBucket::instance() noexcept { return emlite::Val::global("StorageBucket"); }
StorageBucket::StorageBucket(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageBucket::StorageBucket(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String StorageBucket::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::Promise<bool> StorageBucket::persist() {
    return emlite::Val::call("persist").as<jsbind::Promise<bool>>();
}

jsbind::Promise<bool> StorageBucket::persisted() {
    return emlite::Val::call("persisted").as<jsbind::Promise<bool>>();
}

jsbind::Promise<StorageEstimate> StorageBucket::estimate() {
    return emlite::Val::call("estimate").as<jsbind::Promise<StorageEstimate>>();
}

jsbind::Promise<jsbind::Undefined> StorageBucket::setExpires(const jsbind::Any& expires) {
    return emlite::Val::call("setExpires", expires).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Any> StorageBucket::expires() {
    return emlite::Val::call("expires").as<jsbind::Promise<jsbind::Any>>();
}

IDBFactory StorageBucket::indexedDB() const {
    return emlite::Val::get("indexedDB").as<IDBFactory>();
}

CacheStorage StorageBucket::caches() const {
    return emlite::Val::get("caches").as<CacheStorage>();
}

jsbind::Promise<FileSystemDirectoryHandle> StorageBucket::getDirectory() {
    return emlite::Val::call("getDirectory").as<jsbind::Promise<FileSystemDirectoryHandle>>();
}


} // namespace webbind