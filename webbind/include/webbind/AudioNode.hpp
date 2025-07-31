#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AudioParam;
class BaseAudioContext;
class AudioContext;


/// The AudioNode class.
/// [`AudioNode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode)
class AudioNode : public EventTarget {
    explicit AudioNode(Handle h) noexcept;

public:
    explicit AudioNode(const emlite::Val &val) noexcept;
    static AudioNode take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioNode clone() const noexcept;
    /// The connect method.
    /// [`AudioNode.connect`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/connect)
    jsbind::Undefined connect(const AudioParam& destinationParam);
    /// The connect method.
    /// [`AudioNode.connect`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/connect)
    jsbind::Undefined connect(const AudioParam& destinationParam, unsigned long output);
    /// The disconnect method.
    /// [`AudioNode.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/disconnect)
    jsbind::Undefined disconnect(const AudioParam& destinationParam, unsigned long output);
    /// Getter of the `context` attribute.
    /// [`AudioNode.context`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/context)
    [[nodiscard]] BaseAudioContext context() const;
    /// Getter of the `numberOfInputs` attribute.
    /// [`AudioNode.numberOfInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/numberOfInputs)
    [[nodiscard]] unsigned long numberOfInputs() const;
    /// Getter of the `numberOfOutputs` attribute.
    /// [`AudioNode.numberOfOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/numberOfOutputs)
    [[nodiscard]] unsigned long numberOfOutputs() const;
    /// Getter of the `channelCount` attribute.
    /// [`AudioNode.channelCount`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCount)
    [[nodiscard]] unsigned long channelCount() const;
    /// Setter of the `channelCount` attribute.
    /// [`AudioNode.channelCount`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCount)
    void channelCount(unsigned long value);
    /// Getter of the `channelCountMode` attribute.
    /// [`AudioNode.channelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCountMode)
    [[nodiscard]] ChannelCountMode channelCountMode() const;
    /// Setter of the `channelCountMode` attribute.
    /// [`AudioNode.channelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCountMode)
    void channelCountMode(const ChannelCountMode& value);
    /// Getter of the `channelInterpretation` attribute.
    /// [`AudioNode.channelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelInterpretation)
    [[nodiscard]] ChannelInterpretation channelInterpretation() const;
    /// Setter of the `channelInterpretation` attribute.
    /// [`AudioNode.channelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelInterpretation)
    void channelInterpretation(const ChannelInterpretation& value);
};

