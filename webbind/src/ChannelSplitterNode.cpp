#include <webbind/ChannelSplitterNode.hpp>
#include <webbind/BaseAudioContext.hpp>


ChannelSplitterNode ChannelSplitterNode::take_ownership(Handle h) noexcept {
        return ChannelSplitterNode(h);
    }
ChannelSplitterNode ChannelSplitterNode::clone() const noexcept { return *this; }
ChannelSplitterNode::ChannelSplitterNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}
ChannelSplitterNode::ChannelSplitterNode(const emlite::Val &val) noexcept: AudioNode(val) {}


ChannelSplitterNode::ChannelSplitterNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("ChannelSplitterNode").new_(context)) {}

ChannelSplitterNode::ChannelSplitterNode(const BaseAudioContext& context, const jsbind::Any& options) : AudioNode(emlite::Val::global("ChannelSplitterNode").new_(context, options)) {}

