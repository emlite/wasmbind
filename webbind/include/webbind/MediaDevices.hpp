#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaDeviceInfo;
class AudioOutputOptions;
class CaptureHandleConfig;
class MediaTrackSupportedConstraints;
class MediaStream;
class MediaStreamConstraints;
class DisplayMediaStreamOptions;
class CaptureController;


class AudioOutputOptions : public emlite::Val {
  explicit AudioOutputOptions(Handle h) noexcept;
public:
    static AudioOutputOptions take_ownership(Handle h) noexcept;
    explicit AudioOutputOptions(const emlite::Val &val) noexcept;
    AudioOutputOptions() noexcept;
    AudioOutputOptions clone() const noexcept;
    jsbind::DOMString deviceId() const;
    void deviceId(const jsbind::DOMString& value);
};

class CaptureHandleConfig : public emlite::Val {
  explicit CaptureHandleConfig(Handle h) noexcept;
public:
    static CaptureHandleConfig take_ownership(Handle h) noexcept;
    explicit CaptureHandleConfig(const emlite::Val &val) noexcept;
    CaptureHandleConfig() noexcept;
    CaptureHandleConfig clone() const noexcept;
    bool exposeOrigin() const;
    void exposeOrigin(bool value);
    jsbind::DOMString handle() const;
    void handle(const jsbind::DOMString& value);
    jsbind::Sequence<jsbind::DOMString> permittedOrigins() const;
    void permittedOrigins(const jsbind::Sequence<jsbind::DOMString>& value);
};

class MediaTrackSupportedConstraints : public emlite::Val {
  explicit MediaTrackSupportedConstraints(Handle h) noexcept;
public:
    static MediaTrackSupportedConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackSupportedConstraints(const emlite::Val &val) noexcept;
    MediaTrackSupportedConstraints() noexcept;
    MediaTrackSupportedConstraints clone() const noexcept;
    bool displaySurface() const;
    void displaySurface(bool value);
    bool logicalSurface() const;
    void logicalSurface(bool value);
    bool cursor() const;
    void cursor(bool value);
    bool restrictOwnAudio() const;
    void restrictOwnAudio(bool value);
    bool suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(bool value);
};

class MediaStreamConstraints : public emlite::Val {
  explicit MediaStreamConstraints(Handle h) noexcept;
public:
    static MediaStreamConstraints take_ownership(Handle h) noexcept;
    explicit MediaStreamConstraints(const emlite::Val &val) noexcept;
    MediaStreamConstraints() noexcept;
    MediaStreamConstraints clone() const noexcept;
    jsbind::DOMString peerIdentity() const;
    void peerIdentity(const jsbind::DOMString& value);
};

class DisplayMediaStreamOptions : public emlite::Val {
  explicit DisplayMediaStreamOptions(Handle h) noexcept;
public:
    static DisplayMediaStreamOptions take_ownership(Handle h) noexcept;
    explicit DisplayMediaStreamOptions(const emlite::Val &val) noexcept;
    DisplayMediaStreamOptions() noexcept;
    DisplayMediaStreamOptions clone() const noexcept;
    jsbind::Any video() const;
    void video(const jsbind::Any& value);
    jsbind::Any audio() const;
    void audio(const jsbind::Any& value);
    CaptureController controller() const;
    void controller(const CaptureController& value);
    SelfCapturePreferenceEnum selfBrowserSurface() const;
    void selfBrowserSurface(const SelfCapturePreferenceEnum& value);
    SystemAudioPreferenceEnum systemAudio() const;
    void systemAudio(const SystemAudioPreferenceEnum& value);
    WindowAudioPreferenceEnum windowAudio() const;
    void windowAudio(const WindowAudioPreferenceEnum& value);
    SurfaceSwitchingPreferenceEnum surfaceSwitching() const;
    void surfaceSwitching(const SurfaceSwitchingPreferenceEnum& value);
    MonitorTypeSurfacesEnum monitorTypeSurfaces() const;
    void monitorTypeSurfaces(const MonitorTypeSurfacesEnum& value);
};

class MediaDevices : public EventTarget {
    explicit MediaDevices(Handle h) noexcept;

public:
    explicit MediaDevices(const emlite::Val &val) noexcept;
    static MediaDevices take_ownership(Handle h) noexcept;

    MediaDevices clone() const noexcept;
    jsbind::Any ondevicechange() const;
    void ondevicechange(const jsbind::Any& value);
    jsbind::Promise enumerateDevices();
    jsbind::Promise selectAudioOutput();
    jsbind::Promise selectAudioOutput(const AudioOutputOptions& options);
    jsbind::Undefined setCaptureHandleConfig();
    jsbind::Undefined setCaptureHandleConfig(const CaptureHandleConfig& config);
    jsbind::Undefined setSupportedCaptureActions(const jsbind::Sequence<jsbind::DOMString>& actions);
    jsbind::Any oncaptureaction() const;
    void oncaptureaction(const jsbind::Any& value);
    MediaTrackSupportedConstraints getSupportedConstraints();
    jsbind::Promise getUserMedia();
    jsbind::Promise getUserMedia(const MediaStreamConstraints& constraints);
    jsbind::Promise getViewportMedia();
    jsbind::Promise getViewportMedia(const DisplayMediaStreamOptions& options);
    jsbind::Promise getDisplayMedia();
    jsbind::Promise getDisplayMedia(const DisplayMediaStreamOptions& options);
};

