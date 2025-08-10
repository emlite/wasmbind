#include "webbind/MediaStreamTrackProcessor.hpp"
#include "webbind/MediaStreamTrackProcessorInit.hpp"
#include "webbind/ReadableStream.hpp"

namespace webbind {

MediaStreamTrackProcessor MediaStreamTrackProcessor::take_ownership(Handle h) noexcept {
        return MediaStreamTrackProcessor(h);
    }
MediaStreamTrackProcessor MediaStreamTrackProcessor::clone() const noexcept { return *this; }
emlite::Val MediaStreamTrackProcessor::instance() noexcept { return emlite::Val::global("MediaStreamTrackProcessor"); }
MediaStreamTrackProcessor::MediaStreamTrackProcessor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamTrackProcessor::MediaStreamTrackProcessor(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaStreamTrackProcessor::MediaStreamTrackProcessor(const MediaStreamTrackProcessorInit& init) : emlite::Val(emlite::Val::global("MediaStreamTrackProcessor").new_(init)) {}

ReadableStream MediaStreamTrackProcessor::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}


} // namespace webbind