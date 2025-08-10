#include <webbind/FileSystemDirectoryEntry.hpp>
#include <webbind/FileSystemDirectoryReader.hpp>
#include <webbind/FileSystemFlags.hpp>

namespace webbind {

FileSystemDirectoryEntry FileSystemDirectoryEntry::take_ownership(Handle h) noexcept {
    return FileSystemDirectoryEntry(h);
}

FileSystemDirectoryEntry FileSystemDirectoryEntry::clone() const noexcept { return *this; }

emlite::Val FileSystemDirectoryEntry::instance() noexcept { return emlite::Val::global("FileSystemDirectoryEntry"); }

FileSystemDirectoryEntry::FileSystemDirectoryEntry(Handle h) noexcept : FileSystemEntry(emlite::Val::take_ownership(h)) {}

FileSystemDirectoryEntry::FileSystemDirectoryEntry(const emlite::Val &val) noexcept: FileSystemEntry(val) {}

FileSystemDirectoryReader FileSystemDirectoryEntry::createReader() {
    return FileSystemEntry::call("createReader").as<FileSystemDirectoryReader>();
}

jsbind::Undefined FileSystemDirectoryEntry::getFile() {
    return FileSystemEntry::call("getFile").as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getFile(const jsbind::String& path) {
    return FileSystemEntry::call("getFile", path).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getFile(const jsbind::String& path, const FileSystemFlags& options) {
    return FileSystemEntry::call("getFile", path, options).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getFile(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback) {
    return FileSystemEntry::call("getFile", path, options, successCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getFile(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return FileSystemEntry::call("getFile", path, options, successCallback, errorCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getDirectory() {
    return FileSystemEntry::call("getDirectory").as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getDirectory(const jsbind::String& path) {
    return FileSystemEntry::call("getDirectory", path).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getDirectory(const jsbind::String& path, const FileSystemFlags& options) {
    return FileSystemEntry::call("getDirectory", path, options).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getDirectory(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback) {
    return FileSystemEntry::call("getDirectory", path, options, successCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getDirectory(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return FileSystemEntry::call("getDirectory", path, options, successCallback, errorCallback).as<jsbind::Undefined>();
}


} // namespace webbind