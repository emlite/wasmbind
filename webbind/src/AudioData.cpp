#include "webbind/AudioData.hpp"
#include "webbind/AudioDataInit.hpp"
#include "webbind/AudioDataCopyToOptions.hpp"
#include "webbind/AudioData.hpp"

namespace webbind {

AudioData AudioData::take_ownership(Handle h) noexcept {
        return AudioData(h);
    }
AudioData AudioData::clone() const noexcept { return *this; }
emlite::Val AudioData::instance() noexcept { return emlite::Val::global("AudioData"); }
AudioData::AudioData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioData::AudioData(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioData::AudioData(const AudioDataInit& init) : emlite::Val(emlite::Val::global("AudioData").new_(init)) {}

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


} // namespace webbind