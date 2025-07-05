#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


class BiquadFilterNode : public AudioNode {
    explicit BiquadFilterNode(Handle h) noexcept;

public:
    explicit BiquadFilterNode(const emlite::Val &val) noexcept;
    static BiquadFilterNode take_ownership(Handle h) noexcept;

    BiquadFilterNode clone() const noexcept;
    BiquadFilterNode(const BaseAudioContext& context);
    BiquadFilterNode(const BaseAudioContext& context, const jsbind::Any& options);
    BiquadFilterType type() const;
    void type(const BiquadFilterType& value);
    AudioParam frequency() const;
    AudioParam detune() const;
    AudioParam Q() const;
    AudioParam gain() const;
    jsbind::Undefined getFrequencyResponse(const jsbind::Float32Array& frequencyHz, const jsbind::Float32Array& magResponse, const jsbind::Float32Array& phaseResponse);
};

