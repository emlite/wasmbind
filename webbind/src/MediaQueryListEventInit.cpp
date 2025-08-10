#include <webbind/MediaQueryListEventInit.hpp>

using emlite::Val;
namespace webbind {

MediaQueryListEventInit::MediaQueryListEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MediaQueryListEventInit MediaQueryListEventInit::take_ownership(Handle h) noexcept {
        return MediaQueryListEventInit(h);
    }
MediaQueryListEventInit::MediaQueryListEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
MediaQueryListEventInit::MediaQueryListEventInit() noexcept: EventInit(emlite::Val::object()) {}
MediaQueryListEventInit MediaQueryListEventInit::clone() const noexcept { return *this; }

jsbind::String MediaQueryListEventInit::media() const {
    return emlite::Val::get("media").as<jsbind::String>();
}

void MediaQueryListEventInit::media(const jsbind::String& value) {
    emlite::Val::set("media", value);
}

bool MediaQueryListEventInit::matches() const {
    return emlite::Val::get("matches").as<bool>();
}

void MediaQueryListEventInit::matches(bool value) {
    emlite::Val::set("matches", value);
}


} // namespace webbind