#include <webbind/StorageBucketManager.hpp>
#include <webbind/StorageBucket.hpp>


StorageBucketOptions::StorageBucketOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageBucketOptions StorageBucketOptions::take_ownership(Handle h) noexcept {
        return StorageBucketOptions(h);
    }
StorageBucketOptions::StorageBucketOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
StorageBucketOptions::StorageBucketOptions() noexcept: emlite::Val(emlite::Val::object()) {}
StorageBucketOptions StorageBucketOptions::clone() const noexcept { return *this; }

bool StorageBucketOptions::persisted() const {
    return emlite::Val::get("persisted").as<bool>();
}

void StorageBucketOptions::persisted(bool value) {
    emlite::Val::set("persisted", value);
}

long long StorageBucketOptions::quota() const {
    return emlite::Val::get("quota").as<long long>();
}

void StorageBucketOptions::quota(long long value) {
    emlite::Val::set("quota", value);
}

jsbind::Any StorageBucketOptions::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

void StorageBucketOptions::expires(const jsbind::Any& value) {
    emlite::Val::set("expires", value);
}

StorageBucketManager StorageBucketManager::take_ownership(Handle h) noexcept {
        return StorageBucketManager(h);
    }
StorageBucketManager StorageBucketManager::clone() const noexcept { return *this; }
StorageBucketManager::StorageBucketManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageBucketManager::StorageBucketManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise StorageBucketManager::open(const jsbind::DOMString& name) {
    return emlite::Val::call("open", name).as<jsbind::Promise>();
}

jsbind::Promise StorageBucketManager::open(const jsbind::DOMString& name, const StorageBucketOptions& options) {
    return emlite::Val::call("open", name, options).as<jsbind::Promise>();
}

jsbind::Promise StorageBucketManager::keys() {
    return emlite::Val::call("keys").as<jsbind::Promise>();
}

jsbind::Promise StorageBucketManager::delete_(const jsbind::DOMString& name) {
    return emlite::Val::call("delete", name).as<jsbind::Promise>();
}

