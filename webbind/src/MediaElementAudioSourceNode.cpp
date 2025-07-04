#include <webbind/MediaElementAudioSourceNode.hpp>
#include <webbind/HTMLMediaElement.hpp>
#include <webbind/AudioContext.hpp>


MediaElementAudioSourceNode MediaElementAudioSourceNode::take_ownership(Handle h) noexcept {
        return MediaElementAudioSourceNode(h);
    }
MediaElementAudioSourceNode MediaElementAudioSourceNode::clone() const noexcept { return *this; }
MediaElementAudioSourceNode::MediaElementAudioSourceNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
MediaElementAudioSourceNode::MediaElementAudioSourceNode(const emlite::Val &val) noexcept: AudioNode(val) {}


MediaElementAudioSourceNode::MediaElementAudioSourceNode(const AudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("MediaElementAudioSourceNode").new_(context, options)) {}

HTMLMediaElement MediaElementAudioSourceNode::mediaElement() const {
    return AudioNode::get("mediaElement").as<HTMLMediaElement>();
}

