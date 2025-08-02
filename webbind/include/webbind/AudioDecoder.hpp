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
    [[nodiscard]] AudioDecoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] unsigned long sampleRate() const;
    void sampleRate(unsigned long value);
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] jsbind::Any description() const;
    void description(const jsbind::Any& value);
};

class AudioDecoderSupport : public emlite::Val {
  explicit AudioDecoderSupport(Handle h) noexcept;
public:
    static AudioDecoderSupport take_ownership(Handle h) noexcept;
    explicit AudioDecoderSupport(const emlite::Val &val) noexcept;
    AudioDecoderSupport() noexcept;
    [[nodiscard]] AudioDecoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] AudioDecoderConfig config() const;
    void config(const AudioDecoderConfig& value);
};

/// The AudioDecoder class.
/// [`AudioDecoder`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder)
class AudioDecoder : public EventTarget {
    explicit AudioDecoder(Handle h) noexcept;

public:
    explicit AudioDecoder(const emlite::Val &val) noexcept;
    static AudioDecoder take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioDecoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioDecoder(..)` constructor, creating a new AudioDecoder instance
    AudioDecoder(const jsbind::Any& init);
    /// Getter of the `state` attribute.
    /// [`AudioDecoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/state)
    [[nodiscard]] CodecState state() const;
    /// Getter of the `decodeQueueSize` attribute.
    /// [`AudioDecoder.decodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/decodeQueueSize)
    [[nodiscard]] unsigned long decodeQueueSize() const;
    /// Getter of the `ondequeue` attribute.
    /// [`AudioDecoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/ondequeue)
    [[nodiscard]] jsbind::Any ondequeue() const;
    /// Setter of the `ondequeue` attribute.
    /// [`AudioDecoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/ondequeue)
    void ondequeue(const jsbind::Any& value);
    /// The configure method.
    /// [`AudioDecoder.configure`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/configure)
    jsbind::Undefined configure(const AudioDecoderConfig& config);
    /// The decode method.
    /// [`AudioDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/decode)
    jsbind::Undefined decode(const EncodedAudioChunk& chunk);
    /// The flush method.
    /// [`AudioDecoder.flush`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/flush)
    jsbind::Promise<jsbind::Undefined> flush();
    /// The reset method.
    /// [`AudioDecoder.reset`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/reset)
    jsbind::Undefined reset();
    /// The close method.
    /// [`AudioDecoder.close`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/close)
    jsbind::Undefined close();
    /// The isConfigSupported method.
    /// [`AudioDecoder.isConfigSupported`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDecoder/isConfigSupported)
    static jsbind::Promise<AudioDecoderSupport> isConfigSupported(const AudioDecoderConfig& config);
};

