#include <webbind/AudioDataInit.hpp>

namespace webbind {

AudioDataInit::AudioDataInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDataInit AudioDataInit::take_ownership(Handle h) noexcept {
    return AudioDataInit(h);
}

AudioDataInit::AudioDataInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioDataInit::AudioDataInit() noexcept: emlite::Val(emlite::Val::object()) {}

AudioDataInit AudioDataInit::clone() const noexcept { return *this; }

AudioSampleFormat AudioDataInit::format() const {
    return emlite::Val::get("format").as<AudioSampleFormat>();
}

void AudioDataInit::format(const AudioSampleFormat& value) {
    emlite::Val::set("format", value);
}

float AudioDataInit::sampleRate() const {
    return emlite::Val::get("sampleRate").as<float>();
}

void AudioDataInit::sampleRate(float value) {
    emlite::Val::set("sampleRate", value);
}

unsigned long AudioDataInit::numberOfFrames() const {
    return emlite::Val::get("numberOfFrames").as<unsigned long>();
}

void AudioDataInit::numberOfFrames(unsigned long value) {
    emlite::Val::set("numberOfFrames", value);
}

unsigned long AudioDataInit::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

void AudioDataInit::numberOfChannels(unsigned long value) {
    emlite::Val::set("numberOfChannels", value);
}

long long AudioDataInit::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

void AudioDataInit::timestamp(long long value) {
    emlite::Val::set("timestamp", value);
}

jsbind::Any AudioDataInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void AudioDataInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

jsbind::TypedArray<jsbind::ArrayBuffer> AudioDataInit::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

void AudioDataInit::transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value) {
    emlite::Val::set("transfer", value);
}


} // namespace webbind