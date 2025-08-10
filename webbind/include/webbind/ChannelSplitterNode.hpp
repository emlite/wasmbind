#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "ChannelSplitterOptions.hpp"

namespace webbind {

class BaseAudioContext;

/// Interface ChannelSplitterNode
/// [`ChannelSplitterNode`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelSplitterNode)
class ChannelSplitterNode : public AudioNode {
    explicit ChannelSplitterNode(Handle h) noexcept;
public:
    explicit ChannelSplitterNode(const emlite::Val &val) noexcept;
    static ChannelSplitterNode take_ownership(Handle h) noexcept;
    [[nodiscard]] ChannelSplitterNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ChannelSplitterNode(..)` constructor, creating a new ChannelSplitterNode instance
    ChannelSplitterNode(const BaseAudioContext& context);
    /// The `new ChannelSplitterNode(..)` constructor, creating a new ChannelSplitterNode instance
    ChannelSplitterNode(const BaseAudioContext& context, const ChannelSplitterOptions& options);
};

} // namespace webbind