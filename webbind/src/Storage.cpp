#include <webbind/Storage.hpp>


Storage Storage::take_ownership(Handle h) noexcept {
        return Storage(h);
    }
Storage Storage::clone() const noexcept { return *this; }
Storage::Storage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Storage::Storage(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long Storage::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::DOMString Storage::key(unsigned long index) {
    return emlite::Val::call("key", index).as<jsbind::DOMString>();
}

jsbind::DOMString Storage::getItem(const jsbind::DOMString& key) {
    return emlite::Val::call("getItem", key).as<jsbind::DOMString>();
}

jsbind::Undefined Storage::setItem(const jsbind::DOMString& key, const jsbind::DOMString& value) {
    return emlite::Val::call("setItem", key, value).as<jsbind::Undefined>();
}

jsbind::Undefined Storage::removeItem(const jsbind::DOMString& key) {
    return emlite::Val::call("removeItem", key).as<jsbind::Undefined>();
}

jsbind::Undefined Storage::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

