#include <webbind/StorageAccessHandle.hpp>
#include <webbind/Storage.hpp>
#include <webbind/IDBFactory.hpp>
#include <webbind/LockManager.hpp>
#include <webbind/CacheStorage.hpp>
#include <webbind/FileSystemDirectoryHandle.hpp>
#include <webbind/StorageEstimate.hpp>
#include <webbind/BroadcastChannel.hpp>
#include <webbind/SharedWorker.hpp>

namespace webbind {

StorageAccessHandle StorageAccessHandle::take_ownership(Handle h) noexcept {
        return StorageAccessHandle(h);
    }
StorageAccessHandle StorageAccessHandle::clone() const noexcept { return *this; }
emlite::Val StorageAccessHandle::instance() noexcept { return emlite::Val::global("StorageAccessHandle"); }
StorageAccessHandle::StorageAccessHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageAccessHandle::StorageAccessHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}

Storage StorageAccessHandle::sessionStorage() const {
    return emlite::Val::get("sessionStorage").as<Storage>();
}

Storage StorageAccessHandle::localStorage() const {
    return emlite::Val::get("localStorage").as<Storage>();
}

IDBFactory StorageAccessHandle::indexedDB() const {
    return emlite::Val::get("indexedDB").as<IDBFactory>();
}

LockManager StorageAccessHandle::locks() const {
    return emlite::Val::get("locks").as<LockManager>();
}

CacheStorage StorageAccessHandle::caches() const {
    return emlite::Val::get("caches").as<CacheStorage>();
}

jsbind::Promise<FileSystemDirectoryHandle> StorageAccessHandle::getDirectory() {
    return emlite::Val::call("getDirectory").as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Promise<StorageEstimate> StorageAccessHandle::estimate() {
    return emlite::Val::call("estimate").as<jsbind::Promise<StorageEstimate>>();
}

jsbind::String StorageAccessHandle::createObjectURL(const jsbind::Any& obj) {
    return emlite::Val::call("createObjectURL", obj).as<jsbind::String>();
}

jsbind::Undefined StorageAccessHandle::revokeObjectURL(const jsbind::String& url) {
    return emlite::Val::call("revokeObjectURL", url).as<jsbind::Undefined>();
}

BroadcastChannel StorageAccessHandle::BroadcastChannel_(const jsbind::String& name) {
    return emlite::Val::call("BroadcastChannel", name).as<BroadcastChannel>();
}

SharedWorker StorageAccessHandle::SharedWorker_(const jsbind::String& scriptURL) {
    return emlite::Val::call("SharedWorker", scriptURL).as<SharedWorker>();
}

SharedWorker StorageAccessHandle::SharedWorker_(const jsbind::String& scriptURL, const jsbind::Any& options) {
    return emlite::Val::call("SharedWorker", scriptURL, options).as<SharedWorker>();
}


} // namespace webbind