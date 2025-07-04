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
    AudioTimestamp clone() const noexcept;
    double contextTime() const;
    void contextTime(double value);
    jsbind::Any performanceTime() const;
    void performanceTime(const jsbind::Any& value);
};

class AudioContext : public BaseAudioContext {
    explicit AudioContext(Handle h) noexcept;

public:
    explicit AudioContext(const emlite::Val &val) noexcept;
    static AudioContext take_ownership(Handle h) noexcept;

    AudioContext clone() const noexcept;
    AudioContext(const jsbind::Any& contextOptions);
    double baseLatency() const;
    double outputLatency() const;
    jsbind::Any sinkId() const;
    jsbind::Any onsinkchange() const;
    void onsinkchange(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    AudioTimestamp getOutputTimestamp();
    jsbind::Promise resume();
    jsbind::Promise suspend();
    jsbind::Promise close();
    jsbind::Promise setSinkId(const jsbind::Any& sinkId);
    MediaElementAudioSourceNode createMediaElementSource(const HTMLMediaElement& mediaElement);
    MediaStreamAudioSourceNode createMediaStreamSource(const MediaStream& mediaStream);
    MediaStreamTrackAudioSourceNode createMediaStreamTrackSource(const MediaStreamTrack& mediaStreamTrack);
    MediaStreamAudioDestinationNode createMediaStreamDestination();
};

