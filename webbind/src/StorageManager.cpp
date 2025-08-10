#include <webbind/StorageManager.hpp>
#include <webbind/StorageEstimate.hpp>
#include <webbind/FileSystemDirectoryHandle.hpp>

namespace webbind {

StorageManager StorageManager::take_ownership(Handle h) noexcept {
    return StorageManager(h);
}

StorageManager StorageManager::clone() const noexcept { return *this; }

emlite::Val StorageManager::instance() noexcept { return emlite::Val::global("StorageManager"); }

StorageManager::StorageManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

StorageManager::StorageManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<bool> StorageManager::persisted() {
    return emlite::Val::call("persisted").as<jsbind::Promise<bool>>();
}

jsbind::Promise<bool> StorageManager::persist() {
    return emlite::Val::call("persist").as<jsbind::Promise<bool>>();
}

jsbind::Promise<StorageEstimate> StorageManager::estimate() {
    return emlite::Val::call("estimate").as<jsbind::Promise<StorageEstimate>>();
}

jsbind::Promise<FileSystemDirectoryHandle> StorageManager::getDirectory() {
    return emlite::Val::call("getDirectory").as<jsbind::Promise<FileSystemDirectoryHandle>>();
}


} // namespace webbind