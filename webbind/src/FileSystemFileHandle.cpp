#include <webbind/FileSystemFileHandle.hpp>
#include <webbind/File.hpp>
#include <webbind/FileSystemWritableFileStream.hpp>
#include <webbind/FileSystemSyncAccessHandle.hpp>


FileSystemCreateWritableOptions::FileSystemCreateWritableOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemCreateWritableOptions FileSystemCreateWritableOptions::take_ownership(Handle h) noexcept {
        return FileSystemCreateWritableOptions(h);
    }
FileSystemCreateWritableOptions::FileSystemCreateWritableOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemCreateWritableOptions::FileSystemCreateWritableOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemCreateWritableOptions FileSystemCreateWritableOptions::clone() const noexcept { return *this; }

bool FileSystemCreateWritableOptions::keepExistingData() const {
    return emlite::Val::get("keepExistingData").as<bool>();
}

void FileSystemCreateWritableOptions::keepExistingData(bool value) {
    emlite::Val::set("keepExistingData", value);
}

FileSystemFileHandle FileSystemFileHandle::take_ownership(Handle h) noexcept {
        return FileSystemFileHandle(h);
    }
FileSystemFileHandle FileSystemFileHandle::clone() const noexcept { return *this; }
FileSystemFileHandle::FileSystemFileHandle(Handle h) noexcept : FileSystemHandle(emlite::Val::take_ownership(h)) {}
FileSystemFileHandle::FileSystemFileHandle(const emlite::Val &val) noexcept: FileSystemHandle(val) {}


jsbind::Promise FileSystemFileHandle::getFile() {
    return FileSystemHandle::call("getFile").as<jsbind::Promise>();
}

jsbind::Promise FileSystemFileHandle::createWritable() {
    return FileSystemHandle::call("createWritable").as<jsbind::Promise>();
}

jsbind::Promise FileSystemFileHandle::createWritable(const FileSystemCreateWritableOptions& options) {
    return FileSystemHandle::call("createWritable", options).as<jsbind::Promise>();
}

jsbind::Promise FileSystemFileHandle::createSyncAccessHandle() {
    return FileSystemHandle::call("createSyncAccessHandle").as<jsbind::Promise>();
}

