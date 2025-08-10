#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "AudioOutputOptions.hpp"
#include "CaptureHandleConfig.hpp"
#include "MediaTrackSupportedConstraints.hpp"
#include "MediaStreamConstraints.hpp"
#include "DisplayMediaStreamOptions.hpp"

namespace webbind {

class MediaDeviceInfo;
class MediaStream;

/// Interface MediaDevices
/// [`MediaDevices`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices)
class MediaDevices : public EventTarget {
    explicit MediaDevices(Handle h) noexcept;
public:
    explicit MediaDevices(const emlite::Val &val) noexcept;
    static MediaDevices take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaDevices clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MediaDevices.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/ondevicechange)
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
    /// [`MediaDevices.oncaptureaction`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices/oncaptureaction)
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

} // namespace webbind