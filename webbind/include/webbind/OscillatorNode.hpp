#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioScheduledSourceNode.hpp"
#include "enums.hpp"

class AudioParam;
class PeriodicWave;


/// The OscillatorNode class.
/// [`OscillatorNode`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode)
class OscillatorNode : public AudioScheduledSourceNode {
    explicit OscillatorNode(Handle h) noexcept;

public:
    explicit OscillatorNode(const emlite::Val &val) noexcept;
    static OscillatorNode take_ownership(Handle h) noexcept;

    [[nodiscard]] OscillatorNode clone() const noexcept;
    /// The `new OscillatorNode(..)` constructor, creating a new OscillatorNode instance
    OscillatorNode(const BaseAudioContext& context);
    /// The `new OscillatorNode(..)` constructor, creating a new OscillatorNode instance
    OscillatorNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `type` attribute.
    /// [`OscillatorNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/type)
    [[nodiscard]] OscillatorType type() const;
    /// Setter of the `type` attribute.
    /// [`OscillatorNode.type`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/type)
    void type(const OscillatorType& value);
    /// Getter of the `frequency` attribute.
    /// [`OscillatorNode.frequency`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/frequency)
    [[nodiscard]] AudioParam frequency() const;
    /// Getter of the `detune` attribute.
    /// [`OscillatorNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/detune)
    [[nodiscard]] AudioParam detune() const;
    /// The setPeriodicWave method.
    /// [`OscillatorNode.setPeriodicWave`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorNode/setPeriodicWave)
    jsbind::Undefined setPeriodicWave(const PeriodicWave& periodicWave);
};

