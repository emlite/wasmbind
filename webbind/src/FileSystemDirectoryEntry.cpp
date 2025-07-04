#include <webbind/FileSystemDirectoryEntry.hpp>
#include <webbind/FileSystemDirectoryReader.hpp>


FileSystemFlags::FileSystemFlags(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemFlags FileSystemFlags::take_ownership(Handle h) noexcept {
        return FileSystemFlags(h);
    }
FileSystemFlags::FileSystemFlags(const emlite::Val &val) noexcept: emlite::Val(val) {}
FileSystemFlags::FileSystemFlags() noexcept: emlite::Val(emlite::Val::object()) {}
FileSystemFlags FileSystemFlags::clone() const noexcept { return *this; }

bool FileSystemFlags::create() const {
    return emlite::Val::get("create").as<bool>();
}

void FileSystemFlags::create(bool value) {
    emlite::Val::set("create", value);
}

bool FileSystemFlags::exclusive() const {
    return emlite::Val::get("exclusive").as<bool>();
}

void FileSystemFlags::exclusive(bool value) {
    emlite::Val::set("exclusive", value);
}

FileSystemDirectoryEntry FileSystemDirectoryEntry::take_ownership(Handle h) noexcept {
        return FileSystemDirectoryEntry(h);
    }
FileSystemDirectoryEntry FileSystemDirectoryEntry::clone() const noexcept { return *this; }
FileSystemDirectoryEntry::FileSystemDirectoryEntry(Handle h) noexcept : FileSystemEntry(emlite::Val::take_ownership(h)) {}
FileSystemDirectoryEntry::FileSystemDirectoryEntry(const emlite::Val &val) noexcept: FileSystemEntry(val) {}


FileSystemDirectoryReader FileSystemDirectoryEntry::createReader() {
    return FileSystemEntry::call("createReader").as<FileSystemDirectoryReader>();
}

jsbind::Undefined FileSystemDirectoryEntry::getFile(const jsbind::USVString& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return FileSystemEntry::call("getFile", path, options, successCallback, errorCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryEntry::getDirectory(const jsbind::USVString& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return FileSystemEntry::call("getDirectory", path, options, successCallback, errorCallback).as<jsbind::Undefined>();
}

