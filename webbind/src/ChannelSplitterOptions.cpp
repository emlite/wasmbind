#include "webbind/ChannelSplitterOptions.hpp"

using emlite::Val;
namespace webbind {

ChannelSplitterOptions::ChannelSplitterOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
ChannelSplitterOptions ChannelSplitterOptions::take_ownership(Handle h) noexcept {
        return ChannelSplitterOptions(h);
    }
ChannelSplitterOptions::ChannelSplitterOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
ChannelSplitterOptions::ChannelSplitterOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
ChannelSplitterOptions ChannelSplitterOptions::clone() const noexcept { return *this; }

unsigned long ChannelSplitterOptions::numberOfOutputs() const {
    return emlite::Val::get("numberOfOutputs").as<unsigned long>();
}

void ChannelSplitterOptions::numberOfOutputs(unsigned long value) {
    emlite::Val::set("numberOfOutputs", value);
}


} // namespace webbind