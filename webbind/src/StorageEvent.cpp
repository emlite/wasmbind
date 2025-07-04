#include <webbind/StorageEvent.hpp>
#include <webbind/Storage.hpp>


StorageEvent StorageEvent::take_ownership(Handle h) noexcept {
        return StorageEvent(h);
    }
StorageEvent StorageEvent::clone() const noexcept { return *this; }
StorageEvent::StorageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
StorageEvent::StorageEvent(const emlite::Val &val) noexcept: Event(val) {}


StorageEvent::StorageEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("StorageEvent").new_(type, eventInitDict)) {}

jsbind::DOMString StorageEvent::key() const {
    return Event::get("key").as<jsbind::DOMString>();
}

jsbind::DOMString StorageEvent::oldValue() const {
    return Event::get("oldValue").as<jsbind::DOMString>();
}

jsbind::DOMString StorageEvent::newValue() const {
    return Event::get("newValue").as<jsbind::DOMString>();
}

jsbind::USVString StorageEvent::url() const {
    return Event::get("url").as<jsbind::USVString>();
}

Storage StorageEvent::storageArea() const {
    return Event::get("storageArea").as<Storage>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::DOMString& type, bool bubbles, bool cancelable, const jsbind::DOMString& key, const jsbind::DOMString& oldValue, const jsbind::DOMString& newValue, const jsbind::USVString& url, const Storage& storageArea) {
    return Event::call("initStorageEvent", type, bubbles, cancelable, key, oldValue, newValue, url, storageArea).as<jsbind::Undefined>();
}

