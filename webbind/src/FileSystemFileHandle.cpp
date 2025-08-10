#include "webbind/FileSystemFileHandle.hpp"
#include "webbind/File.hpp"
#include "webbind/FileSystemWritableFileStream.hpp"
#include "webbind/FileSystemCreateWritableOptions.hpp"
#include "webbind/FileSystemSyncAccessHandle.hpp"

namespace webbind {

FileSystemFileHandle FileSystemFileHandle::take_ownership(Handle h) noexcept {
        return FileSystemFileHandle(h);
    }
FileSystemFileHandle FileSystemFileHandle::clone() const noexcept { return *this; }
emlite::Val FileSystemFileHandle::instance() noexcept { return emlite::Val::global("FileSystemFileHandle"); }
FileSystemFileHandle::FileSystemFileHandle(Handle h) noexcept : FileSystemHandle(emlite::Val::take_ownership(h)) {}
FileSystemFileHandle::FileSystemFileHandle(const emlite::Val &val) noexcept: FileSystemHandle(val) {}

jsbind::Promise<File> FileSystemFileHandle::getFile() {
    return FileSystemHandle::call("getFile").as<jsbind::Promise<File>>();
}

jsbind::Promise<FileSystemWritableFileStream> FileSystemFileHandle::createWritable() {
    return FileSystemHandle::call("createWritable").as<jsbind::Promise<FileSystemWritableFileStream>>();
}

jsbind::Promise<FileSystemWritableFileStream> FileSystemFileHandle::createWritable(const FileSystemCreateWritableOptions& options) {
    return FileSystemHandle::call("createWritable", options).as<jsbind::Promise<FileSystemWritableFileStream>>();
}

jsbind::Promise<FileSystemSyncAccessHandle> FileSystemFileHandle::createSyncAccessHandle() {
    return FileSystemHandle::call("createSyncAccessHandle").as<jsbind::Promise<FileSystemSyncAccessHandle>>();
}


} // namespace webbind