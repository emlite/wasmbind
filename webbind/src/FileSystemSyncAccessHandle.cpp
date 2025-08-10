#include <webbind/FileSystemSyncAccessHandle.hpp>
#include <webbind/FileSystemReadWriteOptions.hpp>

namespace webbind {

FileSystemSyncAccessHandle FileSystemSyncAccessHandle::take_ownership(Handle h) noexcept {
    return FileSystemSyncAccessHandle(h);
}

FileSystemSyncAccessHandle FileSystemSyncAccessHandle::clone() const noexcept { return *this; }

emlite::Val FileSystemSyncAccessHandle::instance() noexcept { return emlite::Val::global("FileSystemSyncAccessHandle"); }

FileSystemSyncAccessHandle::FileSystemSyncAccessHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FileSystemSyncAccessHandle::FileSystemSyncAccessHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}

long long FileSystemSyncAccessHandle::read(const jsbind::Any& buffer) {
    return emlite::Val::call("read", buffer).as<long long>();
}

long long FileSystemSyncAccessHandle::read(const jsbind::Any& buffer, const FileSystemReadWriteOptions& options) {
    return emlite::Val::call("read", buffer, options).as<long long>();
}

long long FileSystemSyncAccessHandle::write(const jsbind::Any& buffer) {
    return emlite::Val::call("write", buffer).as<long long>();
}

long long FileSystemSyncAccessHandle::write(const jsbind::Any& buffer, const FileSystemReadWriteOptions& options) {
    return emlite::Val::call("write", buffer, options).as<long long>();
}

jsbind::Undefined FileSystemSyncAccessHandle::truncate(long long newSize) {
    return emlite::Val::call("truncate", newSize).as<jsbind::Undefined>();
}

long long FileSystemSyncAccessHandle::getSize() {
    return emlite::Val::call("getSize").as<long long>();
}

jsbind::Undefined FileSystemSyncAccessHandle::flush() {
    return emlite::Val::call("flush").as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemSyncAccessHandle::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}


} // namespace webbind