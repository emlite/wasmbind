#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaPositionState.hpp"
#include "enums.hpp"

namespace webbind {

class MediaMetadata;

/// Interface MediaSession
/// [`MediaSession`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession)
class MediaSession : public emlite::Val {
    explicit MediaSession(Handle h) noexcept;
public:
    explicit MediaSession(const emlite::Val &val) noexcept;
    static MediaSession take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaSession clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MediaSession.metadata`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/metadata)
    /// [`MediaSession.metadata`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/metadata)
    [[nodiscard]] MediaMetadata metadata() const;
    /// Setter of the `metadata` attribute.
    /// [`MediaSession.metadata`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/metadata)
    void metadata(const MediaMetadata& value);
    /// [`MediaSession.playbackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/playbackState)
    /// [`MediaSession.playbackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/playbackState)
    [[nodiscard]] MediaSessionPlaybackState playbackState() const;
    /// Setter of the `playbackState` attribute.
    /// [`MediaSession.playbackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/playbackState)
    void playbackState(const MediaSessionPlaybackState& value);
    /// The setActionHandler method.
    /// [`MediaSession.setActionHandler`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/setActionHandler)
    jsbind::Undefined setActionHandler(const MediaSessionAction& action, const jsbind::Function& handler);
    /// The setPositionState method.
    /// [`MediaSession.setPositionState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/setPositionState)
    jsbind::Undefined setPositionState();
    /// The setPositionState method.
    /// [`MediaSession.setPositionState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/setPositionState)
    jsbind::Undefined setPositionState(const MediaPositionState& state);
    /// The setMicrophoneActive method.
    /// [`MediaSession.setMicrophoneActive`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/setMicrophoneActive)
    jsbind::Promise<jsbind::Undefined> setMicrophoneActive(bool active);
    /// The setCameraActive method.
    /// [`MediaSession.setCameraActive`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/setCameraActive)
    jsbind::Promise<jsbind::Undefined> setCameraActive(bool active);
    /// The setScreenshareActive method.
    /// [`MediaSession.setScreenshareActive`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSession/setScreenshareActive)
    jsbind::Promise<jsbind::Undefined> setScreenshareActive(bool active);
};

} // namespace webbind