#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletGlobalScope.hpp"

namespace webbind {

class MessagePort;

/// Interface AudioWorkletGlobalScope
/// [`AudioWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope)
class AudioWorkletGlobalScope : public WorkletGlobalScope {
    explicit AudioWorkletGlobalScope(Handle h) noexcept;
public:
    explicit AudioWorkletGlobalScope(const emlite::Val &val) noexcept;
    static AudioWorkletGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioWorkletGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The registerProcessor method.
    /// [`AudioWorkletGlobalScope.registerProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/registerProcessor)
    jsbind::Undefined registerProcessor(const jsbind::String& name, const jsbind::Function& processorCtor);
    /// [`AudioWorkletGlobalScope.currentFrame`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/currentFrame)
    /// [`AudioWorkletGlobalScope.currentFrame`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/currentFrame)
    [[nodiscard]] long long currentFrame() const;
    /// [`AudioWorkletGlobalScope.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/currentTime)
    /// [`AudioWorkletGlobalScope.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/currentTime)
    [[nodiscard]] double currentTime() const;
    /// [`AudioWorkletGlobalScope.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/sampleRate)
    /// [`AudioWorkletGlobalScope.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/sampleRate)
    [[nodiscard]] float sampleRate() const;
    /// [`AudioWorkletGlobalScope.renderQuantumSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/renderQuantumSize)
    /// [`AudioWorkletGlobalScope.renderQuantumSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/renderQuantumSize)
    [[nodiscard]] unsigned long renderQuantumSize() const;
    /// [`AudioWorkletGlobalScope.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/port)
    /// [`AudioWorkletGlobalScope.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/port)
    [[nodiscard]] MessagePort port() const;
};

} // namespace webbind