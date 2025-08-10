#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class AudioEncoderInit;
class AudioEncoderConfig;
class AudioData;
class AudioEncoderSupport;

/// Interface AudioEncoder
/// [`AudioEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder)
class AudioEncoder : public EventTarget {
    explicit AudioEncoder(Handle h) noexcept;
public:
    explicit AudioEncoder(const emlite::Val &val) noexcept;
    static AudioEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AudioEncoder(..)` constructor, creating a new AudioEncoder instance
    AudioEncoder(const AudioEncoderInit& init);
    /// [`AudioEncoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/state)
    /// [`AudioEncoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/state)
    [[nodiscard]] CodecState state() const;
    /// [`AudioEncoder.encodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/encodeQueueSize)
    /// [`AudioEncoder.encodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/encodeQueueSize)
    [[nodiscard]] unsigned long encodeQueueSize() const;
    /// [`AudioEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/ondequeue)
    /// [`AudioEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/ondequeue)
    [[nodiscard]] jsbind::Any ondequeue() const;
    /// Setter of the `ondequeue` attribute.
    /// [`AudioEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/ondequeue)
    void ondequeue(const jsbind::Any& value);
    /// The configure method.
    /// [`AudioEncoder.configure`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/configure)
    jsbind::Undefined configure(const AudioEncoderConfig& config);
    /// The encode method.
    /// [`AudioEncoder.encode`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/encode)
    jsbind::Undefined encode(const AudioData& data);
    /// The flush method.
    /// [`AudioEncoder.flush`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/flush)
    jsbind::Promise<jsbind::Undefined> flush();
    /// The reset method.
    /// [`AudioEncoder.reset`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/reset)
    jsbind::Undefined reset();
    /// The close method.
    /// [`AudioEncoder.close`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/close)
    jsbind::Undefined close();
    /// The isConfigSupported method.
    /// [`AudioEncoder.isConfigSupported`](https://developer.mozilla.org/en-US/docs/Web/API/AudioEncoder/isConfigSupported)
    static jsbind::Promise<AudioEncoderSupport> isConfigSupported(const AudioEncoderConfig& config);
};

} // namespace webbind