#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "MediaTrackCapabilities.hpp"
#include "MediaTrackConstraints.hpp"
#include "MediaTrackSettings.hpp"
#include "CaptureHandle.hpp"
#include "enums.hpp"

namespace webbind {

class MediaStreamTrack;

/// Interface MediaStreamTrack
/// [`MediaStreamTrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack)
class MediaStreamTrack : public EventTarget {
    explicit MediaStreamTrack(Handle h) noexcept;
public:
    explicit MediaStreamTrack(const emlite::Val &val) noexcept;
    static MediaStreamTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MediaStreamTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/kind)
    /// [`MediaStreamTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// [`MediaStreamTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/id)
    /// [`MediaStreamTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`MediaStreamTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/label)
    /// [`MediaStreamTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// [`MediaStreamTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/enabled)
    /// [`MediaStreamTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/enabled)
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    /// [`MediaStreamTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/enabled)
    void enabled(bool value);
    /// [`MediaStreamTrack.muted`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/muted)
    /// [`MediaStreamTrack.muted`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/muted)
    [[nodiscard]] bool muted() const;
    /// [`MediaStreamTrack.onmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onmute)
    /// [`MediaStreamTrack.onmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onmute)
    [[nodiscard]] jsbind::Any onmute() const;
    /// Setter of the `onmute` attribute.
    /// [`MediaStreamTrack.onmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onmute)
    void onmute(const jsbind::Any& value);
    /// [`MediaStreamTrack.onunmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onunmute)
    /// [`MediaStreamTrack.onunmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onunmute)
    [[nodiscard]] jsbind::Any onunmute() const;
    /// Setter of the `onunmute` attribute.
    /// [`MediaStreamTrack.onunmute`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onunmute)
    void onunmute(const jsbind::Any& value);
    /// [`MediaStreamTrack.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/readyState)
    /// [`MediaStreamTrack.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/readyState)
    [[nodiscard]] MediaStreamTrackState readyState() const;
    /// [`MediaStreamTrack.onended`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onended)
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
    /// [`MediaStreamTrack.oncapturehandlechange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/oncapturehandlechange)
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
    /// [`MediaStreamTrack.contentHint`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/contentHint)
    /// [`MediaStreamTrack.contentHint`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/contentHint)
    [[nodiscard]] jsbind::String contentHint() const;
    /// Setter of the `contentHint` attribute.
    /// [`MediaStreamTrack.contentHint`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/contentHint)
    void contentHint(const jsbind::String& value);
    /// [`MediaStreamTrack.isolated`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/isolated)
    /// [`MediaStreamTrack.isolated`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/isolated)
    [[nodiscard]] bool isolated() const;
    /// [`MediaStreamTrack.onisolationchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onisolationchange)
    /// [`MediaStreamTrack.onisolationchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onisolationchange)
    [[nodiscard]] jsbind::Any onisolationchange() const;
    /// Setter of the `onisolationchange` attribute.
    /// [`MediaStreamTrack.onisolationchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack/onisolationchange)
    void onisolationchange(const jsbind::Any& value);
};

} // namespace webbind