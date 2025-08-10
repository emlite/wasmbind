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
    /// Getter of the `kind` attribute.
    /// [`TextTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/kind)
    [[nodiscard]] TextTrackKind kind() const;
    /// Getter of the `label` attribute.
    /// [`TextTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// Getter of the `language` attribute.
    /// [`TextTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/language)
    [[nodiscard]] jsbind::String language() const;
    /// Getter of the `id` attribute.
    /// [`TextTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `inBandMetadataTrackDispatchType` attribute.
    /// [`TextTrack.inBandMetadataTrackDispatchType`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/inBandMetadataTrackDispatchType)
    [[nodiscard]] jsbind::String inBandMetadataTrackDispatchType() const;
    /// Getter of the `mode` attribute.
    /// [`TextTrack.mode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/mode)
    [[nodiscard]] TextTrackMode mode() const;
    /// Setter of the `mode` attribute.
    /// [`TextTrack.mode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/mode)
    void mode(const TextTrackMode& value);
    /// Getter of the `cues` attribute.
    /// [`TextTrack.cues`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/cues)
    [[nodiscard]] TextTrackCueList cues() const;
    /// Getter of the `activeCues` attribute.
    /// [`TextTrack.activeCues`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/activeCues)
    [[nodiscard]] TextTrackCueList activeCues() const;
    /// The addCue method.
    /// [`TextTrack.addCue`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/addCue)
    jsbind::Undefined addCue(const TextTrackCue& cue);
    /// The removeCue method.
    /// [`TextTrack.removeCue`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/removeCue)
    jsbind::Undefined removeCue(const TextTrackCue& cue);
    /// Getter of the `oncuechange` attribute.
    /// [`TextTrack.oncuechange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/oncuechange)
    [[nodiscard]] jsbind::Any oncuechange() const;
    /// Setter of the `oncuechange` attribute.
    /// [`TextTrack.oncuechange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/oncuechange)
    void oncuechange(const jsbind::Any& value);
    /// Getter of the `sourceBuffer` attribute.
    /// [`TextTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack/sourceBuffer)
    [[nodiscard]] SourceBuffer sourceBuffer() const;
};

} // namespace webbind