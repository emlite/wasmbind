#include <webbind/MediaStreamTrackEvent.hpp>
#include <webbind/MediaStreamTrackEventInit.hpp>
#include <webbind/MediaStreamTrack.hpp>

namespace webbind {

MediaStreamTrackEvent MediaStreamTrackEvent::take_ownership(Handle h) noexcept {
        return MediaStreamTrackEvent(h);
    }
MediaStreamTrackEvent MediaStreamTrackEvent::clone() const noexcept { return *this; }
emlite::Val MediaStreamTrackEvent::instance() noexcept { return emlite::Val::global("MediaStreamTrackEvent"); }
MediaStreamTrackEvent::MediaStreamTrackEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
MediaStreamTrackEvent::MediaStreamTrackEvent(const emlite::Val &val) noexcept: Event(val) {}

MediaStreamTrackEvent::MediaStreamTrackEvent(const jsbind::String& type, const MediaStreamTrackEventInit& eventInitDict) : Event(emlite::Val::global("MediaStreamTrackEvent").new_(type, eventInitDict)) {}

MediaStreamTrack MediaStreamTrackEvent::track() const {
    return Event::get("track").as<MediaStreamTrack>();
}


} // namespace webbind