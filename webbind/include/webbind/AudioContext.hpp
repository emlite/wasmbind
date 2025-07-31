#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "BaseAudioContext.hpp"
#include "enums.hpp"

class AudioTimestamp;
class MediaElementAudioSourceNode;
class HTMLMediaElement;
class MediaStreamAudioSourceNode;
class MediaStream;
class MediaStreamTrackAudioSourceNode;
class MediaStreamTrack;
class MediaStreamAudioDestinationNode;


class AudioTimestamp : public emlite::Val {
  explicit AudioTimestamp(Handle h) noexcept;
public:
    static AudioTimestamp take_ownership(Handle h) noexcept;
    explicit AudioTimestamp(const emlite::Val &val) noexcept;
    AudioTimestamp() noexcept;
    [[nodiscard]] AudioTimestamp clone() const noexcept;
    [[nodiscard]] double contextTime() const;
    void contextTime(double value);
    [[nodiscard]] jsbind::Any performanceTime() const;
    void performanceTime(const jsbind::Any& value);
};

/// The AudioContext class.
/// [`AudioContext`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext)
class AudioContext : public BaseAudioContext {
    explicit AudioContext(Handle h) noexcept;

public:
    explicit AudioContext(const emlite::Val &val) noexcept;
    static AudioContext take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioContext clone() const noexcept;
    /// The `new AudioContext(..)` constructor, creating a new AudioContext instance
    AudioContext();
    /// The `new AudioContext(..)` constructor, creating a new AudioContext instance
    AudioContext(const jsbind::Any& contextOptions);
    /// Getter of the `baseLatency` attribute.
    /// [`AudioContext.baseLatency`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/baseLatency)
    [[nodiscard]] double baseLatency() const;
    /// Getter of the `outputLatency` attribute.
    /// [`AudioContext.outputLatency`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/outputLatency)
    [[nodiscard]] double outputLatency() const;
    /// Getter of the `sinkId` attribute.
    /// [`AudioContext.sinkId`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/sinkId)
    [[nodiscard]] jsbind::Any sinkId() const;
    /// Getter of the `onsinkchange` attribute.
    /// [`AudioContext.onsinkchange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/onsinkchange)
    [[nodiscard]] jsbind::Any onsinkchange() const;
    /// Setter of the `onsinkchange` attribute.
    /// [`AudioContext.onsinkchange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/onsinkchange)
    void onsinkchange(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`AudioContext.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`AudioContext.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/onerror)
    void onerror(const jsbind::Any& value);
    /// The getOutputTimestamp method.
    /// [`AudioContext.getOutputTimestamp`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/getOutputTimestamp)
    AudioTimestamp getOutputTimestamp();
    /// The resume method.
    /// [`AudioContext.resume`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/resume)
    jsbind::Promise<jsbind::Undefined> resume();
    /// The suspend method.
    /// [`AudioContext.suspend`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/suspend)
    jsbind::Promise<jsbind::Undefined> suspend();
    /// The close method.
    /// [`AudioContext.close`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The setSinkId method.
    /// [`AudioContext.setSinkId`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/setSinkId)
    jsbind::Promise<jsbind::Undefined> setSinkId(const jsbind::Any& sinkId);
    /// The createMediaElementSource method.
    /// [`AudioContext.createMediaElementSource`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/createMediaElementSource)
    MediaElementAudioSourceNode createMediaElementSource(const HTMLMediaElement& mediaElement);
    /// The createMediaStreamSource method.
    /// [`AudioContext.createMediaStreamSource`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/createMediaStreamSource)
    MediaStreamAudioSourceNode createMediaStreamSource(const MediaStream& mediaStream);
    /// The createMediaStreamTrackSource method.
    /// [`AudioContext.createMediaStreamTrackSource`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/createMediaStreamTrackSource)
    MediaStreamTrackAudioSourceNode createMediaStreamTrackSource(const MediaStreamTrack& mediaStreamTrack);
    /// The createMediaStreamDestination method.
    /// [`AudioContext.createMediaStreamDestination`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContext/createMediaStreamDestination)
    MediaStreamAudioDestinationNode createMediaStreamDestination();
};

