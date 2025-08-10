#include "webbind/MediaQueryListEvent.hpp"
#include "webbind/MediaQueryListEventInit.hpp"

namespace webbind {

MediaQueryListEvent MediaQueryListEvent::take_ownership(Handle h) noexcept {
        return MediaQueryListEvent(h);
    }
MediaQueryListEvent MediaQueryListEvent::clone() const noexcept { return *this; }
emlite::Val MediaQueryListEvent::instance() noexcept { return emlite::Val::global("MediaQueryListEvent"); }
MediaQueryListEvent::MediaQueryListEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MediaQueryListEvent::MediaQueryListEvent(const emlite::Val &val) noexcept: Event(val) {}

MediaQueryListEvent::MediaQueryListEvent(const jsbind::String& type) : Event(emlite::Val::global("MediaQueryListEvent").new_(type)) {}

MediaQueryListEvent::MediaQueryListEvent(const jsbind::String& type, const MediaQueryListEventInit& eventInitDict) : Event(emlite::Val::global("MediaQueryListEvent").new_(type, eventInitDict)) {}

jsbind::String MediaQueryListEvent::media() const {
    return Event::get("media").as<jsbind::String>();
}

bool MediaQueryListEvent::matches() const {
    return Event::get("matches").as<bool>();
}


} // namespace webbind