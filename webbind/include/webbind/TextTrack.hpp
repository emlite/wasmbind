#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class TextTrackCueList;
class TextTrackCue;
class SourceBuffer;

/// Interface TextTrack
/// [`TextTrack`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack)
class TextTrack : public EventTarget {
    explicit TextTrack(Handle h) noexcept;
public:
    explicit TextTrack(const emlite::Val &val) noexcept;
    static TextTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] TextTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`TextTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/kind)
    /// [`TextTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/kind)
    [[nodiscard]] TextTrackKind kind() const;
    /// [`TextTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/label)
    /// [`TextTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// [`TextTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/language)
    /// [`TextTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/language)
    [[nodiscard]] jsbind::String language() const;
    /// [`TextTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/id)
    /// [`TextTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`TextTrack.inBandMetadataTrackDispatchType`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/inBandMetadataTrackDispatchType)
    /// [`TextTrack.inBandMetadataTrackDispatchType`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/inBandMetadataTrackDispatchType)
    [[nodiscard]] jsbind::String inBandMetadataTrackDispatchType() const;
    /// [`TextTrack.mode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/mode)
    /// [`TextTrack.mode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/mode)
    [[nodiscard]] TextTrackMode mode() const;
    /// Setter of the `mode` attribute.
    /// [`TextTrack.mode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/mode)
    void mode(const TextTrackMode& value);
    /// [`TextTrack.cues`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/cues)
    /// [`TextTrack.cues`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/cues)
    [[nodiscard]] TextTrackCueList cues() const;
    /// [`TextTrack.activeCues`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/activeCues)
    /// [`TextTrack.activeCues`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/activeCues)
    [[nodiscard]] TextTrackCueList activeCues() const;
    /// The addCue method.
    /// [`TextTrack.addCue`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/addCue)
    jsbind::Undefined addCue(const TextTrackCue& cue);
    /// The removeCue method.
    /// [`TextTrack.removeCue`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/removeCue)
    jsbind::Undefined removeCue(const TextTrackCue& cue);
    /// [`TextTrack.oncuechange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/oncuechange)
    /// [`TextTrack.oncuechange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/oncuechange)
    [[nodiscard]] jsbind::Any oncuechange() const;
    /// Setter of the `oncuechange` attribute.
    /// [`TextTrack.oncuechange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/oncuechange)
    void oncuechange(const jsbind::Any& value);
    /// [`TextTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/sourceBuffer)
    /// [`TextTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/sourceBuffer)
    [[nodiscard]] SourceBuffer sourceBuffer() const;
};

} // namespace webbind