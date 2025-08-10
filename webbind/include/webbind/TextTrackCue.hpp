#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class TextTrack;

/// Interface TextTrackCue
/// [`TextTrackCue`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue)
class TextTrackCue : public EventTarget {
    explicit TextTrackCue(Handle h) noexcept;
public:
    explicit TextTrackCue(const emlite::Val &val) noexcept;
    static TextTrackCue take_ownership(Handle h) noexcept;
    [[nodiscard]] TextTrackCue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `track` attribute.
    /// [`TextTrackCue.track`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/track)
    [[nodiscard]] TextTrack track() const;
    /// Getter of the `id` attribute.
    /// [`TextTrackCue.id`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/id)
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    /// [`TextTrackCue.id`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/id)
    void id(const jsbind::String& value);
    /// Getter of the `startTime` attribute.
    /// [`TextTrackCue.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/startTime)
    [[nodiscard]] double startTime() const;
    /// Setter of the `startTime` attribute.
    /// [`TextTrackCue.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/startTime)
    void startTime(double value);
    /// Getter of the `endTime` attribute.
    /// [`TextTrackCue.endTime`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/endTime)
    [[nodiscard]] double endTime() const;
    /// Setter of the `endTime` attribute.
    /// [`TextTrackCue.endTime`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/endTime)
    void endTime(double value);
    /// Getter of the `pauseOnExit` attribute.
    /// [`TextTrackCue.pauseOnExit`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/pauseOnExit)
    [[nodiscard]] bool pauseOnExit() const;
    /// Setter of the `pauseOnExit` attribute.
    /// [`TextTrackCue.pauseOnExit`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/pauseOnExit)
    void pauseOnExit(bool value);
    /// Getter of the `onenter` attribute.
    /// [`TextTrackCue.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/onenter)
    [[nodiscard]] jsbind::Any onenter() const;
    /// Setter of the `onenter` attribute.
    /// [`TextTrackCue.onenter`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/onenter)
    void onenter(const jsbind::Any& value);
    /// Getter of the `onexit` attribute.
    /// [`TextTrackCue.onexit`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/onexit)
    [[nodiscard]] jsbind::Any onexit() const;
    /// Setter of the `onexit` attribute.
    /// [`TextTrackCue.onexit`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue/onexit)
    void onexit(const jsbind::Any& value);
};

} // namespace webbind