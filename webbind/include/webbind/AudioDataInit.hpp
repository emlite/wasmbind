#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDataInit
class AudioDataInit : public emlite::Val {
  explicit AudioDataInit(Handle h) noexcept;
public:
    static AudioDataInit take_ownership(Handle h) noexcept;
    explicit AudioDataInit(const emlite::Val &val) noexcept;
    AudioDataInit() noexcept;
    [[nodiscard]] AudioDataInit clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] AudioSampleFormat format() const;
    /// Setter of the `format` attribute.
    void format(const AudioSampleFormat& value);
    /// Getter of the `sampleRate` attribute.
    [[nodiscard]] float sampleRate() const;
    /// Setter of the `sampleRate` attribute.
    void sampleRate(float value);
    /// Getter of the `numberOfFrames` attribute.
    [[nodiscard]] unsigned long numberOfFrames() const;
    /// Setter of the `numberOfFrames` attribute.
    void numberOfFrames(unsigned long value);
    /// Getter of the `numberOfChannels` attribute.
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// Setter of the `numberOfChannels` attribute.
    void numberOfChannels(unsigned long value);
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] long long timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(long long value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `transfer` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    /// Setter of the `transfer` attribute.
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
};

} // namespace webbind