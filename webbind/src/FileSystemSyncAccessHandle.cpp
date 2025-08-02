#include <webbind/FileSystemSyncAccessHandle.hpp>


FileSystemReadWriteOptions::FileSystemReadWriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemReadWriteOptions FileSystemReadWriteOptions::take_ownership(Handle h) noexcept {
        return FileSystemReadWriteOptions(h);
    }
FileSystemReadWriteOptions::FileSystemReadWriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemReadWriteOptions::FileSystemReadWriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemReadWriteOptions FileSystemReadWriteOptions::clone() const noexcept { return *this; }

long long FileSystemReadWriteOptions::at() const {
    return emlite::Val::get("at").as<long long>();
}

void FileSystemReadWriteOptions::at(long long value) {
    emlite::Val::set("at", value);
}

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

