#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


class DelayNode : public AudioNode {
    explicit DelayNode(Handle h) noexcept;

public:
    explicit DelayNode(const emlite::Val &val) noexcept;
    static DelayNode take_ownership(Handle h) noexcept;

    DelayNode clone() const noexcept;
    DelayNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioParam delayTime() const;
};

