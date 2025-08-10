#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class TimeRanges;
class AudioTrackList;
class VideoTrackList;
class TextTrackList;

/// Interface SourceBuffer
/// [`SourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer)
class SourceBuffer : public EventTarget {
    explicit SourceBuffer(Handle h) noexcept;
public:
    explicit SourceBuffer(const emlite::Val &val) noexcept;
    static SourceBuffer take_ownership(Handle h) noexcept;
    [[nodiscard]] SourceBuffer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SourceBuffer.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/mode)
    /// [`SourceBuffer.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/mode)
    [[nodiscard]] AppendMode mode() const;
    /// Setter of the `mode` attribute.
    /// [`SourceBuffer.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/mode)
    void mode(const AppendMode& value);
    /// [`SourceBuffer.updating`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/updating)
    /// [`SourceBuffer.updating`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/updating)
    [[nodiscard]] bool updating() const;
    /// [`SourceBuffer.buffered`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/buffered)
    /// [`SourceBuffer.buffered`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/buffered)
    [[nodiscard]] TimeRanges buffered() const;
    /// [`SourceBuffer.timestampOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/timestampOffset)
    /// [`SourceBuffer.timestampOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/timestampOffset)
    [[nodiscard]] double timestampOffset() const;
    /// Setter of the `timestampOffset` attribute.
    /// [`SourceBuffer.timestampOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/timestampOffset)
    void timestampOffset(double value);
    /// [`SourceBuffer.audioTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/audioTracks)
    /// [`SourceBuffer.audioTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/audioTracks)
    [[nodiscard]] AudioTrackList audioTracks() const;
    /// [`SourceBuffer.videoTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/videoTracks)
    /// [`SourceBuffer.videoTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/videoTracks)
    [[nodiscard]] VideoTrackList videoTracks() const;
    /// [`SourceBuffer.textTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/textTracks)
    /// [`SourceBuffer.textTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/textTracks)
    [[nodiscard]] TextTrackList textTracks() const;
    /// [`SourceBuffer.appendWindowStart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowStart)
    /// [`SourceBuffer.appendWindowStart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowStart)
    [[nodiscard]] double appendWindowStart() const;
    /// Setter of the `appendWindowStart` attribute.
    /// [`SourceBuffer.appendWindowStart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowStart)
    void appendWindowStart(double value);
    /// [`SourceBuffer.appendWindowEnd`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowEnd)
    /// [`SourceBuffer.appendWindowEnd`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowEnd)
    [[nodiscard]] double appendWindowEnd() const;
    /// Setter of the `appendWindowEnd` attribute.
    /// [`SourceBuffer.appendWindowEnd`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowEnd)
    void appendWindowEnd(double value);
    /// [`SourceBuffer.onupdatestart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdatestart)
    /// [`SourceBuffer.onupdatestart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdatestart)
    [[nodiscard]] jsbind::Any onupdatestart() const;
    /// Setter of the `onupdatestart` attribute.
    /// [`SourceBuffer.onupdatestart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdatestart)
    void onupdatestart(const jsbind::Any& value);
    /// [`SourceBuffer.onupdate`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdate)
    /// [`SourceBuffer.onupdate`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdate)
    [[nodiscard]] jsbind::Any onupdate() const;
    /// Setter of the `onupdate` attribute.
    /// [`SourceBuffer.onupdate`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdate)
    void onupdate(const jsbind::Any& value);
    /// [`SourceBuffer.onupdateend`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdateend)
    /// [`SourceBuffer.onupdateend`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdateend)
    [[nodiscard]] jsbind::Any onupdateend() const;
    /// Setter of the `onupdateend` attribute.
    /// [`SourceBuffer.onupdateend`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdateend)
    void onupdateend(const jsbind::Any& value);
    /// [`SourceBuffer.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onerror)
    /// [`SourceBuffer.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SourceBuffer.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onerror)
    void onerror(const jsbind::Any& value);
    /// [`SourceBuffer.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onabort)
    /// [`SourceBuffer.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`SourceBuffer.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onabort)
    void onabort(const jsbind::Any& value);
    /// The appendBuffer method.
    /// [`SourceBuffer.appendBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendBuffer)
    jsbind::Undefined appendBuffer(const jsbind::Any& data);
    /// The abort method.
    /// [`SourceBuffer.abort`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/abort)
    jsbind::Undefined abort();
    /// The changeType method.
    /// [`SourceBuffer.changeType`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/changeType)
    jsbind::Undefined changeType(const jsbind::String& type);
    /// The remove method.
    /// [`SourceBuffer.remove`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/remove)
    jsbind::Undefined remove(double start, double end);
};

} // namespace webbind