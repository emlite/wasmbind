#include <webbind/ChannelSplitterNode.hpp>
#include <webbind/BaseAudioContext.hpp>
#include <webbind/ChannelSplitterOptions.hpp>

namespace webbind {

ChannelSplitterNode ChannelSplitterNode::take_ownership(Handle h) noexcept {
    return ChannelSplitterNode(h);
}

ChannelSplitterNode ChannelSplitterNode::clone() const noexcept { return *this; }

emlite::Val ChannelSplitterNode::instance() noexcept { return emlite::Val::global("ChannelSplitterNode"); }

ChannelSplitterNode::ChannelSplitterNode(Handle h) noexcept : AudioNode(emlite::Val::take_ownership(h)) {}

ChannelSplitterNode::ChannelSplitterNode(const emlite::Val &val) noexcept: AudioNode(val) {}

ChannelSplitterNode::ChannelSplitterNode(const BaseAudioContext& context) : AudioNode(emlite::Val::global("ChannelSplitterNode").new_(context)) {}

ChannelSplitterNode::ChannelSplitterNode(const BaseAudioContext& context, const ChannelSplitterOptions& options) : AudioNode(emlite::Val::global("ChannelSplitterNode").new_(context, options)) {}


} // namespace webbind