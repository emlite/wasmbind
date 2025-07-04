#include <webbind/MediaStreamTrackProcessor.hpp>
#include <webbind/ReadableStream.hpp>


MediaStreamTrackProcessor MediaStreamTrackProcessor::take_ownership(Handle h) noexcept {
        return MediaStreamTrackProcessor(h);
    }
MediaStreamTrackProcessor MediaStreamTrackProcessor::clone() const noexcept { return *this; }
MediaStreamTrackProcessor::MediaStreamTrackProcessor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamTrackProcessor::MediaStreamTrackProcessor(const emlite::Val &val) noexcept: emlite::Val(val) {}


MediaStreamTrackProcessor::MediaStreamTrackProcessor(const jsbind::Any& init): emlite::Val(emlite::Val::global("MediaStreamTrackProcessor").new_(init)) {}

ReadableStream MediaStreamTrackProcessor::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

