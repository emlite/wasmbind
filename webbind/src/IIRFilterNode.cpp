#include <webbind/IIRFilterNode.hpp>
#include <webbind/BaseAudioContext.hpp>


IIRFilterNode IIRFilterNode::take_ownership(Handle h) noexcept {
        return IIRFilterNode(h);
    }
IIRFilterNode IIRFilterNode::clone() const noexcept { return *this; }
IIRFilterNode::IIRFilterNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
IIRFilterNode::IIRFilterNode(const emlite::Val &val) noexcept: AudioNode(val) {}


IIRFilterNode::IIRFilterNode(const BaseAudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("IIRFilterNode").new_(context, options)) {}

jsbind::Undefined IIRFilterNode::getFrequencyResponse(const jsbind::Float32Array& frequencyHz, const jsbind::Float32Array& magResponse, const jsbind::Float32Array& phaseResponse) {
    return AudioNode::call("getFrequencyResponse", frequencyHz, magResponse, phaseResponse).as<jsbind::Undefined>();
}

