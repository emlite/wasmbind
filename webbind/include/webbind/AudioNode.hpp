#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AudioParam;
class BaseAudioContext;
class AudioContext;


class AudioNode : public EventTarget {
    explicit AudioNode(Handle h) noexcept;

public:
    explicit AudioNode(const emlite::Val &val) noexcept;
    static AudioNode take_ownership(Handle h) noexcept;

    AudioNode clone() const noexcept;
    jsbind::Undefined connect(const AudioParam& destinationParam, unsigned long output);
    jsbind::Undefined disconnect(const AudioParam& destinationParam, unsigned long output);
    BaseAudioContext context() const;
    unsigned long numberOfInputs() const;
    unsigned long numberOfOutputs() const;
    unsigned long channelCount() const;
    void channelCount(unsigned long value);
    ChannelCountMode channelCountMode() const;
    void channelCountMode(const ChannelCountMode& value);
    ChannelInterpretation channelInterpretation() const;
    void channelInterpretation(const ChannelInterpretation& value);
};

