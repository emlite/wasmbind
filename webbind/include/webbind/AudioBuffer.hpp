#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The AudioBuffer class.
/// [`AudioBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer)
class AudioBuffer : public emlite::Val {
    explicit AudioBuffer(Handle h) noexcept;

public:
    explicit AudioBuffer(const emlite::Val &val) noexcept;
    static AudioBuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioBuffer clone() const noexcept;
    /// The `new AudioBuffer(..)` constructor, creating a new AudioBuffer instance
    AudioBuffer(const jsbind::Any& options);
    /// Getter of the `sampleRate` attribute.
    /// [`AudioBuffer.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/sampleRate)
    [[nodiscard]] float sampleRate() const;
    /// Getter of the `length` attribute.
    /// [`AudioBuffer.length`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `duration` attribute.
    /// [`AudioBuffer.duration`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/duration)
    [[nodiscard]] double duration() const;
    /// Getter of the `numberOfChannels` attribute.
    /// [`AudioBuffer.numberOfChannels`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/numberOfChannels)
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// The getChannelData method.
    /// [`AudioBuffer.getChannelData`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/getChannelData)
    jsbind::Float32Array getChannelData(unsigned long channel);
    /// The copyFromChannel method.
    /// [`AudioBuffer.copyFromChannel`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/copyFromChannel)
    jsbind::Undefined copyFromChannel(const jsbind::Float32Array& destination, unsigned long channelNumber);
    /// The copyFromChannel method.
    /// [`AudioBuffer.copyFromChannel`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/copyFromChannel)
    jsbind::Undefined copyFromChannel(const jsbind::Float32Array& destination, unsigned long channelNumber, unsigned long bufferOffset);
    /// The copyToChannel method.
    /// [`AudioBuffer.copyToChannel`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/copyToChannel)
    jsbind::Undefined copyToChannel(const jsbind::Float32Array& source, unsigned long channelNumber);
    /// The copyToChannel method.
    /// [`AudioBuffer.copyToChannel`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBuffer/copyToChannel)
    jsbind::Undefined copyToChannel(const jsbind::Float32Array& source, unsigned long channelNumber, unsigned long bufferOffset);
};

