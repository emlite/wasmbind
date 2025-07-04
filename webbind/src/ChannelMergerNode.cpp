#include <webbind/ChannelMergerNode.hpp>
#include <webbind/BaseAudioContext.hpp>


ChannelMergerNode ChannelMergerNode::take_ownership(Handle h) noexcept {
        return ChannelMergerNode(h);
    }
ChannelMergerNode ChannelMergerNode::clone() const noexcept { return *this; }
ChannelMergerNode::ChannelMergerNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
ChannelMergerNode::ChannelMergerNode(const emlite::Val &val) noexcept: AudioNode(val) {}


ChannelMergerNode::ChannelMergerNode(const BaseAudioContext& context, const jsbind::Any& options): AudioNode(emlite::Val::global("ChannelMergerNode").new_(context, options)) {}

