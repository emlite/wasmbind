#include <webbind/StorageManager.hpp>
#include <webbind/FileSystemDirectoryHandle.hpp>


StorageEstimate::StorageEstimate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageEstimate StorageEstimate::take_ownership(Handle h) noexcept {
        return StorageEstimate(h);
    }
StorageEstimate::StorageEstimate(const emlite::Val &val) noexcept: emlite::Val(val) {}
StorageEstimate::StorageEstimate() noexcept: emlite::Val(emlite::Val::object()) {}
StorageEstimate StorageEstimate::clone() const noexcept { return *this; }

long long StorageEstimate::usage() const {
    return emlite::Val::get("usage").as<long long>();
}

void StorageEstimate::usage(long long value) {
    emlite::Val::set("usage", value);
}

long long StorageEstimate::quota() const {
    return emlite::Val::get("quota").as<long long>();
}

void StorageEstimate::quota(long long value) {
    emlite::Val::set("quota", value);
}

StorageManager StorageManager::take_ownership(Handle h) noexcept {
        return StorageManager(h);
    }
StorageManager StorageManager::clone() const noexcept { return *this; }
StorageManager::StorageManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageManager::StorageManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise StorageManager::persisted() {
    return emlite::Val::call("persisted").as<jsbind::Promise>();
}

jsbind::Promise StorageManager::persist() {
    return emlite::Val::call("persist").as<jsbind::Promise>();
}

jsbind::Promise StorageManager::estimate() {
    return emlite::Val::call("estimate").as<jsbind::Promise>();
}

jsbind::Promise StorageManager::getDirectory() {
    return emlite::Val::call("getDirectory").as<jsbind::Promise>();
}

