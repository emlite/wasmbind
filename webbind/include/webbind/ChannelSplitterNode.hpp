#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The ChannelSplitterNode class.
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
    ChannelSplitterNode(const BaseAudioContext& context, const jsbind::Any& options);
};

