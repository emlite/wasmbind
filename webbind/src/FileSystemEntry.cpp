#include <webbind/FileSystemEntry.hpp>
#include <webbind/FileSystem.hpp>


FileSystemEntry FileSystemEntry::take_ownership(Handle h) noexcept {
        return FileSystemEntry(h);
    }
FileSystemEntry FileSystemEntry::clone() const noexcept { return *this; }
FileSystemEntry::FileSystemEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemEntry::FileSystemEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool FileSystemEntry::isFile() const {
    return emlite::Val::get("isFile").as<bool>();
}

bool FileSystemEntry::isDirectory() const {
    return emlite::Val::get("isDirectory").as<bool>();
}

jsbind::USVString FileSystemEntry::name() const {
    return emlite::Val::get("name").as<jsbind::USVString>();
}

jsbind::USVString FileSystemEntry::fullPath() const {
    return emlite::Val::get("fullPath").as<jsbind::USVString>();
}

FileSystem FileSystemEntry::filesystem() const {
    return emlite::Val::get("filesystem").as<FileSystem>();
}

jsbind::Undefined FileSystemEntry::getParent(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return emlite::Val::call("getParent", successCallback, errorCallback).as<jsbind::Undefined>();
}

