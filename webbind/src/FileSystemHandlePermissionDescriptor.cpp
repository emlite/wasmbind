#include <webbind/FileSystemHandlePermissionDescriptor.hpp>

namespace webbind {

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


} // namespace webbind