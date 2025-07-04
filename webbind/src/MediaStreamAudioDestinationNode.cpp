#include <webbind/MediaStreamAudioDestinationNode.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/AudioContext.hpp>


MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode::take_ownership(Handle h) noexcept {
        return MediaStreamAudioDestinationNode(h);
    }
MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode::clone() const noexcept { return *this; }
MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(const emlite::Val &val) noexcept: AudioNode(val) {}


MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(const AudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("MediaStreamAudioDestinationNode").new_(context, options)) {}

MediaStream MediaStreamAudioDestinationNode::stream() const {
    return AudioNode::get("stream").as<MediaStream>();
}

