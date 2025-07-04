#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


class GainNode : public AudioNode {
    explicit GainNode(Handle h) noexcept;

public:
    explicit GainNode(const emlite::Val &val) noexcept;
    static GainNode take_ownership(Handle h) noexcept;

    GainNode clone() const noexcept;
    GainNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioParam gain() const;
};

