#include <webbind/VideoTrackGenerator.hpp>
#include <webbind/WritableStream.hpp>
#include <webbind/MediaStreamTrack.hpp>

namespace webbind {

VideoTrackGenerator VideoTrackGenerator::take_ownership(Handle h) noexcept {
    return VideoTrackGenerator(h);
}

VideoTrackGenerator VideoTrackGenerator::clone() const noexcept { return *this; }

emlite::Val VideoTrackGenerator::instance() noexcept { return emlite::Val::global("VideoTrackGenerator"); }

VideoTrackGenerator::VideoTrackGenerator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

VideoTrackGenerator::VideoTrackGenerator(const emlite::Val &val) noexcept: emlite::Val(val) {}

VideoTrackGenerator::VideoTrackGenerator() : emlite::Val(emlite::Val::global("VideoTrackGenerator").new_()) {}

WritableStream VideoTrackGenerator::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

bool VideoTrackGenerator::muted() const {
    return emlite::Val::get("muted").as<bool>();
}

void VideoTrackGenerator::muted(bool value) {
    emlite::Val::set("muted", value);
}

MediaStreamTrack VideoTrackGenerator::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}


} // namespace webbind