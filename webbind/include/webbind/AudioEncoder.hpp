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
    [[nodiscard]] AudioEncoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] unsigned long sampleRate() const;
    void sampleRate(unsigned long value);
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] long long bitrate() const;
    void bitrate(long long value);
    [[nodiscard]] BitrateMode bitrateMode() const;
    void bitrateMode(const BitrateMode& value);
};

class AudioEncoderSupport : public emlite::Val {
  explicit AudioEncoderSupport(Handle h) noexcept;
public:
    static AudioEncoderSupport take_ownership(Handle h) noexcept;
    explicit AudioEncoderSupport(const emlite::Val &val) noexcept;
    AudioEncoderSupport() noexcept;
    [[nodiscard]] AudioEncoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] AudioEncoderConfig config() const;
    void config(const AudioEncoderConfig& value);
};

/// The AudioEncoder class.
/// [`AudioEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder)
class AudioEncoder : public EventTarget {
    explicit AudioEncoder(Handle h) noexcept;

public:
    explicit AudioEncoder(const emlite::Val &val) noexcept;
    static AudioEncoder take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioEncoder(..)` constructor, creating a new AudioEncoder instance
    AudioEncoder(const jsbind::Any& init);
    /// Getter of the `state` attribute.
    /// [`AudioEncoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/state)
    [[nodiscard]] CodecState state() const;
    /// Getter of the `encodeQueueSize` attribute.
    /// [`AudioEncoder.encodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/encodeQueueSize)
    [[nodiscard]] unsigned long encodeQueueSize() const;
    /// Getter of the `ondequeue` attribute.
    /// [`AudioEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/ondequeue)
    [[nodiscard]] jsbind::Any ondequeue() const;
    /// Setter of the `ondequeue` attribute.
    /// [`AudioEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/ondequeue)
    void ondequeue(const jsbind::Any& value);
    /// The configure method.
    /// [`AudioEncoder.configure`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/configure)
    jsbind::Undefined configure(const AudioEncoderConfig& config);
    /// The encode method.
    /// [`AudioEncoder.encode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/encode)
    jsbind::Undefined encode(const AudioData& data);
    /// The flush method.
    /// [`AudioEncoder.flush`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/flush)
    jsbind::Promise<jsbind::Undefined> flush();
    /// The reset method.
    /// [`AudioEncoder.reset`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/reset)
    jsbind::Undefined reset();
    /// The close method.
    /// [`AudioEncoder.close`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/close)
    jsbind::Undefined close();
    /// The isConfigSupported method.
    /// [`AudioEncoder.isConfigSupported`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/isConfigSupported)
    static jsbind::Promise<AudioEncoderSupport> isConfigSupported(const AudioEncoderConfig& config);
};

