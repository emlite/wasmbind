#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class ChannelSplitterNode : public AudioNode {
    explicit ChannelSplitterNode(Handle h) noexcept;

public:
    explicit ChannelSplitterNode(const emlite::Val &val) noexcept;
    static ChannelSplitterNode take_ownership(Handle h) noexcept;

    ChannelSplitterNode clone() const noexcept;
    ChannelSplitterNode(const BaseAudioContext& context);
    ChannelSplitterNode(const BaseAudioContext& context, const jsbind::Any& options);
};

