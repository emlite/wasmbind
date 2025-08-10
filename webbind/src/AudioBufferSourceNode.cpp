#include <webbind/AudioBufferSourceNode.hpp>
#include <webbind/BaseAudioContext.hpp>
#include <webbind/AudioBufferSourceOptions.hpp>
#include <webbind/AudioBuffer.hpp>
#include <webbind/AudioParam.hpp>

namespace webbind {

AudioBufferSourceNode AudioBufferSourceNode::take_ownership(Handle h) noexcept {
    return AudioBufferSourceNode(h);
}

AudioBufferSourceNode AudioBufferSourceNode::clone() const noexcept { return *this; }

emlite::Val AudioBufferSourceNode::instance() noexcept { return emlite::Val::global("AudioBufferSourceNode"); }

AudioBufferSourceNode::AudioBufferSourceNode(Handle h) noexcept : AudioScheduledSourceNode(emlite::Val::take_ownership(h)) {}

AudioBufferSourceNode::AudioBufferSourceNode(const emlite::Val &val) noexcept: AudioScheduledSourceNode(val) {}

AudioBufferSourceNode::AudioBufferSourceNode(const BaseAudioContext& context) : AudioScheduledSourceNode(emlite::Val::global("AudioBufferSourceNode").new_(context)) {}

AudioBufferSourceNode::AudioBufferSourceNode(const BaseAudioContext& context, const AudioBufferSourceOptions& options) : AudioScheduledSourceNode(emlite::Val::global("AudioBufferSourceNode").new_(context, options)) {}

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

jsbind::Undefined AudioBufferSourceNode::start() {
    return AudioScheduledSourceNode::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined AudioBufferSourceNode::start(double when) {
    return AudioScheduledSourceNode::call("start", when).as<jsbind::Undefined>();
}

jsbind::Undefined AudioBufferSourceNode::start(double when, double offset) {
    return AudioScheduledSourceNode::call("start", when, offset).as<jsbind::Undefined>();
}

jsbind::Undefined AudioBufferSourceNode::start(double when, double offset, double duration) {
    return AudioScheduledSourceNode::call("start", when, offset, duration).as<jsbind::Undefined>();
}


} // namespace webbind