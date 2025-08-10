#include <webbind/Storage.hpp>

namespace webbind {

Storage Storage::take_ownership(Handle h) noexcept {
        return Storage(h);
    }
Storage Storage::clone() const noexcept { return *this; }
emlite::Val Storage::instance() noexcept { return emlite::Val::global("Storage"); }
Storage::Storage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Storage::Storage(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long Storage::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::String Storage::key(unsigned long index) {
    return emlite::Val::call("key", index).as<jsbind::String>();
}

jsbind::String Storage::getItem(const jsbind::String& key) {
    return emlite::Val::call("getItem", key).as<jsbind::String>();
}

jsbind::Undefined Storage::setItem(const jsbind::String& key, const jsbind::String& value) {
    return emlite::Val::call("setItem", key, value).as<jsbind::Undefined>();
}

jsbind::Undefined Storage::removeItem(const jsbind::String& key) {
    return emlite::Val::call("removeItem", key).as<jsbind::Undefined>();
}

jsbind::Undefined Storage::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}


} // namespace webbind