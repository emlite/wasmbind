#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"

class MessagePort;


/// The AudioWorkletGlobalScope class.
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
    /// Getter of the `currentFrame` attribute.
    /// [`AudioWorkletGlobalScope.currentFrame`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/currentFrame)
    [[nodiscard]] long long currentFrame() const;
    /// Getter of the `currentTime` attribute.
    /// [`AudioWorkletGlobalScope.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/currentTime)
    [[nodiscard]] double currentTime() const;
    /// Getter of the `sampleRate` attribute.
    /// [`AudioWorkletGlobalScope.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/sampleRate)
    [[nodiscard]] float sampleRate() const;
    /// Getter of the `renderQuantumSize` attribute.
    /// [`AudioWorkletGlobalScope.renderQuantumSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/renderQuantumSize)
    [[nodiscard]] unsigned long renderQuantumSize() const;
    /// Getter of the `port` attribute.
    /// [`AudioWorkletGlobalScope.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletGlobalScope/port)
    [[nodiscard]] jsbind::Any port() const;
};

