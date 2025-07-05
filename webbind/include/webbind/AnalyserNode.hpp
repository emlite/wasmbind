#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class AnalyserNode : public AudioNode {
    explicit AnalyserNode(Handle h) noexcept;

public:
    explicit AnalyserNode(const emlite::Val &val) noexcept;
    static AnalyserNode take_ownership(Handle h) noexcept;

    AnalyserNode clone() const noexcept;
    AnalyserNode(const BaseAudioContext& context);
    AnalyserNode(const BaseAudioContext& context, const jsbind::Any& options);
    jsbind::Undefined getFloatFrequencyData(const jsbind::Float32Array& array);
    jsbind::Undefined getByteFrequencyData(const jsbind::Uint8Array& array);
    jsbind::Undefined getFloatTimeDomainData(const jsbind::Float32Array& array);
    jsbind::Undefined getByteTimeDomainData(const jsbind::Uint8Array& array);
    unsigned long fftSize() const;
    void fftSize(unsigned long value);
    unsigned long frequencyBinCount() const;
    double minDecibels() const;
    void minDecibels(double value);
    double maxDecibels() const;
    void maxDecibels(double value);
    double smoothingTimeConstant() const;
    void smoothingTimeConstant(double value);
};

