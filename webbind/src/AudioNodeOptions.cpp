#include "webbind/AudioNodeOptions.hpp"

using emlite::Val;
namespace webbind {

AudioNodeOptions::AudioNodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioNodeOptions AudioNodeOptions::take_ownership(Handle h) noexcept {
        return AudioNodeOptions(h);
    }
AudioNodeOptions::AudioNodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioNodeOptions::AudioNodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AudioNodeOptions AudioNodeOptions::clone() const noexcept { return *this; }

unsigned long AudioNodeOptions::channelCount() const {
    return emlite::Val::get("channelCount").as<unsigned long>();
}

void AudioNodeOptions::channelCount(unsigned long value) {
    emlite::Val::set("channelCount", value);
}

ChannelCountMode AudioNodeOptions::channelCountMode() const {
    return emlite::Val::get("channelCountMode").as<ChannelCountMode>();
}

void AudioNodeOptions::channelCountMode(const ChannelCountMode& value) {
    emlite::Val::set("channelCountMode", value);
}

ChannelInterpretation AudioNodeOptions::channelInterpretation() const {
    return emlite::Val::get("channelInterpretation").as<ChannelInterpretation>();
}

void AudioNodeOptions::channelInterpretation(const ChannelInterpretation& value) {
    emlite::Val::set("channelInterpretation", value);
}


} // namespace webbind