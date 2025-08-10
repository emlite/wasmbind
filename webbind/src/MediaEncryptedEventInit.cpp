#include <webbind/MediaEncryptedEventInit.hpp>

namespace webbind {

MediaEncryptedEventInit::MediaEncryptedEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MediaEncryptedEventInit MediaEncryptedEventInit::take_ownership(Handle h) noexcept {
    return MediaEncryptedEventInit(h);
}

MediaEncryptedEventInit::MediaEncryptedEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

MediaEncryptedEventInit::MediaEncryptedEventInit() noexcept: EventInit(emlite::Val::object()) {}

MediaEncryptedEventInit MediaEncryptedEventInit::clone() const noexcept { return *this; }

jsbind::String MediaEncryptedEventInit::initDataType() const {
    return emlite::Val::get("initDataType").as<jsbind::String>();
}

void MediaEncryptedEventInit::initDataType(const jsbind::String& value) {
    emlite::Val::set("initDataType", value);
}

jsbind::ArrayBuffer MediaEncryptedEventInit::initData() const {
    return emlite::Val::get("initData").as<jsbind::ArrayBuffer>();
}

void MediaEncryptedEventInit::initData(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("initData", value);
}


} // namespace webbind