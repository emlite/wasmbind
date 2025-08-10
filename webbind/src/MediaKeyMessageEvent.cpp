#include <webbind/MediaKeyMessageEvent.hpp>
#include <webbind/MediaKeyMessageEventInit.hpp>

namespace webbind {

MediaKeyMessageEvent MediaKeyMessageEvent::take_ownership(Handle h) noexcept {
    return MediaKeyMessageEvent(h);
}

MediaKeyMessageEvent MediaKeyMessageEvent::clone() const noexcept { return *this; }

emlite::Val MediaKeyMessageEvent::instance() noexcept { return emlite::Val::global("MediaKeyMessageEvent"); }

MediaKeyMessageEvent::MediaKeyMessageEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

MediaKeyMessageEvent::MediaKeyMessageEvent(const emlite::Val &val) noexcept: Event(val) {}

MediaKeyMessageEvent::MediaKeyMessageEvent(const jsbind::String& type, const MediaKeyMessageEventInit& eventInitDict) : Event(emlite::Val::global("MediaKeyMessageEvent").new_(type, eventInitDict)) {}

MediaKeyMessageType MediaKeyMessageEvent::messageType() const {
    return Event::get("messageType").as<MediaKeyMessageType>();
}

jsbind::ArrayBuffer MediaKeyMessageEvent::message() const {
    return Event::get("message").as<jsbind::ArrayBuffer>();
}


} // namespace webbind