#include <webbind/TrackEvent.hpp>


TrackEvent TrackEvent::take_ownership(Handle h) noexcept {
        return TrackEvent(h);
    }
TrackEvent TrackEvent::clone() const noexcept { return *this; }
emlite::Val TrackEvent::instance() noexcept { return emlite::Val::global("TrackEvent"); }
TrackEvent::TrackEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TrackEvent::TrackEvent(const emlite::Val &val) noexcept: Event(val) {}


TrackEvent::TrackEvent(const jsbind::String& type) : Event(emlite::Val::global("TrackEvent").new_(type)) {}

TrackEvent::TrackEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("TrackEvent").new_(type, eventInitDict)) {}

jsbind::Any TrackEvent::track() const {
    return Event::get("track").as<jsbind::Any>();
}

