#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


class StereoPannerNode : public AudioNode {
    explicit StereoPannerNode(Handle h) noexcept;

public:
    explicit StereoPannerNode(const emlite::Val &val) noexcept;
    static StereoPannerNode take_ownership(Handle h) noexcept;

    StereoPannerNode clone() const noexcept;
    StereoPannerNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioParam pan() const;
};

