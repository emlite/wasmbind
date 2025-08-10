#include "webbind/ChannelMergerNode.hpp"
#include "webbind/BaseAudioContext.hpp"
#include "webbind/ChannelMergerOptions.hpp"

namespace webbind {

ChannelMergerNode ChannelMergerNode::take_ownership(Handle h) noexcept {
        return ChannelMergerNode(h);
    }
ChannelMergerNode ChannelMergerNode::clone() const noexcept { return *this; }
emlite::Val ChannelMergerNode::instance() noexcept { return emlite::Val::global("ChannelMergerNode"); }
ChannelMergerNode::ChannelMergerNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
ChannelMergerNode::ChannelMergerNode(const emlite::Val &val) noexcept: AudioNode(val) {}

ChannelMergerNode::ChannelMergerNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("ChannelMergerNode").new_(context)) {}

ChannelMergerNode::ChannelMergerNode(const BaseAudioContext& context, const ChannelMergerOptions& options) : AudioNode(emlite::Val::global("ChannelMergerNode").new_(context, options)) {}


} // namespace webbind