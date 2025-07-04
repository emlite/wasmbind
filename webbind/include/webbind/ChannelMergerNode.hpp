#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class ChannelMergerNode : public AudioNode {
    explicit ChannelMergerNode(Handle h) noexcept;

public:
    explicit ChannelMergerNode(const emlite::Val &val) noexcept;
    static ChannelMergerNode take_ownership(Handle h) noexcept;

    ChannelMergerNode clone() const noexcept;
    ChannelMergerNode(const BaseAudioContext& context, const jsbind::Any& options);
};

