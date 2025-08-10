#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class AudioParam;
class BaseAudioContext;

/// Interface AudioNode
/// [`AudioNode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode)
class AudioNode : public EventTarget {
    explicit AudioNode(Handle h) noexcept;
public:
    explicit AudioNode(const emlite::Val &val) noexcept;
    static AudioNode take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The connect method.
    /// [`AudioNode.connect`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/connect)
    jsbind::Undefined connect(const AudioParam& destinationParam);
    /// The connect method.
    /// [`AudioNode.connect`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/connect)
    jsbind::Undefined connect(const AudioParam& destinationParam, unsigned long output);
    /// The disconnect method.
    /// [`AudioNode.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/disconnect)
    jsbind::Undefined disconnect(const AudioParam& destinationParam, unsigned long output);
    /// [`AudioNode.context`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/context)
    /// [`AudioNode.context`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/context)
    [[nodiscard]] BaseAudioContext context() const;
    /// [`AudioNode.numberOfInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/numberOfInputs)
    /// [`AudioNode.numberOfInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/numberOfInputs)
    [[nodiscard]] unsigned long numberOfInputs() const;
    /// [`AudioNode.numberOfOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/numberOfOutputs)
    /// [`AudioNode.numberOfOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/numberOfOutputs)
    [[nodiscard]] unsigned long numberOfOutputs() const;
    /// [`AudioNode.channelCount`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCount)
    /// [`AudioNode.channelCount`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCount)
    [[nodiscard]] unsigned long channelCount() const;
    /// Setter of the `channelCount` attribute.
    /// [`AudioNode.channelCount`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCount)
    void channelCount(unsigned long value);
    /// [`AudioNode.channelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCountMode)
    /// [`AudioNode.channelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCountMode)
    [[nodiscard]] ChannelCountMode channelCountMode() const;
    /// Setter of the `channelCountMode` attribute.
    /// [`AudioNode.channelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelCountMode)
    void channelCountMode(const ChannelCountMode& value);
    /// [`AudioNode.channelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelInterpretation)
    /// [`AudioNode.channelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelInterpretation)
    [[nodiscard]] ChannelInterpretation channelInterpretation() const;
    /// Setter of the `channelInterpretation` attribute.
    /// [`AudioNode.channelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode/channelInterpretation)
    void channelInterpretation(const ChannelInterpretation& value);
};

} // namespace webbind