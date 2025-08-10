#include <webbind/MediaStreamTrackEventInit.hpp>
#include <webbind/MediaStreamTrack.hpp>

using emlite::Val;
namespace webbind {

MediaStreamTrackEventInit::MediaStreamTrackEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
MediaStreamTrackEventInit MediaStreamTrackEventInit::take_ownership(Handle h) noexcept {
        return MediaStreamTrackEventInit(h);
    }
MediaStreamTrackEventInit::MediaStreamTrackEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
MediaStreamTrackEventInit::MediaStreamTrackEventInit() noexcept: EventInit(emlite::Val::object()) {}
MediaStreamTrackEventInit MediaStreamTrackEventInit::clone() const noexcept { return *this; }

MediaStreamTrack MediaStreamTrackEventInit::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

void MediaStreamTrackEventInit::track(const MediaStreamTrack& value) {
    emlite::Val::set("track", value);
}


} // namespace webbind