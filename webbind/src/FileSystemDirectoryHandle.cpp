#include "webbind/FileSystemDirectoryHandle.hpp"
#include "webbind/FileSystemFileHandle.hpp"
#include "webbind/FileSystemGetFileOptions.hpp"
#include "webbind/FileSystemDirectoryHandle.hpp"
#include "webbind/FileSystemGetDirectoryOptions.hpp"
#include "webbind/FileSystemRemoveOptions.hpp"

namespace webbind {

FileSystemDirectoryHandle FileSystemDirectoryHandle::take_ownership(Handle h) noexcept {
        return FileSystemDirectoryHandle(h);
    }
FileSystemDirectoryHandle FileSystemDirectoryHandle::clone() const noexcept { return *this; }
emlite::Val FileSystemDirectoryHandle::instance() noexcept { return emlite::Val::global("FileSystemDirectoryHandle"); }
FileSystemDirectoryHandle::FileSystemDirectoryHandle(Handle h) noexcept : FileSystemHandle(emlite::Val::take_ownership(h)) {}
FileSystemDirectoryHandle::FileSystemDirectoryHandle(const emlite::Val &val) noexcept: FileSystemHandle(val) {}

jsbind::Promise<FileSystemFileHandle> FileSystemDirectoryHandle::getFileHandle(const jsbind::String& name) {
    return FileSystemHandle::call("getFileHandle", name).as<jsbind::Promise<FileSystemFileHandle>>();
}

jsbind::Promise<FileSystemFileHandle> FileSystemDirectoryHandle::getFileHandle(const jsbind::String& name, const FileSystemGetFileOptions& options) {
    return FileSystemHandle::call("getFileHandle", name, options).as<jsbind::Promise<FileSystemFileHandle>>();
}

jsbind::Promise<FileSystemDirectoryHandle> FileSystemDirectoryHandle::getDirectoryHandle(const jsbind::String& name) {
    return FileSystemHandle::call("getDirectoryHandle", name).as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Promise<FileSystemDirectoryHandle> FileSystemDirectoryHandle::getDirectoryHandle(const jsbind::String& name, const FileSystemGetDirectoryOptions& options) {
    return FileSystemHandle::call("getDirectoryHandle", name, options).as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Promise<jsbind::Undefined> FileSystemDirectoryHandle::removeEntry(const jsbind::String& name) {
    return FileSystemHandle::call("removeEntry", name).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> FileSystemDirectoryHandle::removeEntry(const jsbind::String& name, const FileSystemRemoveOptions& options) {
    return FileSystemHandle::call("removeEntry", name, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::String>> FileSystemDirectoryHandle::resolve(const FileSystemHandle& possibleDescendant) {
    return FileSystemHandle::call("resolve", possibleDescendant).as<jsbind::Promise<jsbind::TypedArray<jsbind::String>>>();
}


} // namespace webbind