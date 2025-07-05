#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioScheduledSourceNode.hpp"
#include "enums.hpp"

class AudioBuffer;
class AudioParam;


class AudioBufferSourceNode : public AudioScheduledSourceNode {
    explicit AudioBufferSourceNode(Handle h) noexcept;

public:
    explicit AudioBufferSourceNode(const emlite::Val &val) noexcept;
    static AudioBufferSourceNode take_ownership(Handle h) noexcept;

    AudioBufferSourceNode clone() const noexcept;
    AudioBufferSourceNode(const BaseAudioContext& context);
    AudioBufferSourceNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioBuffer buffer() const;
    void buffer(const AudioBuffer& value);
    AudioParam playbackRate() const;
    AudioParam detune() const;
    bool loop() const;
    void loop(bool value);
    double loopStart() const;
    void loopStart(double value);
    double loopEnd() const;
    void loopEnd(double value);
    jsbind::Undefined start();
    jsbind::Undefined start(double when);
    jsbind::Undefined start(double when, double offset);
    jsbind::Undefined start(double when, double offset, double duration);
};

