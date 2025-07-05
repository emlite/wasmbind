#include <webbind/MediaStreamTrackAudioSourceNode.hpp>
#include <webbind/AudioContext.hpp>


MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode::take_ownership(Handle h) noexcept {
        return MediaStreamTrackAudioSourceNode(h);
    }
MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode::clone() const noexcept { return *this; }
MediaStreamTrackAudioSourceNode::MediaStreamTrackAudioSourceNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaStreamTrackAudioSourceNode::MediaStreamTrackAudioSourceNode(const emlite::Val &val) noexcept: AudioNode(val) {}


MediaStreamTrackAudioSourceNode::MediaStreamTrackAudioSourceNode(const AudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("MediaStreamTrackAudioSourceNode").new_(context, options)) {}

