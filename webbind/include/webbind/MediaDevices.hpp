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
    jsbind::String deviceId() const;
    void deviceId(const jsbind::String& value);
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
    jsbind::String handle() const;
    void handle(const jsbind::String& value);
    jsbind::TypedArray<jsbind::String> permittedOrigins() const;
    void permittedOrigins(const jsbind::TypedArray<jsbind::String>& value);
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
    jsbind::String peerIdentity() const;
    void peerIdentity(const jsbind::String& value);
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
    jsbind::Promise<jsbind::TypedArray<MediaDeviceInfo>> enumerateDevices();
    jsbind::Promise<MediaDeviceInfo> selectAudioOutput();
    jsbind::Promise<MediaDeviceInfo> selectAudioOutput(const AudioOutputOptions& options);
    jsbind::Undefined setCaptureHandleConfig();
    jsbind::Undefined setCaptureHandleConfig(const CaptureHandleConfig& config);
    jsbind::Undefined setSupportedCaptureActions(const jsbind::TypedArray<jsbind::String>& actions);
    jsbind::Any oncaptureaction() const;
    void oncaptureaction(const jsbind::Any& value);
    MediaTrackSupportedConstraints getSupportedConstraints();
    jsbind::Promise<MediaStream> getUserMedia();
    jsbind::Promise<MediaStream> getUserMedia(const MediaStreamConstraints& constraints);
    jsbind::Promise<MediaStream> getViewportMedia();
    jsbind::Promise<MediaStream> getViewportMedia(const DisplayMediaStreamOptions& options);
    jsbind::Promise<MediaStream> getDisplayMedia();
    jsbind::Promise<MediaStream> getDisplayMedia(const DisplayMediaStreamOptions& options);
};

