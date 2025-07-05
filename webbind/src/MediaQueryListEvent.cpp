#include <webbind/MediaQueryListEvent.hpp>


MediaQueryListEvent MediaQueryListEvent::take_ownership(Handle h) noexcept {
        return MediaQueryListEvent(h);
    }
MediaQueryListEvent MediaQueryListEvent::clone() const noexcept { return *this; }
MediaQueryListEvent::MediaQueryListEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MediaQueryListEvent::MediaQueryListEvent(const emlite::Val &val) noexcept: Event(val) {}


MediaQueryListEvent::MediaQueryListEvent(const jsbind::CSSOMString& type) : Event(emlite::Val::global("MediaQueryListEvent").new_(type)) {}

MediaQueryListEvent::MediaQueryListEvent(const jsbind::CSSOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("MediaQueryListEvent").new_(type, eventInitDict)) {}

jsbind::CSSOMString MediaQueryListEvent::media() const {
    return Event::get("media").as<jsbind::CSSOMString>();
}

bool MediaQueryListEvent::matches() const {
    return Event::get("matches").as<bool>();
}

