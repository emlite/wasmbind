#include <webbind/MediaEncryptedEvent.hpp>
#include <webbind/MediaEncryptedEventInit.hpp>

namespace webbind {

MediaEncryptedEvent MediaEncryptedEvent::take_ownership(Handle h) noexcept {
    return MediaEncryptedEvent(h);
}

MediaEncryptedEvent MediaEncryptedEvent::clone() const noexcept { return *this; }

emlite::Val MediaEncryptedEvent::instance() noexcept { return emlite::Val::global("MediaEncryptedEvent"); }

MediaEncryptedEvent::MediaEncryptedEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

MediaEncryptedEvent::MediaEncryptedEvent(const emlite::Val &val) noexcept: Event(val) {}

MediaEncryptedEvent::MediaEncryptedEvent(const jsbind::String& type) : Event(emlite::Val::global("MediaEncryptedEvent").new_(type)) {}

MediaEncryptedEvent::MediaEncryptedEvent(const jsbind::String& type, const MediaEncryptedEventInit& eventInitDict) : Event(emlite::Val::global("MediaEncryptedEvent").new_(type, eventInitDict)) {}

jsbind::String MediaEncryptedEvent::initDataType() const {
    return Event::get("initDataType").as<jsbind::String>();
}

jsbind::ArrayBuffer MediaEncryptedEvent::initData() const {
    return Event::get("initData").as<jsbind::ArrayBuffer>();
}


} // namespace webbind