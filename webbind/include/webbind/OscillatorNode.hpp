#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioScheduledSourceNode.hpp"
#include "enums.hpp"

namespace webbind {

class BaseAudioContext;
class OscillatorOptions;
class AudioParam;
class PeriodicWave;

/// Interface OscillatorNode
/// [`OscillatorNode`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode)
class OscillatorNode : public AudioScheduledSourceNode {
    explicit OscillatorNode(Handle h) noexcept;
public:
    explicit OscillatorNode(const emlite::Val &val) noexcept;
    static OscillatorNode take_ownership(Handle h) noexcept;
    [[nodiscard]] OscillatorNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new OscillatorNode(..)` constructor, creating a new OscillatorNode instance
    OscillatorNode(const BaseAudioContext& context);
    /// The `new OscillatorNode(..)` constructor, creating a new OscillatorNode instance
    OscillatorNode(const BaseAudioContext& context, const OscillatorOptions& options);
    /// [`OscillatorNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/type)
    /// [`OscillatorNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/type)
    [[nodiscard]] OscillatorType type() const;
    /// Setter of the `type` attribute.
    /// [`OscillatorNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/type)
    void type(const OscillatorType& value);
    /// [`OscillatorNode.frequency`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/frequency)
    /// [`OscillatorNode.frequency`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/frequency)
    [[nodiscard]] AudioParam frequency() const;
    /// [`OscillatorNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/detune)
    /// [`OscillatorNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/detune)
    [[nodiscard]] AudioParam detune() const;
    /// The setPeriodicWave method.
    /// [`OscillatorNode.setPeriodicWave`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/setPeriodicWave)
    jsbind::Undefined setPeriodicWave(const PeriodicWave& periodicWave);
};

} // namespace webbind