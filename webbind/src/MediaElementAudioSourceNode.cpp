#include <webbind/MediaElementAudioSourceNode.hpp>
#include <webbind/AudioContext.hpp>
#include <webbind/MediaElementAudioSourceOptions.hpp>
#include <webbind/HTMLMediaElement.hpp>

namespace webbind {

MediaElementAudioSourceNode MediaElementAudioSourceNode::take_ownership(Handle h) noexcept {
        return MediaElementAudioSourceNode(h);
    }
MediaElementAudioSourceNode MediaElementAudioSourceNode::clone() const noexcept { return *this; }
emlite::Val MediaElementAudioSourceNode::instance() noexcept { return emlite::Val::global("MediaElementAudioSourceNode"); }
MediaElementAudioSourceNode::MediaElementAudioSourceNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaElementAudioSourceNode::MediaElementAudioSourceNode(const emlite::Val &val) noexcept: AudioNode(val) {}

MediaElementAudioSourceNode::MediaElementAudioSourceNode(const AudioContext& context, const MediaElementAudioSourceOptions& options) : AudioNode(emlite::Val::global("MediaElementAudioSourceNode").new_(context, options)) {}

HTMLMediaElement MediaElementAudioSourceNode::mediaElement() const {
    return AudioNode::get("mediaElement").as<HTMLMediaElement>();
}


} // namespace webbind