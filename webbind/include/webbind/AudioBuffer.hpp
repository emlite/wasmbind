#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class AudioBuffer : public emlite::Val {
    explicit AudioBuffer(Handle h) noexcept;

public:
    explicit AudioBuffer(const emlite::Val &val) noexcept;
    static AudioBuffer take_ownership(Handle h) noexcept;

    AudioBuffer clone() const noexcept;
    AudioBuffer(const jsbind::Any& options);
    float sampleRate() const;
    unsigned long length() const;
    double duration() const;
    unsigned long numberOfChannels() const;
    jsbind::Float32Array getChannelData(unsigned long channel);
    jsbind::Undefined copyFromChannel(const jsbind::Float32Array& destination, unsigned long channelNumber, unsigned long bufferOffset);
    jsbind::Undefined copyToChannel(const jsbind::Float32Array& source, unsigned long channelNumber, unsigned long bufferOffset);
};

