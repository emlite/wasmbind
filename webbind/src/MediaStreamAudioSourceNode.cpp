#include <webbind/MediaStreamAudioSourceNode.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/AudioContext.hpp>


MediaStreamAudioSourceNode MediaStreamAudioSourceNode::take_ownership(Handle h) noexcept {
        return MediaStreamAudioSourceNode(h);
    }
MediaStreamAudioSourceNode MediaStreamAudioSourceNode::clone() const noexcept { return *this; }
MediaStreamAudioSourceNode::MediaStreamAudioSourceNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaStreamAudioSourceNode::MediaStreamAudioSourceNode(const emlite::Val &val) noexcept: AudioNode(val) {}


MediaStreamAudioSourceNode::MediaStreamAudioSourceNode(const AudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("MediaStreamAudioSourceNode").new_(context, options)) {}

MediaStream MediaStreamAudioSourceNode::mediaStream() const {
    return AudioNode::get("mediaStream").as<MediaStream>();
}

