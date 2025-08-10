#include <webbind/StorageBucketManager.hpp>
#include <webbind/StorageBucket.hpp>
#include <webbind/StorageBucketOptions.hpp>

namespace webbind {

StorageBucketManager StorageBucketManager::take_ownership(Handle h) noexcept {
        return StorageBucketManager(h);
    }
StorageBucketManager StorageBucketManager::clone() const noexcept { return *this; }
emlite::Val StorageBucketManager::instance() noexcept { return emlite::Val::global("StorageBucketManager"); }
StorageBucketManager::StorageBucketManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageBucketManager::StorageBucketManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<StorageBucket> StorageBucketManager::open(const jsbind::String& name) {
    return emlite::Val::call("open", name).as<jsbind::Promise<StorageBucket>>();
}

jsbind::Promise<StorageBucket> StorageBucketManager::open(const jsbind::String& name, const StorageBucketOptions& options) {
    return emlite::Val::call("open", name, options).as<jsbind::Promise<StorageBucket>>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::String>> StorageBucketManager::keys() {
    return emlite::Val::call("keys").as<jsbind::Promise<jsbind::TypedArray<jsbind::String>>>();
}

jsbind::Promise<jsbind::Undefined> StorageBucketManager::delete_(const jsbind::String& name) {
    return emlite::Val::call("delete", name).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind