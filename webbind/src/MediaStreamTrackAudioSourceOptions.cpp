#include "webbind/MediaStreamTrackAudioSourceOptions.hpp"
#include "webbind/MediaStreamTrack.hpp"

using emlite::Val;
namespace webbind {

MediaStreamTrackAudioSourceOptions::MediaStreamTrackAudioSourceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions::take_ownership(Handle h) noexcept {
        return MediaStreamTrackAudioSourceOptions(h);
    }
MediaStreamTrackAudioSourceOptions::MediaStreamTrackAudioSourceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaStreamTrackAudioSourceOptions::MediaStreamTrackAudioSourceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions::clone() const noexcept { return *this; }

MediaStreamTrack MediaStreamTrackAudioSourceOptions::mediaStreamTrack() const {
    return emlite::Val::get("mediaStreamTrack").as<MediaStreamTrack>();
}

void MediaStreamTrackAudioSourceOptions::mediaStreamTrack(const MediaStreamTrack& value) {
    emlite::Val::set("mediaStreamTrack", value);
}


} // namespace webbind