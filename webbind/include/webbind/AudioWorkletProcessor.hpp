#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MessagePort;

/// Interface AudioWorkletProcessor
/// [`AudioWorkletProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletProcessor)
class AudioWorkletProcessor : public emlite::Val {
    explicit AudioWorkletProcessor(Handle h) noexcept;
public:
    explicit AudioWorkletProcessor(const emlite::Val &val) noexcept;
    static AudioWorkletProcessor take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioWorkletProcessor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioWorkletProcessor(..)` constructor, creating a new AudioWorkletProcessor instance
    AudioWorkletProcessor();
    /// [`AudioWorkletProcessor.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletProcessor/port)
    /// [`AudioWorkletProcessor.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletProcessor/port)
    [[nodiscard]] MessagePort port() const;
};

} // namespace webbind