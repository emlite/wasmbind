#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Worklet.hpp"
#include "enums.hpp"

class MessagePort;


/// The AudioWorklet class.
/// [`AudioWorklet`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorklet)
class AudioWorklet : public Worklet {
    explicit AudioWorklet(Handle h) noexcept;

public:
    explicit AudioWorklet(const emlite::Val &val) noexcept;
    static AudioWorklet take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioWorklet clone() const noexcept;
    /// Getter of the `port` attribute.
    /// [`AudioWorklet.port`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorklet/port)
    [[nodiscard]] jsbind::Any port() const;
};

