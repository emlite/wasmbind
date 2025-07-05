#include <webbind/FileSystemHandle.hpp>


FileSystemHandlePermissionDescriptor::FileSystemHandlePermissionDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor::take_ownership(Handle h) noexcept {
        return FileSystemHandlePermissionDescriptor(h);
    }
FileSystemHandlePermissionDescriptor::FileSystemHandlePermissionDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemHandlePermissionDescriptor::FileSystemHandlePermissionDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor::clone() const noexcept { return *this; }

FileSystemPermissionMode FileSystemHandlePermissionDescriptor::mode() const {
    return emlite::Val::get("mode").as<FileSystemPermissionMode>();
}

void FileSystemHandlePermissionDescriptor::mode(const FileSystemPermissionMode& value) {
    emlite::Val::set("mode", value);
}

FileSystemHandle FileSystemHandle::take_ownership(Handle h) noexcept {
        return FileSystemHandle(h);
    }
FileSystemHandle FileSystemHandle::clone() const noexcept { return *this; }
FileSystemHandle::FileSystemHandle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemHandle::FileSystemHandle(const emlite::Val &val) noexcept: emlite::Val(val) {}


FileSystemHandleKind FileSystemHandle::kind() const {
    return emlite::Val::get("kind").as<FileSystemHandleKind>();
}

jsbind::USVString FileSystemHandle::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

jsbind::Promise FileSystemHandle::isSameEntry(const FileSystemHandle& other) {
    return emlite::Val::call("isSameEntry", other).as<jsbind::Promise>();
}

jsbind::Promise FileSystemHandle::queryPermission() {
    return emlite::Val::call("queryPermission").as<jsbind::Promise>();
}

jsbind::Promise FileSystemHandle::queryPermission(const FileSystemHandlePermissionDescriptor& descriptor) {
    return emlite::Val::call("queryPermission", descriptor).as<jsbind::Promise>();
}

jsbind::Promise FileSystemHandle::requestPermission() {
    return emlite::Val::call("requestPermission").as<jsbind::Promise>();
}

jsbind::Promise FileSystemHandle::requestPermission(const FileSystemHandlePermissionDescriptor& descriptor) {
    return emlite::Val::call("requestPermission", descriptor).as<jsbind::Promise>();
}

