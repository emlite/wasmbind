#include <webbind/AudioContext.hpp>
#include <webbind/AudioContextOptions.hpp>
#include <webbind/AudioTimestamp.hpp>
#include <webbind/MediaElementAudioSourceNode.hpp>
#include <webbind/HTMLMediaElement.hpp>
#include <webbind/MediaStreamAudioSourceNode.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/MediaStreamTrackAudioSourceNode.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/MediaStreamAudioDestinationNode.hpp>

namespace webbind {

AudioContext AudioContext::take_ownership(Handle h) noexcept {
        return AudioContext(h);
    }
AudioContext AudioContext::clone() const noexcept { return *this; }
emlite::Val AudioContext::instance() noexcept { return emlite::Val::global("AudioContext"); }
AudioContext::AudioContext(Handle h) noexcept : BaseAudioContext(emlite::Val::take_ownership(h)) {}
AudioContext::AudioContext(const emlite::Val &val) noexcept: BaseAudioContext(val) {}

AudioContext::AudioContext() : BaseAudioContext(emlite::Val::global("AudioContext").new_()) {}

AudioContext::AudioContext(const AudioContextOptions& contextOptions) : BaseAudioContext(emlite::Val::global("AudioContext").new_(contextOptions)) {}

double AudioContext::baseLatency() const {
    return BaseAudioContext::get("baseLatency").as<double>();
}

double AudioContext::outputLatency() const {
    return BaseAudioContext::get("outputLatency").as<double>();
}

jsbind::Any AudioContext::sinkId() const {
    return BaseAudioContext::get("sinkId").as<jsbind::Any>();
}

jsbind::Any AudioContext::onsinkchange() const {
    return BaseAudioContext::get("onsinkchange").as<jsbind::Any>();
}

void AudioContext::onsinkchange(const jsbind::Any& value) {
    BaseAudioContext::set("onsinkchange", value);
}

jsbind::Any AudioContext::onerror() const {
    return BaseAudioContext::get("onerror").as<jsbind::Any>();
}

void AudioContext::onerror(const jsbind::Any& value) {
    BaseAudioContext::set("onerror", value);
}

AudioTimestamp AudioContext::getOutputTimestamp() {
    return BaseAudioContext::call("getOutputTimestamp").as<AudioTimestamp>();
}

jsbind::Promise<jsbind::Undefined> AudioContext::resume() {
    return BaseAudioContext::call("resume").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> AudioContext::suspend() {
    return BaseAudioContext::call("suspend").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> AudioContext::close() {
    return BaseAudioContext::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> AudioContext::setSinkId(const jsbind::Any& sinkId) {
    return BaseAudioContext::call("setSinkId", sinkId).as<jsbind::Promise<jsbind::Undefined>>();
}

MediaElementAudioSourceNode AudioContext::createMediaElementSource(const HTMLMediaElement& mediaElement) {
    return BaseAudioContext::call("createMediaElementSource", mediaElement).as<MediaElementAudioSourceNode>();
}

MediaStreamAudioSourceNode AudioContext::createMediaStreamSource(const MediaStream& mediaStream) {
    return BaseAudioContext::call("createMediaStreamSource", mediaStream).as<MediaStreamAudioSourceNode>();
}

MediaStreamTrackAudioSourceNode AudioContext::createMediaStreamTrackSource(const MediaStreamTrack& mediaStreamTrack) {
    return BaseAudioContext::call("createMediaStreamTrackSource", mediaStreamTrack).as<MediaStreamTrackAudioSourceNode>();
}

MediaStreamAudioDestinationNode AudioContext::createMediaStreamDestination() {
    return BaseAudioContext::call("createMediaStreamDestination").as<MediaStreamAudioDestinationNode>();
}


} // namespace webbind