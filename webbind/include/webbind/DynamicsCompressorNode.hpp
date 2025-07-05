#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


class DynamicsCompressorNode : public AudioNode {
    explicit DynamicsCompressorNode(Handle h) noexcept;

public:
    explicit DynamicsCompressorNode(const emlite::Val &val) noexcept;
    static DynamicsCompressorNode take_ownership(Handle h) noexcept;

    DynamicsCompressorNode clone() const noexcept;
    DynamicsCompressorNode(const BaseAudioContext& context);
    DynamicsCompressorNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioParam threshold() const;
    AudioParam knee() const;
    AudioParam ratio() const;
    float reduction() const;
    AudioParam attack() const;
    AudioParam release() const;
};

