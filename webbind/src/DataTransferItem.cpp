#include <webbind/DataTransferItem.hpp>
#include <webbind/File.hpp>
#include <webbind/FileSystemEntry.hpp>
#include <webbind/FileSystemHandle.hpp>

namespace webbind {

DataTransferItem DataTransferItem::take_ownership(Handle h) noexcept {
        return DataTransferItem(h);
    }
DataTransferItem DataTransferItem::clone() const noexcept { return *this; }
emlite::Val DataTransferItem::instance() noexcept { return emlite::Val::global("DataTransferItem"); }
DataTransferItem::DataTransferItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DataTransferItem::DataTransferItem(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String DataTransferItem::kind() const {
    return emlite::Val::get("kind").as<jsbind::String>();
}

jsbind::String DataTransferItem::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

jsbind::Undefined DataTransferItem::getAsString(const jsbind::Function& callback) {
    return emlite::Val::call("getAsString", callback).as<jsbind::Undefined>();
}

File DataTransferItem::getAsFile() {
    return emlite::Val::call("getAsFile").as<File>();
}

FileSystemEntry DataTransferItem::webkitGetAsEntry() {
    return emlite::Val::call("webkitGetAsEntry").as<FileSystemEntry>();
}

jsbind::Promise<FileSystemHandle> DataTransferItem::getAsFileSystemHandle() {
    return emlite::Val::call("getAsFileSystemHandle").as<jsbind::Promise<FileSystemHandle>>();
}


} // namespace webbind