#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "AudioWorkletNodeOptions.hpp"

namespace webbind {

class BaseAudioContext;
class AudioParamMap;
class MessagePort;

/// Interface AudioWorkletNode
/// [`AudioWorkletNode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNode)
class AudioWorkletNode : public AudioNode {
    explicit AudioWorkletNode(Handle h) noexcept;
public:
    explicit AudioWorkletNode(const emlite::Val &val) noexcept;
    static AudioWorkletNode take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioWorkletNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioWorkletNode(..)` constructor, creating a new AudioWorkletNode instance
    AudioWorkletNode(const BaseAudioContext& context, const jsbind::String& name);
    /// The `new AudioWorkletNode(..)` constructor, creating a new AudioWorkletNode instance
    AudioWorkletNode(const BaseAudioContext& context, const jsbind::String& name, const AudioWorkletNodeOptions& options);
    /// Getter of the `parameters` attribute.
    /// [`AudioWorkletNode.parameters`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNode/parameters)
    [[nodiscard]] AudioParamMap parameters() const;
    /// Getter of the `port` attribute.
    /// [`AudioWorkletNode.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNode/port)
    [[nodiscard]] MessagePort port() const;
    /// Getter of the `onprocessorerror` attribute.
    /// [`AudioWorkletNode.onprocessorerror`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNode/onprocessorerror)
    [[nodiscard]] jsbind::Any onprocessorerror() const;
    /// Setter of the `onprocessorerror` attribute.
    /// [`AudioWorkletNode.onprocessorerror`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNode/onprocessorerror)
    void onprocessorerror(const jsbind::Any& value);
};

} // namespace webbind