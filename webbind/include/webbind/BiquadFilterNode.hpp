#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "BiquadFilterOptions.hpp"
#include "enums.hpp"

namespace webbind {

class BaseAudioContext;
class AudioParam;

/// Interface BiquadFilterNode
/// [`BiquadFilterNode`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode)
class BiquadFilterNode : public AudioNode {
    explicit BiquadFilterNode(Handle h) noexcept;
public:
    explicit BiquadFilterNode(const emlite::Val &val) noexcept;
    static BiquadFilterNode take_ownership(Handle h) noexcept;
    [[nodiscard]] BiquadFilterNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BiquadFilterNode(..)` constructor, creating a new BiquadFilterNode instance
    BiquadFilterNode(const BaseAudioContext& context);
    /// The `new BiquadFilterNode(..)` constructor, creating a new BiquadFilterNode instance
    BiquadFilterNode(const BaseAudioContext& context, const BiquadFilterOptions& options);
    /// [`BiquadFilterNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/type)
    /// [`BiquadFilterNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/type)
    [[nodiscard]] BiquadFilterType type() const;
    /// Setter of the `type` attribute.
    /// [`BiquadFilterNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/type)
    void type(const BiquadFilterType& value);
    /// [`BiquadFilterNode.frequency`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/frequency)
    /// [`BiquadFilterNode.frequency`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/frequency)
    [[nodiscard]] AudioParam frequency() const;
    /// [`BiquadFilterNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/detune)
    /// [`BiquadFilterNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/detune)
    [[nodiscard]] AudioParam detune() const;
    /// [`BiquadFilterNode.Q`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/Q)
    /// [`BiquadFilterNode.Q`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/Q)
    [[nodiscard]] AudioParam Q() const;
    /// [`BiquadFilterNode.gain`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/gain)
    /// [`BiquadFilterNode.gain`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/gain)
    [[nodiscard]] AudioParam gain() const;
    /// The getFrequencyResponse method.
    /// [`BiquadFilterNode.getFrequencyResponse`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode/getFrequencyResponse)
    jsbind::Undefined getFrequencyResponse(const jsbind::Float32Array& frequencyHz, const jsbind::Float32Array& magResponse, const jsbind::Float32Array& phaseResponse);
};

} // namespace webbind