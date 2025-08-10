#include <webbind/FileSystemFileEntry.hpp>

namespace webbind {

FileSystemFileEntry FileSystemFileEntry::take_ownership(Handle h) noexcept {
    return FileSystemFileEntry(h);
}

FileSystemFileEntry FileSystemFileEntry::clone() const noexcept { return *this; }

emlite::Val FileSystemFileEntry::instance() noexcept { return emlite::Val::global("FileSystemFileEntry"); }

FileSystemFileEntry::FileSystemFileEntry(Handle h) noexcept : FileSystemEntry(emlite::Val::take_ownership(h)) {}

FileSystemFileEntry::FileSystemFileEntry(const emlite::Val &val) noexcept: FileSystemEntry(val) {}

jsbind::Undefined FileSystemFileEntry::file(const jsbind::Function& successCallback) {
    return FileSystemEntry::call("file", successCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemFileEntry::file(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return FileSystemEntry::call("file", successCallback, errorCallback).as<jsbind::Undefined>();
}


} // namespace webbind