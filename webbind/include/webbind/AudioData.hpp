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
    [[nodiscard]] AudioDataCopyToOptions clone() const noexcept;
    [[nodiscard]] unsigned long planeIndex() const;
    void planeIndex(unsigned long value);
    [[nodiscard]] unsigned long frameOffset() const;
    void frameOffset(unsigned long value);
    [[nodiscard]] unsigned long frameCount() const;
    void frameCount(unsigned long value);
    [[nodiscard]] AudioSampleFormat format() const;
    void format(const AudioSampleFormat& value);
};

/// The AudioData class.
/// [`AudioData`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData)
class AudioData : public emlite::Val {
    explicit AudioData(Handle h) noexcept;

public:
    explicit AudioData(const emlite::Val &val) noexcept;
    static AudioData take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioData(..)` constructor, creating a new AudioData instance
    AudioData(const jsbind::Any& init);
    /// Getter of the `format` attribute.
    /// [`AudioData.format`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/format)
    [[nodiscard]] AudioSampleFormat format() const;
    /// Getter of the `sampleRate` attribute.
    /// [`AudioData.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/sampleRate)
    [[nodiscard]] float sampleRate() const;
    /// Getter of the `numberOfFrames` attribute.
    /// [`AudioData.numberOfFrames`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/numberOfFrames)
    [[nodiscard]] unsigned long numberOfFrames() const;
    /// Getter of the `numberOfChannels` attribute.
    /// [`AudioData.numberOfChannels`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/numberOfChannels)
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// Getter of the `duration` attribute.
    /// [`AudioData.duration`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/duration)
    [[nodiscard]] long long duration() const;
    /// Getter of the `timestamp` attribute.
    /// [`AudioData.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/timestamp)
    [[nodiscard]] long long timestamp() const;
    /// The allocationSize method.
    /// [`AudioData.allocationSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/allocationSize)
    unsigned long allocationSize(const AudioDataCopyToOptions& options);
    /// The copyTo method.
    /// [`AudioData.copyTo`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/copyTo)
    jsbind::Undefined copyTo(const jsbind::Any& destination, const AudioDataCopyToOptions& options);
    /// The clone method.
    /// [`AudioData.clone`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/clone)
    AudioData clone();
    /// The close method.
    /// [`AudioData.close`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/close)
    jsbind::Undefined close();
};

