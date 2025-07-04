#include <webbind/FileSystemFileEntry.hpp>


FileSystemFileEntry FileSystemFileEntry::take_ownership(Handle h) noexcept {
        return FileSystemFileEntry(h);
    }
FileSystemFileEntry FileSystemFileEntry::clone() const noexcept { return *this; }
FileSystemFileEntry::FileSystemFileEntry(Handle h) noexcept : FileSystemEntry(emlite::Val::take_ownership(h)) {}
FileSystemFileEntry::FileSystemFileEntry(const emlite::Val &val) noexcept: FileSystemEntry(val) {}


jsbind::Undefined FileSystemFileEntry::file(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return FileSystemEntry::call("file", successCallback, errorCallback).as<jsbind::Undefined>();
}

