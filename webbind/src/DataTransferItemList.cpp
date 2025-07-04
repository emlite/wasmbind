#include <webbind/DataTransferItemList.hpp>
#include <webbind/DataTransferItem.hpp>
#include <webbind/File.hpp>


DataTransferItemList DataTransferItemList::take_ownership(Handle h) noexcept {
        return DataTransferItemList(h);
    }
DataTransferItemList DataTransferItemList::clone() const noexcept { return *this; }
DataTransferItemList::DataTransferItemList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DataTransferItemList::DataTransferItemList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long DataTransferItemList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

DataTransferItem DataTransferItemList::add(const File& data) {
    return emlite::Val::call("add", data).as<DataTransferItem>();
}

jsbind::Undefined DataTransferItemList::remove(unsigned long index) {
    return emlite::Val::call("remove", index).as<jsbind::Undefined>();
}

jsbind::Undefined DataTransferItemList::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

