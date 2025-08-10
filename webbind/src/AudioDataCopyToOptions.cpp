#include <webbind/AudioDataCopyToOptions.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind