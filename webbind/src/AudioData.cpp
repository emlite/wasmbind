#include <webbind/AudioData.hpp>


AudioDataCopyToOptions::AudioDataCopyToOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioDataCopyToOptions AudioDataCopyToOptions::take_ownership(Handle h) noexcept {
        return AudioDataCopyToOptions(h);
    }
AudioDataCopyToOptions::AudioDataCopyToOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioDataCopyToOptions::AudioDataCopyToOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AudioDataCopyToOptions AudioDataCopyToOptions::clone() const noexcept { return *this; }

unsigned long AudioDataCopyToOptions::planeIndex() const {
    return emlite::Val::get("planeIndex").as<unsigned long>();
}

void AudioDataCopyToOptions::planeIndex(unsigned long value) {
    emlite::Val::set("planeIndex", value);
}

unsigned long AudioDataCopyToOptions::frameOffset() const {
    return emlite::Val::get("frameOffset").as<unsigned long>();
}

void AudioDataCopyToOptions::frameOffset(unsigned long value) {
    emlite::Val::set("frameOffset", value);
}

unsigned long AudioDataCopyToOptions::frameCount() const {
    return emlite::Val::get("frameCount").as<unsigned long>();
}

void AudioDataCopyToOptions::frameCount(unsigned long value) {
    emlite::Val::set("frameCount", value);
}

AudioSampleFormat AudioDataCopyToOptions::format() const {
    return emlite::Val::get("format").as<AudioSampleFormat>();
}

void AudioDataCopyToOptions::format(const AudioSampleFormat& value) {
    emlite::Val::set("format", value);
}

AudioData AudioData::take_ownership(Handle h) noexcept {
        return AudioData(h);
    }
AudioData AudioData::clone() const noexcept { return *this; }
emlite::Val AudioData::instance() noexcept { return emlite::Val::global("AudioData"); }
AudioData::AudioData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioData::AudioData(const emlite::Val &val) noexcept: emlite::Val(val) {}


AudioData::AudioData(const jsbind::Any& init) : emlite::Val(emlite::Val::global("AudioData").new_(init)) {}

AudioSampleFormat AudioData::format() const {
    return emlite::Val::get("format").as<AudioSampleFormat>();
}

float AudioData::sampleRate() const {
    return emlite::Val::get("sampleRate").as<float>();
}

unsigned long AudioData::numberOfFrames() const {
    return emlite::Val::get("numberOfFrames").as<unsigned long>();
}

unsigned long AudioData::numberOfChannels() const {
    return emlite::Val::get("numberOfChannels").as<unsigned long>();
}

long long AudioData::duration() const {
    return emlite::Val::get("duration").as<long long>();
}

long long AudioData::timestamp() const {
    return emlite::Val::get("timestamp").as<long long>();
}

unsigned long AudioData::allocationSize(const AudioDataCopyToOptions& options) {
    return emlite::Val::call("allocationSize", options).as<unsigned long>();
}

jsbind::Undefined AudioData::copyTo(const jsbind::Any& destination, const AudioDataCopyToOptions& options) {
    return emlite::Val::call("copyTo", destination, options).as<jsbind::Undefined>();
}

AudioData AudioData::clone() {
    return emlite::Val::call("clone").as<AudioData>();
}

jsbind::Undefined AudioData::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}

