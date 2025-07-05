#include <webbind/AudioWorkletNode.hpp>
#include <webbind/AudioParamMap.hpp>
#include <webbind/MessagePort.hpp>
#include <webbind/BaseAudioContext.hpp>


AudioWorkletNode AudioWorkletNode::take_ownership(Handle h) noexcept {
        return AudioWorkletNode(h);
    }
AudioWorkletNode AudioWorkletNode::clone() const noexcept { return *this; }
AudioWorkletNode::AudioWorkletNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
AudioWorkletNode::AudioWorkletNode(const emlite::Val &val) noexcept: AudioNode(val) {}


AudioWorkletNode::AudioWorkletNode(const BaseAudioContext& context, const jsbind::DOMString& name) : AudioNode(emlite::Val::global("AudioWorkletNode").new_(context, name)) {}

AudioWorkletNode::AudioWorkletNode(const BaseAudioContext& context, const jsbind::DOMString& name, const jsbind::Any& options) : AudioNode(emlite::Val::global("AudioWorkletNode").new_(context, name, options)) {}

AudioParamMap AudioWorkletNode::parameters() const {
    return AudioNode::get("parameters").as<AudioParamMap>();
}

jsbind::Any AudioWorkletNode::port() const {
    return AudioNode::get("port").as<jsbind::Any>();
}

jsbind::Any AudioWorkletNode::onprocessorerror() const {
    return AudioNode::get("onprocessorerror").as<jsbind::Any>();
}

void AudioWorkletNode::onprocessorerror(const jsbind::Any& value) {
    AudioNode::set("onprocessorerror", value);
}

