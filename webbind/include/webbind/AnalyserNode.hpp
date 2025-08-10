#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "AnalyserOptions.hpp"

namespace webbind {

class BaseAudioContext;

/// Interface AnalyserNode
/// [`AnalyserNode`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode)
class AnalyserNode : public AudioNode {
    explicit AnalyserNode(Handle h) noexcept;
public:
    explicit AnalyserNode(const emlite::Val &val) noexcept;
    static AnalyserNode take_ownership(Handle h) noexcept;
    [[nodiscard]] AnalyserNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AnalyserNode(..)` constructor, creating a new AnalyserNode instance
    AnalyserNode(const BaseAudioContext& context);
    /// The `new AnalyserNode(..)` constructor, creating a new AnalyserNode instance
    AnalyserNode(const BaseAudioContext& context, const AnalyserOptions& options);
    /// The getFloatFrequencyData method.
    /// [`AnalyserNode.getFloatFrequencyData`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/getFloatFrequencyData)
    jsbind::Undefined getFloatFrequencyData(const jsbind::Float32Array& array);
    /// The getByteFrequencyData method.
    /// [`AnalyserNode.getByteFrequencyData`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/getByteFrequencyData)
    jsbind::Undefined getByteFrequencyData(const jsbind::Uint8Array& array);
    /// The getFloatTimeDomainData method.
    /// [`AnalyserNode.getFloatTimeDomainData`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/getFloatTimeDomainData)
    jsbind::Undefined getFloatTimeDomainData(const jsbind::Float32Array& array);
    /// The getByteTimeDomainData method.
    /// [`AnalyserNode.getByteTimeDomainData`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/getByteTimeDomainData)
    jsbind::Undefined getByteTimeDomainData(const jsbind::Uint8Array& array);
    /// [`AnalyserNode.fftSize`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/fftSize)
    /// [`AnalyserNode.fftSize`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/fftSize)
    [[nodiscard]] unsigned long fftSize() const;
    /// Setter of the `fftSize` attribute.
    /// [`AnalyserNode.fftSize`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/fftSize)
    void fftSize(unsigned long value);
    /// [`AnalyserNode.frequencyBinCount`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/frequencyBinCount)
    /// [`AnalyserNode.frequencyBinCount`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/frequencyBinCount)
    [[nodiscard]] unsigned long frequencyBinCount() const;
    /// [`AnalyserNode.minDecibels`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/minDecibels)
    /// [`AnalyserNode.minDecibels`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/minDecibels)
    [[nodiscard]] double minDecibels() const;
    /// Setter of the `minDecibels` attribute.
    /// [`AnalyserNode.minDecibels`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/minDecibels)
    void minDecibels(double value);
    /// [`AnalyserNode.maxDecibels`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/maxDecibels)
    /// [`AnalyserNode.maxDecibels`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/maxDecibels)
    [[nodiscard]] double maxDecibels() const;
    /// Setter of the `maxDecibels` attribute.
    /// [`AnalyserNode.maxDecibels`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/maxDecibels)
    void maxDecibels(double value);
    /// [`AnalyserNode.smoothingTimeConstant`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/smoothingTimeConstant)
    /// [`AnalyserNode.smoothingTimeConstant`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/smoothingTimeConstant)
    [[nodiscard]] double smoothingTimeConstant() const;
    /// Setter of the `smoothingTimeConstant` attribute.
    /// [`AnalyserNode.smoothingTimeConstant`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserNode/smoothingTimeConstant)
    void smoothingTimeConstant(double value);
};

} // namespace webbind