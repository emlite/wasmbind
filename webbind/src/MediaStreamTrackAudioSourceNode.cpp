#include "webbind/MediaStreamTrackAudioSourceNode.hpp"
#include "webbind/AudioContext.hpp"
#include "webbind/MediaStreamTrackAudioSourceOptions.hpp"

namespace webbind {

MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode::take_ownership(Handle h) noexcept {
        return MediaStreamTrackAudioSourceNode(h);
    }
MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode::clone() const noexcept { return *this; }
emlite::Val MediaStreamTrackAudioSourceNode::instance() noexcept { return emlite::Val::global("MediaStreamTrackAudioSourceNode"); }
MediaStreamTrackAudioSourceNode::MediaStreamTrackAudioSourceNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaStreamTrackAudioSourceNode::MediaStreamTrackAudioSourceNode(const emlite::Val &val) noexcept: AudioNode(val) {}

MediaStreamTrackAudioSourceNode::MediaStreamTrackAudioSourceNode(const AudioContext& context, const MediaStreamTrackAudioSourceOptions& options) : AudioNode(emlite::Val::global("MediaStreamTrackAudioSourceNode").new_(context, options)) {}


} // namespace webbind