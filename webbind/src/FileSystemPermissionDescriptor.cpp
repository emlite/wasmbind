#include <webbind/FileSystemPermissionDescriptor.hpp>
#include <webbind/FileSystemHandle.hpp>

using emlite::Val;
namespace webbind {

FileSystemPermissionDescriptor::FileSystemPermissionDescriptor(Handle h) noexcept : PermissionDescriptor(emlite::Val::take_ownership(h)) {}
FileSystemPermissionDescriptor FileSystemPermissionDescriptor::take_ownership(Handle h) noexcept {
        return FileSystemPermissionDescriptor(h);
    }
FileSystemPermissionDescriptor::FileSystemPermissionDescriptor(const emlite::Val &val) noexcept: PermissionDescriptor(val) {}
FileSystemPermissionDescriptor::FileSystemPermissionDescriptor() noexcept: PermissionDescriptor(emlite::Val::object()) {}
FileSystemPermissionDescriptor FileSystemPermissionDescriptor::clone() const noexcept { return *this; }

FileSystemHandle FileSystemPermissionDescriptor::handle() const {
    return emlite::Val::get("handle").as<FileSystemHandle>();
}

void FileSystemPermissionDescriptor::handle(const FileSystemHandle& value) {
    emlite::Val::set("handle", value);
}

FileSystemPermissionMode FileSystemPermissionDescriptor::mode() const {
    return emlite::Val::get("mode").as<FileSystemPermissionMode>();
}

void FileSystemPermissionDescriptor::mode(const FileSystemPermissionMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind