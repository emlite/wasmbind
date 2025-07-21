#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AudioDecoderConfig;
class EncodedAudioChunk;
class AudioDecoderSupport;


class AudioDecoderConfig : public emlite::Val {
  explicit AudioDecoderConfig(Handle h) noexcept;
public:
    static AudioDecoderConfig take_ownership(Handle h) noexcept;
    explicit AudioDecoderConfig(const emlite::Val &val) noexcept;
    AudioDecoderConfig() noexcept;
    AudioDecoderConfig clone() const noexcept;
    jsbind::DOMString codec() const;
    void codec(const jsbind::DOMString& value);
    unsigned long sampleRate() const;
    void sampleRate(unsigned long value);
    unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    jsbind::Any description() const;
    void description(const jsbind::Any& value);
};

class AudioDecoderSupport : public emlite::Val {
  explicit AudioDecoderSupport(Handle h) noexcept;
public:
    static AudioDecoderSupport take_ownership(Handle h) noexcept;
    explicit AudioDecoderSupport(const emlite::Val &val) noexcept;
    AudioDecoderSupport() noexcept;
    AudioDecoderSupport clone() const noexcept;
    bool supported() const;
    void supported(bool value);
    AudioDecoderConfig config() const;
    void config(const AudioDecoderConfig& value);
};

class AudioDecoder : public EventTarget {
    explicit AudioDecoder(Handle h) noexcept;

public:
    explicit AudioDecoder(const emlite::Val &val) noexcept;
    static AudioDecoder take_ownership(Handle h) noexcept;

    AudioDecoder clone() const noexcept;
    AudioDecoder(const jsbind::Any& init);
    CodecState state() const;
    unsigned long decodeQueueSize() const;
    jsbind::Any ondequeue() const;
    void ondequeue(const jsbind::Any& value);
    jsbind::Undefined configure(const AudioDecoderConfig& config);
    jsbind::Undefined decode(const EncodedAudioChunk& chunk);
    jsbind::Promise<jsbind::Undefined> flush();
    jsbind::Undefined reset();
    jsbind::Undefined close();
    static jsbind::Promise<AudioDecoderSupport> isConfigSupported(const AudioDecoderConfig& config);
};

