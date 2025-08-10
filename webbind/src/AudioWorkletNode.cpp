#include <webbind/AudioWorkletNode.hpp>
#include <webbind/BaseAudioContext.hpp>
#include <webbind/AudioWorkletNodeOptions.hpp>
#include <webbind/AudioParamMap.hpp>
#include <webbind/MessagePort.hpp>

namespace webbind {

AudioWorkletNode AudioWorkletNode::take_ownership(Handle h) noexcept {
        return AudioWorkletNode(h);
    }
AudioWorkletNode AudioWorkletNode::clone() const noexcept { return *this; }
emlite::Val AudioWorkletNode::instance() noexcept { return emlite::Val::global("AudioWorkletNode"); }
AudioWorkletNode::AudioWorkletNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
AudioWorkletNode::AudioWorkletNode(const emlite::Val &val) noexcept: AudioNode(val) {}

AudioWorkletNode::AudioWorkletNode(const BaseAudioContext& context, const jsbind::String& name) : AudioNode(emlite::Val::global("AudioWorkletNode").new_(context, name)) {}

AudioWorkletNode::AudioWorkletNode(const BaseAudioContext& context, const jsbind::String& name, const AudioWorkletNodeOptions& options) : AudioNode(emlite::Val::global("AudioWorkletNode").new_(context, name, options)) {}

AudioParamMap AudioWorkletNode::parameters() const {
    return AudioNode::get("parameters").as<AudioParamMap>();
}

MessagePort AudioWorkletNode::port() const {
    return AudioNode::get("port").as<MessagePort>();
}

jsbind::Any AudioWorkletNode::onprocessorerror() const {
    return AudioNode::get("onprocessorerror").as<jsbind::Any>();
}

void AudioWorkletNode::onprocessorerror(const jsbind::Any& value) {
    AudioNode::set("onprocessorerror", value);
}


} // namespace webbind