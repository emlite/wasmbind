#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioScheduledSourceNode.hpp"
#include "enums.hpp"

class AudioParam;
class PeriodicWave;


class OscillatorNode : public AudioScheduledSourceNode {
    explicit OscillatorNode(Handle h) noexcept;

public:
    explicit OscillatorNode(const emlite::Val &val) noexcept;
    static OscillatorNode take_ownership(Handle h) noexcept;

    OscillatorNode clone() const noexcept;
    OscillatorNode(const BaseAudioContext& context, const jsbind::Any& options);
    OscillatorType type() const;
    void type(const OscillatorType& value);
    AudioParam frequency() const;
    AudioParam detune() const;
    jsbind::Undefined setPeriodicWave(const PeriodicWave& periodicWave);
};

