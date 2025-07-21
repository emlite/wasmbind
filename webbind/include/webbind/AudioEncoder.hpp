#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AudioEncoderConfig;
class AudioData;
class AudioEncoderSupport;


class AudioEncoderConfig : public emlite::Val {
  explicit AudioEncoderConfig(Handle h) noexcept;
public:
    static AudioEncoderConfig take_ownership(Handle h) noexcept;
    explicit AudioEncoderConfig(const emlite::Val &val) noexcept;
    AudioEncoderConfig() noexcept;
    AudioEncoderConfig clone() const noexcept;
    jsbind::DOMString codec() const;
    void codec(const jsbind::DOMString& value);
    unsigned long sampleRate() const;
    void sampleRate(unsigned long value);
    unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    long long bitrate() const;
    void bitrate(long long value);
    BitrateMode bitrateMode() const;
    void bitrateMode(const BitrateMode& value);
};

class AudioEncoderSupport : public emlite::Val {
  explicit AudioEncoderSupport(Handle h) noexcept;
public:
    static AudioEncoderSupport take_ownership(Handle h) noexcept;
    explicit AudioEncoderSupport(const emlite::Val &val) noexcept;
    AudioEncoderSupport() noexcept;
    AudioEncoderSupport clone() const noexcept;
    bool supported() const;
    void supported(bool value);
    AudioEncoderConfig config() const;
    void config(const AudioEncoderConfig& value);
};

class AudioEncoder : public EventTarget {
    explicit AudioEncoder(Handle h) noexcept;

public:
    explicit AudioEncoder(const emlite::Val &val) noexcept;
    static AudioEncoder take_ownership(Handle h) noexcept;

    AudioEncoder clone() const noexcept;
    AudioEncoder(const jsbind::Any& init);
    CodecState state() const;
    unsigned long encodeQueueSize() const;
    jsbind::Any ondequeue() const;
    void ondequeue(const jsbind::Any& value);
    jsbind::Undefined configure(const AudioEncoderConfig& config);
    jsbind::Undefined encode(const AudioData& data);
    jsbind::Promise<jsbind::Undefined> flush();
    jsbind::Undefined reset();
    jsbind::Undefined close();
    static jsbind::Promise<AudioEncoderSupport> isConfigSupported(const AudioEncoderConfig& config);
};

