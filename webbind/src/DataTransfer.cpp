#include <webbind/DataTransfer.hpp>
#include <webbind/DataTransferItemList.hpp>
#include <webbind/Element.hpp>
#include <webbind/FileList.hpp>


DataTransfer DataTransfer::take_ownership(Handle h) noexcept {
        return DataTransfer(h);
    }
DataTransfer DataTransfer::clone() const noexcept { return *this; }
emlite::Val DataTransfer::instance() noexcept { return emlite::Val::global("DataTransfer"); }
DataTransfer::DataTransfer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DataTransfer::DataTransfer(const emlite::Val &val) noexcept: emlite::Val(val) {}


DataTransfer::DataTransfer() : emlite::Val(emlite::Val::global("DataTransfer").new_()) {}

jsbind::String DataTransfer::dropEffect() const {
    return emlite::Val::get("dropEffect").as<jsbind::String>();
}

void DataTransfer::dropEffect(const jsbind::String& value) {
    emlite::Val::set("dropEffect", value);
}

jsbind::String DataTransfer::effectAllowed() const {
    return emlite::Val::get("effectAllowed").as<jsbind::String>();
}

void DataTransfer::effectAllowed(const jsbind::String& value) {
    emlite::Val::set("effectAllowed", value);
}

DataTransferItemList DataTransfer::items() const {
    return emlite::Val::get("items").as<DataTransferItemList>();
}

jsbind::Undefined DataTransfer::setDragImage(const Element& image, long x, long y) {
    return emlite::Val::call("setDragImage", image, x, y).as<jsbind::Undefined>();
}

jsbind::TypedArray<jsbind::String> DataTransfer::types() const {
    return emlite::Val::get("types").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::String DataTransfer::getData(const jsbind::String& format) {
    return emlite::Val::call("getData", format).as<jsbind::String>();
}

jsbind::Undefined DataTransfer::setData(const jsbind::String& format, const jsbind::String& data) {
    return emlite::Val::call("setData", format, data).as<jsbind::Undefined>();
}

jsbind::Undefined DataTransfer::clearData() {
    return emlite::Val::call("clearData").as<jsbind::Undefined>();
}

jsbind::Undefined DataTransfer::clearData(const jsbind::String& format) {
    return emlite::Val::call("clearData", format).as<jsbind::Undefined>();
}

FileList DataTransfer::files() const {
    return emlite::Val::get("files").as<FileList>();
}

