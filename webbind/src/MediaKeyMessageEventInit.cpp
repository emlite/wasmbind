#include <webbind/MediaKeyMessageEventInit.hpp>

namespace webbind {

MediaKeyMessageEventInit::MediaKeyMessageEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MediaKeyMessageEventInit MediaKeyMessageEventInit::take_ownership(Handle h) noexcept {
    return MediaKeyMessageEventInit(h);
}

MediaKeyMessageEventInit::MediaKeyMessageEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

MediaKeyMessageEventInit::MediaKeyMessageEventInit() noexcept: EventInit(emlite::Val::object()) {}

MediaKeyMessageEventInit MediaKeyMessageEventInit::clone() const noexcept { return *this; }

MediaKeyMessageType MediaKeyMessageEventInit::messageType() const {
    return emlite::Val::get("messageType").as<MediaKeyMessageType>();
}

void MediaKeyMessageEventInit::messageType(const MediaKeyMessageType& value) {
    emlite::Val::set("messageType", value);
}

jsbind::ArrayBuffer MediaKeyMessageEventInit::message() const {
    return emlite::Val::get("message").as<jsbind::ArrayBuffer>();
}

void MediaKeyMessageEventInit::message(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("message", value);
}


} // namespace webbind