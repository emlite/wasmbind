#include "webbind/ChannelMergerOptions.hpp"

using emlite::Val;
namespace webbind {

ChannelMergerOptions::ChannelMergerOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
ChannelMergerOptions ChannelMergerOptions::take_ownership(Handle h) noexcept {
        return ChannelMergerOptions(h);
    }
ChannelMergerOptions::ChannelMergerOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
ChannelMergerOptions::ChannelMergerOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
ChannelMergerOptions ChannelMergerOptions::clone() const noexcept { return *this; }

unsigned long ChannelMergerOptions::numberOfInputs() const {
    return emlite::Val::get("numberOfInputs").as<unsigned long>();
}

void ChannelMergerOptions::numberOfInputs(unsigned long value) {
    emlite::Val::set("numberOfInputs", value);
}


} // namespace webbind