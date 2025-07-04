#include <webbind/AudioBufferSourceNode.hpp>
#include <webbind/AudioBuffer.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


AudioBufferSourceNode AudioBufferSourceNode::take_ownership(Handle h) noexcept {
        return AudioBufferSourceNode(h);
    }
AudioBufferSourceNode AudioBufferSourceNode::clone() const noexcept { return *this; }
AudioBufferSourceNode::AudioBufferSourceNode(Handle h) noexcept : AudioScheduledSourceNode(emlite::Val::take_ownership(h)) {}
AudioBufferSourceNode::AudioBufferSourceNode(const emlite::Val &val) noexcept: AudioScheduledSourceNode(val) {}


AudioBufferSourceNode::AudioBufferSourceNode(const BaseAudioContext& context, const jsbind::Any& options): AudioScheduledSourceNode(emlite::Val::global("AudioBufferSourceNode").new_(context, options)) {}

AudioBuffer AudioBufferSourceNode::buffer() const {
    return AudioScheduledSourceNode::get("buffer").as<AudioBuffer>();
}

void AudioBufferSourceNode::buffer(const AudioBuffer& value) {
    AudioScheduledSourceNode::set("buffer", value);
}

AudioParam AudioBufferSourceNode::playbackRate() const {
    return AudioScheduledSourceNode::get("playbackRate").as<AudioParam>();
}

AudioParam AudioBufferSourceNode::detune() const {
    return AudioScheduledSourceNode::get("detune").as<AudioParam>();
}

bool AudioBufferSourceNode::loop() const {
    return AudioScheduledSourceNode::get("loop").as<bool>();
}

void AudioBufferSourceNode::loop(bool value) {
    AudioScheduledSourceNode::set("loop", value);
}

double AudioBufferSourceNode::loopStart() const {
    return AudioScheduledSourceNode::get("loopStart").as<double>();
}

void AudioBufferSourceNode::loopStart(double value) {
    AudioScheduledSourceNode::set("loopStart", value);
}

double AudioBufferSourceNode::loopEnd() const {
    return AudioScheduledSourceNode::get("loopEnd").as<double>();
}

void AudioBufferSourceNode::loopEnd(double value) {
    AudioScheduledSourceNode::set("loopEnd", value);
}

jsbind::Undefined AudioBufferSourceNode::start(double when, double offset, double duration) {
    return AudioScheduledSourceNode::call("start", when, offset, duration).as<jsbind::Undefined>();
}

