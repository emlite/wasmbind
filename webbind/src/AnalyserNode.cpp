#include <webbind/AnalyserNode.hpp>
#include <webbind/BaseAudioContext.hpp>


AnalyserNode AnalyserNode::take_ownership(Handle h) noexcept {
        return AnalyserNode(h);
    }
AnalyserNode AnalyserNode::clone() const noexcept { return *this; }
AnalyserNode::AnalyserNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
AnalyserNode::AnalyserNode(const emlite::Val &val) noexcept: AudioNode(val) {}


AnalyserNode::AnalyserNode(const BaseAudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("AnalyserNode").new_(context, options)) {}

jsbind::Undefined AnalyserNode::getFloatFrequencyData(const jsbind::Float32Array& array) {
    return AudioNode::call("getFloatFrequencyData", array).as<jsbind::Undefined>();
}

jsbind::Undefined AnalyserNode::getByteFrequencyData(const jsbind::Uint8Array& array) {
    return AudioNode::call("getByteFrequencyData", array).as<jsbind::Undefined>();
}

jsbind::Undefined AnalyserNode::getFloatTimeDomainData(const jsbind::Float32Array& array) {
    return AudioNode::call("getFloatTimeDomainData", array).as<jsbind::Undefined>();
}

jsbind::Undefined AnalyserNode::getByteTimeDomainData(const jsbind::Uint8Array& array) {
    return AudioNode::call("getByteTimeDomainData", array).as<jsbind::Undefined>();
}

unsigned long AnalyserNode::fftSize() const {
    return AudioNode::get("fftSize").as<unsigned long>();
}

void AnalyserNode::fftSize(unsigned long value) {
    AudioNode::set("fftSize", value);
}

unsigned long AnalyserNode::frequencyBinCount() const {
    return AudioNode::get("frequencyBinCount").as<unsigned long>();
}

double AnalyserNode::minDecibels() const {
    return AudioNode::get("minDecibels").as<double>();
}

void AnalyserNode::minDecibels(double value) {
    AudioNode::set("minDecibels", value);
}

double AnalyserNode::maxDecibels() const {
    return AudioNode::get("maxDecibels").as<double>();
}

void AnalyserNode::maxDecibels(double value) {
    AudioNode::set("maxDecibels", value);
}

double AnalyserNode::smoothingTimeConstant() const {
    return AudioNode::get("smoothingTimeConstant").as<double>();
}

void AnalyserNode::smoothingTimeConstant(double value) {
    AudioNode::set("smoothingTimeConstant", value);
}

