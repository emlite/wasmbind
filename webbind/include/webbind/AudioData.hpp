#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AudioDataCopyToOptions;
class AudioData;


class AudioDataCopyToOptions : public emlite::Val {
  explicit AudioDataCopyToOptions(Handle h) noexcept;
public:
    static AudioDataCopyToOptions take_ownership(Handle h) noexcept;
    explicit AudioDataCopyToOptions(const emlite::Val &val) noexcept;
    AudioDataCopyToOptions() noexcept;
    AudioDataCopyToOptions clone() const noexcept;
    unsigned long planeIndex() const;
    void planeIndex(unsigned long value);
    unsigned long frameOffset() const;
    void frameOffset(unsigned long value);
    unsigned long frameCount() const;
    void frameCount(unsigned long value);
    AudioSampleFormat format() const;
    void format(const AudioSampleFormat& value);
};

class AudioData : public emlite::Val {
    explicit AudioData(Handle h) noexcept;

public:
    explicit AudioData(const emlite::Val &val) noexcept;
    static AudioData take_ownership(Handle h) noexcept;

    AudioData clone() const noexcept;
    AudioData(const jsbind::Any& init);
    AudioSampleFormat format() const;
    float sampleRate() const;
    unsigned long numberOfFrames() const;
    unsigned long numberOfChannels() const;
    long long duration() const;
    long long timestamp() const;
    unsigned long allocationSize(const AudioDataCopyToOptions& options);
    jsbind::Undefined copyTo(const jsbind::Any& destination, const AudioDataCopyToOptions& options);
    AudioData clone();
    jsbind::Undefined close();
};

