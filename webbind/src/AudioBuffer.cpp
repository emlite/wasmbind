#include <webbind/AudioBuffer.hpp>


AudioBuffer AudioBuffer::take_ownership(Handle h) noexcept {
        return AudioBuffer(h);
    }
AudioBuffer AudioBuffer::clone() const noexcept { return *this; }
AudioBuffer::AudioBuffer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioBuffer::AudioBuffer(const emlite::Val &val) noexcept: emlite::Val(val) {}


AudioBuffer::AudioBuffer(const jsbind::Any& options) : emlite::Val(emlite::Val::global("AudioBuffer").new_(options)) {}

float AudioBuffer::sampleRate() const {
    return emlite::Val::get("sampleRate").as<float>();
}

unsigned long AudioBuffer::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

double AudioBuffer::duration() const {
    return emlite::Val::get("duration").as<double>();
}

unsigned long AudioBuffer::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

jsbind::Float32Array AudioBuffer::getChannelData(unsigned long channel) {
    return emlite::Val::call("getChannelData", channel).as<jsbind::Float32Array>();
}

jsbind::Undefined AudioBuffer::copyFromChannel(const jsbind::Float32Array& destination, unsigned long channelNumber) {
    return emlite::Val::call("copyFromChannel", destination, channelNumber).as<jsbind::Undefined>();
}

jsbind::Undefined AudioBuffer::copyFromChannel(const jsbind::Float32Array& destination, unsigned long channelNumber, unsigned long bufferOffset) {
    return emlite::Val::call("copyFromChannel", destination, channelNumber, bufferOffset).as<jsbind::Undefined>();
}

jsbind::Undefined AudioBuffer::copyToChannel(const jsbind::Float32Array& source, unsigned long channelNumber) {
    return emlite::Val::call("copyToChannel", source, channelNumber).as<jsbind::Undefined>();
}

jsbind::Undefined AudioBuffer::copyToChannel(const jsbind::Float32Array& source, unsigned long channelNumber, unsigned long bufferOffset) {
    return emlite::Val::call("copyToChannel", source, channelNumber, bufferOffset).as<jsbind::Undefined>();
}

