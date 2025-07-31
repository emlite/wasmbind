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
    [[nodiscard]] AudioOutputOptions clone() const noexcept;
    [[nodiscard]] jsbind::String deviceId() const;
    void deviceId(const jsbind::String& value);
};

class CaptureHandleConfig : public emlite::Val {
  explicit CaptureHandleConfig(Handle h) noexcept;
public:
    static CaptureHandleConfig take_ownership(Handle h) noexcept;
    explicit CaptureHandleConfig(const emlite::Val &val) noexcept;
    CaptureHandleConfig() noexcept;
    [[nodiscard]] CaptureHandleConfig clone() const noexcept;
    [[nodiscard]] bool exposeOrigin() const;
    void exposeOrigin(bool value);
    [[nodiscard]] jsbind::String handle() const;
    void handle(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> permittedOrigins() const;
    void permittedOrigins(const jsbind::TypedArray<jsbind::String>& value);
};

class MediaTrackSupportedConstraints : public emlite::Val {
  explicit MediaTrackSupportedConstraints(Handle h) noexcept;
public:
    static MediaTrackSupportedConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackSupportedConstraints(const emlite::Val &val) noexcept;
    MediaTrackSupportedConstraints() noexcept;
    [[nodiscard]] MediaTrackSupportedConstraints clone() const noexcept;
    [[nodiscard]] bool displaySurface() const;
    void displaySurface(bool value);
    [[nodiscard]] bool logicalSurface() const;
    void logicalSurface(bool value);
    [[nodiscard]] bool cursor() const;
    void cursor(bool value);
    [[nodiscard]] bool restrictOwnAudio() const;
    void restrictOwnAudio(bool value);
    [[nodiscard]] bool suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(bool value);
};

class MediaStreamConstraints : public emlite::Val {
  explicit MediaStreamConstraints(Handle h) noexcept;
public:
    static MediaStreamConstraints take_ownership(Handle h) noexcept;
    explicit MediaStreamConstraints(const emlite::Val &val) noexcept;
    MediaStreamConstraints() noexcept;
    [[nodiscard]] MediaStreamConstraints clone() const noexcept;
    [[nodiscard]] jsbind::String peerIdentity() const;
    void peerIdentity(const jsbind::String& value);
};

class DisplayMediaStreamOptions : public emlite::Val {
  explicit DisplayMediaStreamOptions(Handle h) noexcept;
public:
    static DisplayMediaStreamOptions take_ownership(Handle h) noexcept;
    explicit DisplayMediaStreamOptions(const emlite::Val &val) noexcept;
    DisplayMediaStreamOptions() noexcept;
    [[nodiscard]] DisplayMediaStreamOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any video() const;
    void video(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any audio() const;
    void audio(const jsbind::Any& value);
    [[nodiscard]] CaptureController controller() const;
    void controller(const CaptureController& value);
    [[nodiscard]] SelfCapturePreferenceEnum selfBrowserSurface() const;
    void selfBrowserSurface(const SelfCapturePreferenceEnum& value);
    [[nodiscard]] SystemAudioPreferenceEnum systemAudio() const;
    void systemAudio(const SystemAudioPreferenceEnum& value);
    [[nodiscard]] WindowAudioPreferenceEnum windowAudio() const;
    void windowAudio(const WindowAudioPreferenceEnum& value);
    [[nodiscard]] SurfaceSwitchingPreferenceEnum surfaceSwitching() const;
    void surfaceSwitching(const SurfaceSwitchingPreferenceEnum& value);
    [[nodiscard]] MonitorTypeSurfacesEnum monitorTypeSurfaces() const;
    void monitorTypeSurfaces(const MonitorTypeSurfacesEnum& value);
};

/// The MediaDevices class.
/// [`MediaDevices`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices)
class MediaDevices : public EventTarget {
    explicit MediaDevices(Handle h) noexcept;

public:
    explicit MediaDevices(const emlite::Val &val) noexcept;
    static MediaDevices take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaDevices clone() const noexcept;
    /// Getter of the `ondevicechange` attribute.
    /// [`MediaDevices.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/ondevicechange)
    [[nodiscard]] jsbind::Any ondevicechange() const;
    /// Setter of the `ondevicechange` attribute.
    /// [`MediaDevices.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/ondevicechange)
    void ondevicechange(const jsbind::Any& value);
    /// The enumerateDevices method.
    /// [`MediaDevices.enumerateDevices`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/enumerateDevices)
    jsbind::Promise<jsbind::TypedArray<MediaDeviceInfo>> enumerateDevices();
    /// The selectAudioOutput method.
    /// [`MediaDevices.selectAudioOutput`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/selectAudioOutput)
    jsbind::Promise<MediaDeviceInfo> selectAudioOutput();
    /// The selectAudioOutput method.
    /// [`MediaDevices.selectAudioOutput`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/selectAudioOutput)
    jsbind::Promise<MediaDeviceInfo> selectAudioOutput(const AudioOutputOptions& options);
    /// The setCaptureHandleConfig method.
    /// [`MediaDevices.setCaptureHandleConfig`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/setCaptureHandleConfig)
    jsbind::Undefined setCaptureHandleConfig();
    /// The setCaptureHandleConfig method.
    /// [`MediaDevices.setCaptureHandleConfig`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/setCaptureHandleConfig)
    jsbind::Undefined setCaptureHandleConfig(const CaptureHandleConfig& config);
    /// The setSupportedCaptureActions method.
    /// [`MediaDevices.setSupportedCaptureActions`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/setSupportedCaptureActions)
    jsbind::Undefined setSupportedCaptureActions(const jsbind::TypedArray<jsbind::String>& actions);
    /// Getter of the `oncaptureaction` attribute.
    /// [`MediaDevices.oncaptureaction`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/oncaptureaction)
    [[nodiscard]] jsbind::Any oncaptureaction() const;
    /// Setter of the `oncaptureaction` attribute.
    /// [`MediaDevices.oncaptureaction`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/oncaptureaction)
    void oncaptureaction(const jsbind::Any& value);
    /// The getSupportedConstraints method.
    /// [`MediaDevices.getSupportedConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getSupportedConstraints)
    MediaTrackSupportedConstraints getSupportedConstraints();
    /// The getUserMedia method.
    /// [`MediaDevices.getUserMedia`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getUserMedia)
    jsbind::Promise<MediaStream> getUserMedia();
    /// The getUserMedia method.
    /// [`MediaDevices.getUserMedia`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getUserMedia)
    jsbind::Promise<MediaStream> getUserMedia(const MediaStreamConstraints& constraints);
    /// The getViewportMedia method.
    /// [`MediaDevices.getViewportMedia`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getViewportMedia)
    jsbind::Promise<MediaStream> getViewportMedia();
    /// The getViewportMedia method.
    /// [`MediaDevices.getViewportMedia`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getViewportMedia)
    jsbind::Promise<MediaStream> getViewportMedia(const DisplayMediaStreamOptions& options);
    /// The getDisplayMedia method.
    /// [`MediaDevices.getDisplayMedia`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getDisplayMedia)
    jsbind::Promise<MediaStream> getDisplayMedia();
    /// The getDisplayMedia method.
    /// [`MediaDevices.getDisplayMedia`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/getDisplayMedia)
    jsbind::Promise<MediaStream> getDisplayMedia(const DisplayMediaStreamOptions& options);
};

