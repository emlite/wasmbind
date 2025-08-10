#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDataInit
/// [`AudioDataInit`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDataInit)
class AudioDataInit : public emlite::Val {
  explicit AudioDataInit(Handle h) noexcept;
public:
    static AudioDataInit take_ownership(Handle h) noexcept;
    explicit AudioDataInit(const emlite::Val &val) noexcept;
    AudioDataInit() noexcept;
    [[nodiscard]] AudioDataInit clone() const noexcept;
    [[nodiscard]] AudioSampleFormat format() const;
    void format(const AudioSampleFormat& value);
    [[nodiscard]] float sampleRate() const;
    void sampleRate(float value);
    [[nodiscard]] unsigned long numberOfFrames() const;
    void numberOfFrames(unsigned long value);
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] long long timestamp() const;
    void timestamp(long long value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
};

} // namespace webbind