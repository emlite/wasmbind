#include <webbind/StorageEvent.hpp>
#include <webbind/StorageEventInit.hpp>
#include <webbind/Storage.hpp>

namespace webbind {

StorageEvent StorageEvent::take_ownership(Handle h) noexcept {
        return StorageEvent(h);
    }
StorageEvent StorageEvent::clone() const noexcept { return *this; }
emlite::Val StorageEvent::instance() noexcept { return emlite::Val::global("StorageEvent"); }
StorageEvent::StorageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
StorageEvent::StorageEvent(const emlite::Val &val) noexcept: Event(val) {}

StorageEvent::StorageEvent(const jsbind::String& type) : Event(emlite::Val::global("StorageEvent").new_(type)) {}

StorageEvent::StorageEvent(const jsbind::String& type, const StorageEventInit& eventInitDict) : Event(emlite::Val::global("StorageEvent").new_(type, eventInitDict)) {}

jsbind::String StorageEvent::key() const {
    return Event::get("key").as<jsbind::String>();
}

jsbind::String StorageEvent::oldValue() const {
    return Event::get("oldValue").as<jsbind::String>();
}

jsbind::String StorageEvent::newValue() const {
    return Event::get("newValue").as<jsbind::String>();
}

jsbind::String StorageEvent::url() const {
    return Event::get("url").as<jsbind::String>();
}

Storage StorageEvent::storageArea() const {
    return Event::get("storageArea").as<Storage>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type) {
    return Event::call("initStorageEvent", type).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles) {
    return Event::call("initStorageEvent", type, bubbles).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable) {
    return Event::call("initStorageEvent", type, bubbles, cancelable).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key) {
    return Event::call("initStorageEvent", type, bubbles, cancelable, key).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue) {
    return Event::call("initStorageEvent", type, bubbles, cancelable, key, oldValue).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue) {
    return Event::call("initStorageEvent", type, bubbles, cancelable, key, oldValue, newValue).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue, const jsbind::String& url) {
    return Event::call("initStorageEvent", type, bubbles, cancelable, key, oldValue, newValue, url).as<jsbind::Undefined>();
}

jsbind::Undefined StorageEvent::initStorageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::String& key, const jsbind::String& oldValue, const jsbind::String& newValue, const jsbind::String& url, const Storage& storageArea) {
    return Event::call("initStorageEvent", type, bubbles, cancelable, key, oldValue, newValue, url, storageArea).as<jsbind::Undefined>();
}


} // namespace webbind