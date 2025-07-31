#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class TimeRanges;
class AudioTrackList;
class VideoTrackList;
class TextTrackList;


/// The SourceBuffer class.
/// [`SourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer)
class SourceBuffer : public EventTarget {
    explicit SourceBuffer(Handle h) noexcept;

public:
    explicit SourceBuffer(const emlite::Val &val) noexcept;
    static SourceBuffer take_ownership(Handle h) noexcept;

    [[nodiscard]] SourceBuffer clone() const noexcept;
    /// Getter of the `mode` attribute.
    /// [`SourceBuffer.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/mode)
    [[nodiscard]] AppendMode mode() const;
    /// Setter of the `mode` attribute.
    /// [`SourceBuffer.mode`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/mode)
    void mode(const AppendMode& value);
    /// Getter of the `updating` attribute.
    /// [`SourceBuffer.updating`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/updating)
    [[nodiscard]] bool updating() const;
    /// Getter of the `buffered` attribute.
    /// [`SourceBuffer.buffered`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/buffered)
    [[nodiscard]] TimeRanges buffered() const;
    /// Getter of the `timestampOffset` attribute.
    /// [`SourceBuffer.timestampOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/timestampOffset)
    [[nodiscard]] double timestampOffset() const;
    /// Setter of the `timestampOffset` attribute.
    /// [`SourceBuffer.timestampOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/timestampOffset)
    void timestampOffset(double value);
    /// Getter of the `audioTracks` attribute.
    /// [`SourceBuffer.audioTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/audioTracks)
    [[nodiscard]] AudioTrackList audioTracks() const;
    /// Getter of the `videoTracks` attribute.
    /// [`SourceBuffer.videoTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/videoTracks)
    [[nodiscard]] VideoTrackList videoTracks() const;
    /// Getter of the `textTracks` attribute.
    /// [`SourceBuffer.textTracks`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/textTracks)
    [[nodiscard]] TextTrackList textTracks() const;
    /// Getter of the `appendWindowStart` attribute.
    /// [`SourceBuffer.appendWindowStart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowStart)
    [[nodiscard]] double appendWindowStart() const;
    /// Setter of the `appendWindowStart` attribute.
    /// [`SourceBuffer.appendWindowStart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowStart)
    void appendWindowStart(double value);
    /// Getter of the `appendWindowEnd` attribute.
    /// [`SourceBuffer.appendWindowEnd`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowEnd)
    [[nodiscard]] double appendWindowEnd() const;
    /// Setter of the `appendWindowEnd` attribute.
    /// [`SourceBuffer.appendWindowEnd`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/appendWindowEnd)
    void appendWindowEnd(double value);
    /// Getter of the `onupdatestart` attribute.
    /// [`SourceBuffer.onupdatestart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdatestart)
    [[nodiscard]] jsbind::Any onupdatestart() const;
    /// Setter of the `onupdatestart` attribute.
    /// [`SourceBuffer.onupdatestart`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdatestart)
    void onupdatestart(const jsbind::Any& value);
    /// Getter of the `onupdate` attribute.
    /// [`SourceBuffer.onupdate`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdate)
    [[nodiscard]] jsbind::Any onupdate() const;
    /// Setter of the `onupdate` attribute.
    /// [`SourceBuffer.onupdate`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdate)
    void onupdate(const jsbind::Any& value);
    /// Getter of the `onupdateend` attribute.
    /// [`SourceBuffer.onupdateend`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdateend)
    [[nodiscard]] jsbind::Any onupdateend() const;
    /// Setter of the `onupdateend` attribute.
    /// [`SourceBuffer.onupdateend`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onupdateend)
    void onupdateend(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`SourceBuffer.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SourceBuffer.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SourceBuffer/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onabort` attribute.
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

