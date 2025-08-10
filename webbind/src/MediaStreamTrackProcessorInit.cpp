#include <webbind/MediaStreamTrackProcessorInit.hpp>
#include <webbind/MediaStreamTrack.hpp>

namespace webbind {

MediaStreamTrackProcessorInit::MediaStreamTrackProcessorInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit::take_ownership(Handle h) noexcept {
    return MediaStreamTrackProcessorInit(h);
}

MediaStreamTrackProcessorInit::MediaStreamTrackProcessorInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaStreamTrackProcessorInit::MediaStreamTrackProcessorInit() noexcept: emlite::Val(emlite::Val::object()) {}

MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit::clone() const noexcept { return *this; }

MediaStreamTrack MediaStreamTrackProcessorInit::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

void MediaStreamTrackProcessorInit::track(const MediaStreamTrack& value) {
    emlite::Val::set("track", value);
}

unsigned short MediaStreamTrackProcessorInit::maxBufferSize() const {
    return emlite::Val::get("maxBufferSize").as<unsigned short>();
}

void MediaStreamTrackProcessorInit::maxBufferSize(unsigned short value) {
    emlite::Val::set("maxBufferSize", value);
}


} // namespace webbind