#include "webbind/FileSystemEntry.hpp"
#include "webbind/FileSystem.hpp"

namespace webbind {

FileSystemEntry FileSystemEntry::take_ownership(Handle h) noexcept {
        return FileSystemEntry(h);
    }
FileSystemEntry FileSystemEntry::clone() const noexcept { return *this; }
emlite::Val FileSystemEntry::instance() noexcept { return emlite::Val::global("FileSystemEntry"); }
FileSystemEntry::FileSystemEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemEntry::FileSystemEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool FileSystemEntry::isFile() const {
    return emlite::Val::get("isFile").as<bool>();
}

bool FileSystemEntry::isDirectory() const {
    return emlite::Val::get("isDirectory").as<bool>();
}

jsbind::String FileSystemEntry::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String FileSystemEntry::fullPath() const {
    return emlite::Val::get("fullPath").as<jsbind::String>();
}

FileSystem FileSystemEntry::filesystem() const {
    return emlite::Val::get("filesystem").as<FileSystem>();
}

jsbind::Undefined FileSystemEntry::getParent() {
    return emlite::Val::call("getParent").as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemEntry::getParent(const jsbind::Function& successCallback) {
    return emlite::Val::call("getParent", successCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemEntry::getParent(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return emlite::Val::call("getParent", successCallback, errorCallback).as<jsbind::Undefined>();
}


} // namespace webbind