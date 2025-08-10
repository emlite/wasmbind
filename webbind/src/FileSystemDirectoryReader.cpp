#include "webbind/FileSystemDirectoryReader.hpp"

namespace webbind {

FileSystemDirectoryReader FileSystemDirectoryReader::take_ownership(Handle h) noexcept {
        return FileSystemDirectoryReader(h);
    }
FileSystemDirectoryReader FileSystemDirectoryReader::clone() const noexcept { return *this; }
emlite::Val FileSystemDirectoryReader::instance() noexcept { return emlite::Val::global("FileSystemDirectoryReader"); }
FileSystemDirectoryReader::FileSystemDirectoryReader(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FileSystemDirectoryReader::FileSystemDirectoryReader(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined FileSystemDirectoryReader::readEntries(const jsbind::Function& successCallback) {
    return emlite::Val::call("readEntries", successCallback).as<jsbind::Undefined>();
}

jsbind::Undefined FileSystemDirectoryReader::readEntries(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return emlite::Val::call("readEntries", successCallback, errorCallback).as<jsbind::Undefined>();
}


} // namespace webbind