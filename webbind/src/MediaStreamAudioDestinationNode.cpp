#include "webbind/MediaStreamAudioDestinationNode.hpp"
#include "webbind/AudioContext.hpp"
#include "webbind/AudioNodeOptions.hpp"
#include "webbind/MediaStream.hpp"

namespace webbind {

MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode::take_ownership(Handle h) noexcept {
        return MediaStreamAudioDestinationNode(h);
    }
MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode::clone() const noexcept { return *this; }
emlite::Val MediaStreamAudioDestinationNode::instance() noexcept { return emlite::Val::global("MediaStreamAudioDestinationNode"); }
MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(const emlite::Val &val) noexcept: AudioNode(val) {}

MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(const AudioContext& context) : AudioNode(emlite::Val::global("MediaStreamAudioDestinationNode").new_(context)) {}

MediaStreamAudioDestinationNode::MediaStreamAudioDestinationNode(const AudioContext& context, const AudioNodeOptions& options) : AudioNode(emlite::Val::global("MediaStreamAudioDestinationNode").new_(context, options)) {}

MediaStream MediaStreamAudioDestinationNode::stream() const {
    return AudioNode::get("stream").as<MediaStream>();
}


} // namespace webbind