#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The AudioScheduledSourceNode class.
/// [`AudioScheduledSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode)
class AudioScheduledSourceNode : public AudioNode {
    explicit AudioScheduledSourceNode(Handle h) noexcept;

public:
    explicit AudioScheduledSourceNode(const emlite::Val &val) noexcept;
    static AudioScheduledSourceNode take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioScheduledSourceNode clone() const noexcept;
    /// Getter of the `onended` attribute.
    /// [`AudioScheduledSourceNode.onended`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode/onended)
    [[nodiscard]] jsbind::Any onended() const;
    /// Setter of the `onended` attribute.
    /// [`AudioScheduledSourceNode.onended`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode/onended)
    void onended(const jsbind::Any& value);
    /// The start method.
    /// [`AudioScheduledSourceNode.start`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode/start)
    jsbind::Undefined start();
    /// The start method.
    /// [`AudioScheduledSourceNode.start`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode/start)
    jsbind::Undefined start(double when);
    /// The stop method.
    /// [`AudioScheduledSourceNode.stop`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode/stop)
    jsbind::Undefined stop();
    /// The stop method.
    /// [`AudioScheduledSourceNode.stop`](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode/stop)
    jsbind::Undefined stop(double when);
};

