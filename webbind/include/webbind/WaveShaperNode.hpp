#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class WaveShaperNode : public AudioNode {
    explicit WaveShaperNode(Handle h) noexcept;

public:
    explicit WaveShaperNode(const emlite::Val &val) noexcept;
    static WaveShaperNode take_ownership(Handle h) noexcept;

    WaveShaperNode clone() const noexcept;
    WaveShaperNode(const BaseAudioContext& context);
    WaveShaperNode(const BaseAudioContext& context, const jsbind::Any& options);
    jsbind::Float32Array curve() const;
    void curve(const jsbind::Float32Array& value);
    OverSampleType oversample() const;
    void oversample(const OverSampleType& value);
};

