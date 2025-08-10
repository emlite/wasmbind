#include <webbind/StorageEventInit.hpp>
#include <webbind/Storage.hpp>

using emlite::Val;
namespace webbind {

StorageEventInit::StorageEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
StorageEventInit StorageEventInit::take_ownership(Handle h) noexcept {
        return StorageEventInit(h);
    }
StorageEventInit::StorageEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
StorageEventInit::StorageEventInit() noexcept: EventInit(emlite::Val::object()) {}
StorageEventInit StorageEventInit::clone() const noexcept { return *this; }

jsbind::String StorageEventInit::key() const {
    return emlite::Val::get("key").as<jsbind::String>();
}

void StorageEventInit::key(const jsbind::String& value) {
    emlite::Val::set("key", value);
}

jsbind::String StorageEventInit::oldValue() const {
    return emlite::Val::get("oldValue").as<jsbind::String>();
}

void StorageEventInit::oldValue(const jsbind::String& value) {
    emlite::Val::set("oldValue", value);
}

jsbind::String StorageEventInit::newValue() const {
    return emlite::Val::get("newValue").as<jsbind::String>();
}

void StorageEventInit::newValue(const jsbind::String& value) {
    emlite::Val::set("newValue", value);
}

jsbind::String StorageEventInit::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void StorageEventInit::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

Storage StorageEventInit::storageArea() const {
    return emlite::Val::get("storageArea").as<Storage>();
}

void StorageEventInit::storageArea(const Storage& value) {
    emlite::Val::set("storageArea", value);
}


} // namespace webbind