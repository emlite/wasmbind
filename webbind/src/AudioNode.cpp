#include "webbind/AudioNode.hpp"
#include "webbind/AudioParam.hpp"
#include "webbind/BaseAudioContext.hpp"

namespace webbind {

AudioNode AudioNode::take_ownership(Handle h) noexcept {
        return AudioNode(h);
    }
AudioNode AudioNode::clone() const noexcept { return *this; }
emlite::Val AudioNode::instance() noexcept { return emlite::Val::global("AudioNode"); }
AudioNode::AudioNode(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
AudioNode::AudioNode(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Undefined AudioNode::connect(const AudioParam& destinationParam) {
    return EventTarget::call("connect", destinationParam).as<jsbind::Undefined>();
}

jsbind::Undefined AudioNode::connect(const AudioParam& destinationParam, unsigned long output) {
    return EventTarget::call("connect", destinationParam, output).as<jsbind::Undefined>();
}

jsbind::Undefined AudioNode::disconnect(const AudioParam& destinationParam, unsigned long output) {
    return EventTarget::call("disconnect", destinationParam, output).as<jsbind::Undefined>();
}

BaseAudioContext AudioNode::context() const {
    return EventTarget::get("context").as<BaseAudioContext>();
}

unsigned long AudioNode::numberOfInputs() const {
    return EventTarget::get("numberOfInputs").as<unsigned long>();
}

unsigned long AudioNode::numberOfOutputs() const {
    return EventTarget::get("numberOfOutputs").as<unsigned long>();
}

unsigned long AudioNode::channelCount() const {
    return EventTarget::get("channelCount").as<unsigned long>();
}

void AudioNode::channelCount(unsigned long value) {
    EventTarget::set("channelCount", value);
}

ChannelCountMode AudioNode::channelCountMode() const {
    return EventTarget::get("channelCountMode").as<ChannelCountMode>();
}

void AudioNode::channelCountMode(const ChannelCountMode& value) {
    EventTarget::set("channelCountMode", value);
}

ChannelInterpretation AudioNode::channelInterpretation() const {
    return EventTarget::get("channelInterpretation").as<ChannelInterpretation>();
}

void AudioNode::channelInterpretation(const ChannelInterpretation& value) {
    EventTarget::set("channelInterpretation", value);
}


} // namespace webbind