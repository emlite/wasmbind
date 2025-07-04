#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class AudioDestinationNode : public AudioNode {
    explicit AudioDestinationNode(Handle h) noexcept;

public:
    explicit AudioDestinationNode(const emlite::Val &val) noexcept;
    static AudioDestinationNode take_ownership(Handle h) noexcept;

    AudioDestinationNode clone() const noexcept;
    unsigned long maxChannelCount() const;
};

