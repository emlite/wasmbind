#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class IIRFilterNode : public AudioNode {
    explicit IIRFilterNode(Handle h) noexcept;

public:
    explicit IIRFilterNode(const emlite::Val &val) noexcept;
    static IIRFilterNode take_ownership(Handle h) noexcept;

    IIRFilterNode clone() const noexcept;
    IIRFilterNode(const BaseAudioContext& context, const jsbind::Any& options);
    jsbind::Undefined getFrequencyResponse(const jsbind::Float32Array& frequencyHz, const jsbind::Float32Array& magResponse, const jsbind::Float32Array& phaseResponse);
};

