#include <webbind/OscillatorNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/PeriodicWave.hpp>
#include <webbind/BaseAudioContext.hpp>


OscillatorNode OscillatorNode::take_ownership(Handle h) noexcept {
        return OscillatorNode(h);
    }
OscillatorNode OscillatorNode::clone() const noexcept { return *this; }
OscillatorNode::OscillatorNode(Handle h) noexcept : AudioScheduledSourceNode(emlite::Val::take_ownership(h)) {}
OscillatorNode::OscillatorNode(const emlite::Val &val) noexcept: AudioScheduledSourceNode(val) {}


OscillatorNode::OscillatorNode(const BaseAudioContext& context) : AudioScheduledSourceNode(emlite::Val::global("OscillatorNode").new_(context)) {}

OscillatorNode::OscillatorNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioScheduledSourceNode(emlite::Val::global("OscillatorNode").new_(context, options)) {}

OscillatorType OscillatorNode::type() const {
    return AudioScheduledSourceNode::get("type").as<OscillatorType>();
}

void OscillatorNode::type(const OscillatorType& value) {
    AudioScheduledSourceNode::set("type", value);
}

AudioParam OscillatorNode::frequency() const {
    return AudioScheduledSourceNode::get("frequency").as<AudioParam>();
}

AudioParam OscillatorNode::detune() const {
    return AudioScheduledSourceNode::get("detune").as<AudioParam>();
}

jsbind::Undefined OscillatorNode::setPeriodicWave(const PeriodicWave& periodicWave) {
    return AudioScheduledSourceNode::call("setPeriodicWave", periodicWave).as<jsbind::Undefined>();
}

