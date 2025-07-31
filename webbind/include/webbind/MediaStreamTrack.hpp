#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaStreamTrack;
class MediaTrackCapabilities;
class MediaTrackConstraints;
class MediaTrackSettings;
class CaptureHandle;


class MediaTrackCapabilities : public emlite::Val {
  explicit MediaTrackCapabilities(Handle h) noexcept;
public:
    static MediaTrackCapabilities take_ownership(Handle h) noexcept;
    explicit MediaTrackCapabilities(const emlite::Val &val) noexcept;
    MediaTrackCapabilities() noexcept;
    [[nodiscard]] MediaTrackCapabilities clone() const noexcept;
    [[nodiscard]] jsbind::String displaySurface() const;
    void displaySurface(const jsbind::String& value);
    [[nodiscard]] bool logicalSurface() const;
    void logicalSurface(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> cursor() const;
    void cursor(const jsbind::TypedArray<jsbind::String>& value);
};

class MediaTrackConstraints : public emlite::Val {
  explicit MediaTrackConstraints(Handle h) noexcept;
public:
    static MediaTrackConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackConstraints(const emlite::Val &val) noexcept;
    MediaTrackConstraints() noexcept;
    [[nodiscard]] MediaTrackConstraints clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> advanced() const;
    void advanced(const jsbind::TypedArray<jsbind::Any>& value);
};

class MediaTrackSettings : public emlite::Val {
  explicit MediaTrackSettings(Handle h) noexcept;
public:
    static MediaTrackSettings take_ownership(Handle h) noexcept;
    explicit MediaTrackSettings(const emlite::Val &val) noexcept;
    MediaTrackSettings() noexcept;
    [[nodiscard]] MediaTrackSettings clone() const noexcept;
    [[nodiscard]] jsbind::String displaySurface() const;
    void displaySurface(const jsbind::String& value);
    [[nodiscard]] bool logicalSurface() const;
    void logicalSurface(bool value);
    [[nodiscard]] jsbind::String cursor() const;
    void cursor(const jsbind::String& value);
    [[nodiscard]] bool restrictOwnAudio() const;
    void restrictOwnAudio(bool value);
    [[nodiscard]] bool suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(bool value);
    [[nodiscard]] double screenPixelRatio() const;
    void screenPixelRatio(double value);
};

class CaptureHandle : public emlite::Val {
  explicit CaptureHandle(Handle h) noexcept;
public:
    static CaptureHandle take_ownership(Handle h) noexcept;
    explicit CaptureHandle(const emlite::Val &val) noexcept;
    CaptureHandle() noexcept;
    [[nodiscard]] CaptureHandle clone() const noexcept;
    [[nodiscard]] jsbind::String origin() const;
    void origin(const jsbind::String& value);
    [[nodiscard]] jsbind::String handle() const;
    void handle(const jsbind::String& value);
};

/// The MediaStreamTrack class.
/// [`MediaStreamTrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack)
class MediaStreamTrack : public EventTarget {
    explicit MediaStreamTrack(Handle h) noexcept;

public:
    explicit MediaStreamTrack(const emlite::Val &val) noexcept;
    static MediaStreamTrack take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStreamTrack clone() const noexcept;
    /// Getter of the `kind` attribute.
    /// [`MediaStreamTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// Getter of the `id` attribute.
    /// [`MediaStreamTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `label` attribute.
    /// [`MediaStreamTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// Getter of the `enabled` attribute.
    /// [`MediaStreamTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/enabled)
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    /// [`MediaStreamTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/enabled)
    void enabled(bool value);
    /// Getter of the `muted` attribute.
    /// [`MediaStreamTrack.muted`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/muted)
    [[nodiscard]] bool muted() const;
    /// Getter of the `onmute` attribute.
    /// [`MediaStreamTrack.onmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onmute)
    [[nodiscard]] jsbind::Any onmute() const;
    /// Setter of the `onmute` attribute.
    /// [`MediaStreamTrack.onmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onmute)
    void onmute(const jsbind::Any& value);
    /// Getter of the `onunmute` attribute.
    /// [`MediaStreamTrack.onunmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onunmute)
    [[nodiscard]] jsbind::Any onunmute() const;
    /// Setter of the `onunmute` attribute.
    /// [`MediaStreamTrack.onunmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onunmute)
    void onunmute(const jsbind::Any& value);
    /// Getter of the `readyState` attribute.
    /// [`MediaStreamTrack.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/readyState)
    [[nodiscard]] MediaStreamTrackState readyState() const;
    /// Getter of the `onended` attribute.
    /// [`MediaStreamTrack.onended`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onended)
    [[nodiscard]] jsbind::Any onended() const;
    /// Setter of the `onended` attribute.
    /// [`MediaStreamTrack.onended`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onended)
    void onended(const jsbind::Any& value);
    /// The clone method.
    /// [`MediaStreamTrack.clone`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/clone)
    MediaStreamTrack clone();
    /// The stop method.
    /// [`MediaStreamTrack.stop`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/stop)
    jsbind::Undefined stop();
    /// The getCapabilities method.
    /// [`MediaStreamTrack.getCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/getCapabilities)
    MediaTrackCapabilities getCapabilities();
    /// The getConstraints method.
    /// [`MediaStreamTrack.getConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/getConstraints)
    MediaTrackConstraints getConstraints();
    /// The getSettings method.
    /// [`MediaStreamTrack.getSettings`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/getSettings)
    MediaTrackSettings getSettings();
    /// The applyConstraints method.
    /// [`MediaStreamTrack.applyConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/applyConstraints)
    jsbind::Promise<jsbind::Undefined> applyConstraints();
    /// The applyConstraints method.
    /// [`MediaStreamTrack.applyConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/applyConstraints)
    jsbind::Promise<jsbind::Undefined> applyConstraints(const MediaTrackConstraints& constraints);
    /// The getCaptureHandle method.
    /// [`MediaStreamTrack.getCaptureHandle`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/getCaptureHandle)
    CaptureHandle getCaptureHandle();
    /// Getter of the `oncapturehandlechange` attribute.
    /// [`MediaStreamTrack.oncapturehandlechange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/oncapturehandlechange)
    [[nodiscard]] jsbind::Any oncapturehandlechange() const;
    /// Setter of the `oncapturehandlechange` attribute.
    /// [`MediaStreamTrack.oncapturehandlechange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/oncapturehandlechange)
    void oncapturehandlechange(const jsbind::Any& value);
    /// The getSupportedCaptureActions method.
    /// [`MediaStreamTrack.getSupportedCaptureActions`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/getSupportedCaptureActions)
    jsbind::TypedArray<jsbind::String> getSupportedCaptureActions();
    /// The sendCaptureAction method.
    /// [`MediaStreamTrack.sendCaptureAction`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/sendCaptureAction)
    jsbind::Promise<jsbind::Undefined> sendCaptureAction(const CaptureAction& action);
    /// Getter of the `contentHint` attribute.
    /// [`MediaStreamTrack.contentHint`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/contentHint)
    [[nodiscard]] jsbind::String contentHint() const;
    /// Setter of the `contentHint` attribute.
    /// [`MediaStreamTrack.contentHint`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/contentHint)
    void contentHint(const jsbind::String& value);
    /// Getter of the `isolated` attribute.
    /// [`MediaStreamTrack.isolated`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/isolated)
    [[nodiscard]] bool isolated() const;
    /// Getter of the `onisolationchange` attribute.
    /// [`MediaStreamTrack.onisolationchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onisolationchange)
    [[nodiscard]] jsbind::Any onisolationchange() const;
    /// Setter of the `onisolationchange` attribute.
    /// [`MediaStreamTrack.onisolationchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onisolationchange)
    void onisolationchange(const jsbind::Any& value);
};

