#include <webbind/BiquadFilterNode.hpp>
#include <webbind/AudioParam.hpp>
#include <webbind/BaseAudioContext.hpp>


BiquadFilterNode BiquadFilterNode::take_ownership(Handle h) noexcept {
        return BiquadFilterNode(h);
    }
BiquadFilterNode BiquadFilterNode::clone() const noexcept { return *this; }
emlite::Val BiquadFilterNode::instance() noexcept { return emlite::Val::global("BiquadFilterNode"); }
BiquadFilterNode::BiquadFilterNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
BiquadFilterNode::BiquadFilterNode(const emlite::Val &val) noexcept: AudioNode(val) {}


BiquadFilterNode::BiquadFilterNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("BiquadFilterNode").new_(context)) {}

BiquadFilterNode::BiquadFilterNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("BiquadFilterNode").new_(context, options)) {}

BiquadFilterType BiquadFilterNode::type() const {
    return AudioNode::get("type").as<BiquadFilterType>();
}

void BiquadFilterNode::type(const BiquadFilterType& value) {
    AudioNode::set("type", value);
}

AudioParam BiquadFilterNode::frequency() const {
    return AudioNode::get("frequency").as<AudioParam>();
}

AudioParam BiquadFilterNode::detune() const {
    return AudioNode::get("detune").as<AudioParam>();
}

AudioParam BiquadFilterNode::Q() const {
    return AudioNode::get("Q").as<AudioParam>();
}

AudioParam BiquadFilterNode::gain() const {
    return AudioNode::get("gain").as<AudioParam>();
}

jsbind::Undefined BiquadFilterNode::getFrequencyResponse(const jsbind::Float32Array& frequencyHz, const jsbind::Float32Array& magResponse, const jsbind::Float32Array& phaseResponse) {
    return AudioNode::call("getFrequencyResponse", frequencyHz, magResponse, phaseResponse).as<jsbind::Undefined>();
}

