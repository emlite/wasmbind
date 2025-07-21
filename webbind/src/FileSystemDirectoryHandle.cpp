#include <webbind/FileSystemDirectoryHandle.hpp>
#include <webbind/FileSystemFileHandle.hpp>


FileSystemGetFileOptions::FileSystemGetFileOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemGetFileOptions FileSystemGetFileOptions::take_ownership(Handle h) noexcept {
        return FileSystemGetFileOptions(h);
    }
FileSystemGetFileOptions::FileSystemGetFileOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemGetFileOptions::FileSystemGetFileOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemGetFileOptions FileSystemGetFileOptions::clone() const noexcept { return *this; }

bool FileSystemGetFileOptions::create() const {
    return emlite::Val::get("create").as<bool>();
}

void FileSystemGetFileOptions::create(bool value) {
    emlite::Val::set("create", value);
}

FileSystemGetDirectoryOptions::FileSystemGetDirectoryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions::take_ownership(Handle h) noexcept {
        return FileSystemGetDirectoryOptions(h);
    }
FileSystemGetDirectoryOptions::FileSystemGetDirectoryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemGetDirectoryOptions::FileSystemGetDirectoryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions::clone() const noexcept { return *this; }

bool FileSystemGetDirectoryOptions::create() const {
    return emlite::Val::get("create").as<bool>();
}

void FileSystemGetDirectoryOptions::create(bool value) {
    emlite::Val::set("create", value);
}

FileSystemRemoveOptions::FileSystemRemoveOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemRemoveOptions FileSystemRemoveOptions::take_ownership(Handle h) noexcept {
        return FileSystemRemoveOptions(h);
    }
FileSystemRemoveOptions::FileSystemRemoveOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemRemoveOptions::FileSystemRemoveOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemRemoveOptions FileSystemRemoveOptions::clone() const noexcept { return *this; }

bool FileSystemRemoveOptions::recursive() const {
    return emlite::Val::get("recursive").as<bool>();
}

void FileSystemRemoveOptions::recursive(bool value) {
    emlite::Val::set("recursive", value);
}

FileSystemDirectoryHandle FileSystemDirectoryHandle::take_ownership(Handle h) noexcept {
        return FileSystemDirectoryHandle(h);
    }
FileSystemDirectoryHandle FileSystemDirectoryHandle::clone() const noexcept { return *this; }
FileSystemDirectoryHandle::FileSystemDirectoryHandle(Handle h) noexcept : FileSystemHandle(emlite::Val::take_ownership(h)) {}
FileSystemDirectoryHandle::FileSystemDirectoryHandle(const emlite::Val &val) noexcept: FileSystemHandle(val) {}


jsbind::Promise<FileSystemFileHandle> FileSystemDirectoryHandle::getFileHandle(const jsbind::USVString& name) {
    return FileSystemHandle::call("getFileHandle", name).as<jsbind::Promise<FileSystemFileHandle>>();
}

jsbind::Promise<FileSystemFileHandle> FileSystemDirectoryHandle::getFileHandle(const jsbind::USVString& name, const FileSystemGetFileOptions& options) {
    return FileSystemHandle::call("getFileHandle", name, options).as<jsbind::Promise<FileSystemFileHandle>>();
}

jsbind::Promise<FileSystemDirectoryHandle> FileSystemDirectoryHandle::getDirectoryHandle(const jsbind::USVString& name) {
    return FileSystemHandle::call("getDirectoryHandle", name).as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Promise<FileSystemDirectoryHandle> FileSystemDirectoryHandle::getDirectoryHandle(const jsbind::USVString& name, const FileSystemGetDirectoryOptions& options) {
    return FileSystemHandle::call("getDirectoryHandle", name, options).as<jsbind::Promise<FileSystemDirectoryHandle>>();
}

jsbind::Promise<jsbind::Undefined> FileSystemDirectoryHandle::removeEntry(const jsbind::USVString& name) {
    return FileSystemHandle::call("removeEntry", name).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> FileSystemDirectoryHandle::removeEntry(const jsbind::USVString& name, const FileSystemRemoveOptions& options) {
    return FileSystemHandle::call("removeEntry", name, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Sequence<jsbind::USVString>> FileSystemDirectoryHandle::resolve(const FileSystemHandle& possibleDescendant) {
    return FileSystemHandle::call("resolve", possibleDescendant).as<jsbind::Promise<jsbind::Sequence<jsbind::USVString>>>();
}

