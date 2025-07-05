#include <webbind/MediaEncryptedEvent.hpp>


MediaEncryptedEvent MediaEncryptedEvent::take_ownership(Handle h) noexcept {
        return MediaEncryptedEvent(h);
    }
MediaEncryptedEvent MediaEncryptedEvent::clone() const noexcept { return *this; }
MediaEncryptedEvent::MediaEncryptedEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MediaEncryptedEvent::MediaEncryptedEvent(const emlite::Val &val) noexcept: Event(val) {}


MediaEncryptedEvent::MediaEncryptedEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("MediaEncryptedEvent").new_(type)) {}

MediaEncryptedEvent::MediaEncryptedEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("MediaEncryptedEvent").new_(type, eventInitDict)) {}

jsbind::DOMString MediaEncryptedEvent::initDataType() const {
    return Event::get("initDataType").as<jsbind::DOMString>();
}

jsbind::ArrayBuffer MediaEncryptedEvent::initData() const {
    return Event::get("initData").as<jsbind::ArrayBuffer>();
}

