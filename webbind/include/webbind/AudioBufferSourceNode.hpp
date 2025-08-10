#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioScheduledSourceNode.hpp"
#include "AudioBufferSourceOptions.hpp"

namespace webbind {

class BaseAudioContext;
class AudioBuffer;
class AudioParam;

/// Interface AudioBufferSourceNode
/// [`AudioBufferSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode)
class AudioBufferSourceNode : public AudioScheduledSourceNode {
    explicit AudioBufferSourceNode(Handle h) noexcept;
public:
    explicit AudioBufferSourceNode(const emlite::Val &val) noexcept;
    static AudioBufferSourceNode take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioBufferSourceNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioBufferSourceNode(..)` constructor, creating a new AudioBufferSourceNode instance
    AudioBufferSourceNode(const BaseAudioContext& context);
    /// The `new AudioBufferSourceNode(..)` constructor, creating a new AudioBufferSourceNode instance
    AudioBufferSourceNode(const BaseAudioContext& context, const AudioBufferSourceOptions& options);
    /// [`AudioBufferSourceNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/buffer)
    /// [`AudioBufferSourceNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/buffer)
    [[nodiscard]] AudioBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    /// [`AudioBufferSourceNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/buffer)
    void buffer(const AudioBuffer& value);
    /// [`AudioBufferSourceNode.playbackRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/playbackRate)
    /// [`AudioBufferSourceNode.playbackRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/playbackRate)
    [[nodiscard]] AudioParam playbackRate() const;
    /// [`AudioBufferSourceNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/detune)
    /// [`AudioBufferSourceNode.detune`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/detune)
    [[nodiscard]] AudioParam detune() const;
    /// [`AudioBufferSourceNode.loop`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loop)
    /// [`AudioBufferSourceNode.loop`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loop)
    [[nodiscard]] bool loop() const;
    /// Setter of the `loop` attribute.
    /// [`AudioBufferSourceNode.loop`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loop)
    void loop(bool value);
    /// [`AudioBufferSourceNode.loopStart`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loopStart)
    /// [`AudioBufferSourceNode.loopStart`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loopStart)
    [[nodiscard]] double loopStart() const;
    /// Setter of the `loopStart` attribute.
    /// [`AudioBufferSourceNode.loopStart`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loopStart)
    void loopStart(double value);
    /// [`AudioBufferSourceNode.loopEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loopEnd)
    /// [`AudioBufferSourceNode.loopEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loopEnd)
    [[nodiscard]] double loopEnd() const;
    /// Setter of the `loopEnd` attribute.
    /// [`AudioBufferSourceNode.loopEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/loopEnd)
    void loopEnd(double value);
    /// The start method.
    /// [`AudioBufferSourceNode.start`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/start)
    jsbind::Undefined start();
    /// The start method.
    /// [`AudioBufferSourceNode.start`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/start)
    jsbind::Undefined start(double when);
    /// The start method.
    /// [`AudioBufferSourceNode.start`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/start)
    jsbind::Undefined start(double when, double offset);
    /// The start method.
    /// [`AudioBufferSourceNode.start`](https://developer.mozilla.org/en-US/docs/Web/API/AudioBufferSourceNode/start)
    jsbind::Undefined start(double when, double offset, double duration);
};

} // namespace webbind