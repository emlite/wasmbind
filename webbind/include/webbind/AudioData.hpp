#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioDataInit.hpp"
#include "AudioDataCopyToOptions.hpp"
#include "enums.hpp"

namespace webbind {

class AudioData;

/// Interface AudioData
/// [`AudioData`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData)
class AudioData : public emlite::Val {
    explicit AudioData(Handle h) noexcept;
public:
    explicit AudioData(const emlite::Val &val) noexcept;
    static AudioData take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioData(..)` constructor, creating a new AudioData instance
    AudioData(const AudioDataInit& init);
    /// [`AudioData.format`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/format)
    /// [`AudioData.format`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/format)
    [[nodiscard]] AudioSampleFormat format() const;
    /// [`AudioData.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/sampleRate)
    /// [`AudioData.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/sampleRate)
    [[nodiscard]] float sampleRate() const;
    /// [`AudioData.numberOfFrames`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/numberOfFrames)
    /// [`AudioData.numberOfFrames`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/numberOfFrames)
    [[nodiscard]] unsigned long numberOfFrames() const;
    /// [`AudioData.numberOfChannels`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/numberOfChannels)
    /// [`AudioData.numberOfChannels`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/numberOfChannels)
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// [`AudioData.duration`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/duration)
    /// [`AudioData.duration`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/duration)
    [[nodiscard]] long long duration() const;
    /// [`AudioData.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/AudioData/timestamp)
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

} // namespace webbind