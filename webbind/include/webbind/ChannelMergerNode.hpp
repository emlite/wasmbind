#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The ChannelMergerNode class.
/// [`ChannelMergerNode`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelMergerNode)
class ChannelMergerNode : public AudioNode {
    explicit ChannelMergerNode(Handle h) noexcept;

public:
    explicit ChannelMergerNode(const emlite::Val &val) noexcept;
    static ChannelMergerNode take_ownership(Handle h) noexcept;

    [[nodiscard]] ChannelMergerNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ChannelMergerNode(..)` constructor, creating a new ChannelMergerNode instance
    ChannelMergerNode(const BaseAudioContext& context);
    /// The `new ChannelMergerNode(..)` constructor, creating a new ChannelMergerNode instance
    ChannelMergerNode(const BaseAudioContext& context, const jsbind::Any& options);
};

