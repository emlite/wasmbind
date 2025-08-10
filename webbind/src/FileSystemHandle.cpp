#include <webbind/FileSystemHandle.hpp>
#include <webbind/FileSystemHandle.hpp>
#include <webbind/FileSystemHandlePermissionDescriptor.hpp>

namespace webbind {

FileSystemHandle FileSystemHandle::take_ownership(Handle h) noexcept {
        return FileSystemHandle(h);
    }
FileSystemHandle FileSystemHandle::clone() const noexcept { return *this; }
emlite::Val FileSystemHandle::instance() noexcept { return emlite::Val::global("FileSystemHandle"); }
FileSystemHandle::FileSystemHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemHandle::FileSystemHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}

FileSystemHandleKind FileSystemHandle::kind() const {
    return emlite::Val::get("kind").as<FileSystemHandleKind>();
}

jsbind::String FileSystemHandle::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::Promise<bool> FileSystemHandle::isSameEntry(const FileSystemHandle& other) {
    return emlite::Val::call("isSameEntry", other).as<jsbind::Promise<bool>>();
}

jsbind::Promise<PermissionState> FileSystemHandle::queryPermission() {
    return emlite::Val::call("queryPermission").as<jsbind::Promise<PermissionState>>();
}

jsbind::Promise<PermissionState> FileSystemHandle::queryPermission(const FileSystemHandlePermissionDescriptor& descriptor) {
    return emlite::Val::call("queryPermission", descriptor).as<jsbind::Promise<PermissionState>>();
}

jsbind::Promise<PermissionState> FileSystemHandle::requestPermission() {
    return emlite::Val::call("requestPermission").as<jsbind::Promise<PermissionState>>();
}

jsbind::Promise<PermissionState> FileSystemHandle::requestPermission(const FileSystemHandlePermissionDescriptor& descriptor) {
    return emlite::Val::call("requestPermission", descriptor).as<jsbind::Promise<PermissionState>>();
}


} // namespace webbind