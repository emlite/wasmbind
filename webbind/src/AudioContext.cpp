#include <webbind/AudioContext.hpp>
#include <webbind/MediaElementAudioSourceNode.hpp>
#include <webbind/HTMLMediaElement.hpp>
#include <webbind/MediaStreamAudioSourceNode.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/MediaStreamTrackAudioSourceNode.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/MediaStreamAudioDestinationNode.hpp>


AudioTimestamp::AudioTimestamp(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioTimestamp AudioTimestamp::take_ownership(Handle h) noexcept {
        return AudioTimestamp(h);
    }
AudioTimestamp::AudioTimestamp(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioTimestamp::AudioTimestamp() noexcept: emlite::Val(emlite::Val::object()) {}
AudioTimestamp AudioTimestamp::clone() const noexcept { return *this; }

double AudioTimestamp::contextTime() const {
    return emlite::Val::get("contextTime").as<double>();
}

void AudioTimestamp::contextTime(double value) {
    emlite::Val::set("contextTime", value);
}

jsbind::Any AudioTimestamp::performanceTime() const {
    return emlite::Val::get("performanceTime").as<jsbind::Any>();
}

void AudioTimestamp::performanceTime(const jsbind::Any& value) {
    emlite::Val::set("performanceTime", value);
}

AudioContext AudioContext::take_ownership(Handle h) noexcept {
        return AudioContext(h);
    }
AudioContext AudioContext::clone() const noexcept { return *this; }
emlite::Val AudioContext::instance() noexcept { return emlite::Val::global("AudioContext"); }
AudioContext::AudioContext(Handle h) noexcept : BaseAudioContext(emlite::Val::take_ownership(h)) {}
AudioContext::AudioContext(const emlite::Val &val) noexcept: BaseAudioContext(val) {}


AudioContext::AudioContext() : BaseAudioContext(emlite::Val::global("AudioContext").new_()) {}

AudioContext::AudioContext(const jsbind::Any& contextOptions) : BaseAudioContext(emlite::Val::global("AudioContext").new_(contextOptions)) {}

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

