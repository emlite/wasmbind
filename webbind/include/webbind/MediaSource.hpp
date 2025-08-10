#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class MediaSourceHandle;
class SourceBufferList;
class SourceBuffer;

/// Interface MediaSource
/// [`MediaSource`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource)
class MediaSource : public EventTarget {
    explicit MediaSource(Handle h) noexcept;
public:
    explicit MediaSource(const emlite::Val &val) noexcept;
    static MediaSource take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaSource clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaSource(..)` constructor, creating a new MediaSource instance
    MediaSource();
    /// [`MediaSource.handle`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/handle)
    /// [`MediaSource.handle`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/handle)
    [[nodiscard]] MediaSourceHandle handle() const;
    /// [`MediaSource.sourceBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/sourceBuffers)
    /// [`MediaSource.sourceBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/sourceBuffers)
    [[nodiscard]] SourceBufferList sourceBuffers() const;
    /// [`MediaSource.activeSourceBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/activeSourceBuffers)
    /// [`MediaSource.activeSourceBuffers`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/activeSourceBuffers)
    [[nodiscard]] SourceBufferList activeSourceBuffers() const;
    /// [`MediaSource.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/readyState)
    /// [`MediaSource.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/readyState)
    [[nodiscard]] ReadyState readyState() const;
    /// [`MediaSource.duration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/duration)
    /// [`MediaSource.duration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/duration)
    [[nodiscard]] double duration() const;
    /// Setter of the `duration` attribute.
    /// [`MediaSource.duration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/duration)
    void duration(double value);
    /// [`MediaSource.onsourceopen`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceopen)
    /// [`MediaSource.onsourceopen`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceopen)
    [[nodiscard]] jsbind::Any onsourceopen() const;
    /// Setter of the `onsourceopen` attribute.
    /// [`MediaSource.onsourceopen`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceopen)
    void onsourceopen(const jsbind::Any& value);
    /// [`MediaSource.onsourceended`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceended)
    /// [`MediaSource.onsourceended`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceended)
    [[nodiscard]] jsbind::Any onsourceended() const;
    /// Setter of the `onsourceended` attribute.
    /// [`MediaSource.onsourceended`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceended)
    void onsourceended(const jsbind::Any& value);
    /// [`MediaSource.onsourceclose`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceclose)
    /// [`MediaSource.onsourceclose`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceclose)
    [[nodiscard]] jsbind::Any onsourceclose() const;
    /// Setter of the `onsourceclose` attribute.
    /// [`MediaSource.onsourceclose`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/onsourceclose)
    void onsourceclose(const jsbind::Any& value);
    /// Getter of the `canConstructInDedicatedWorker` static attribute.
    /// [`MediaSource.canConstructInDedicatedWorker`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/canConstructInDedicatedWorker)
    /// [`MediaSource.canConstructInDedicatedWorker`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/canConstructInDedicatedWorker)
    [[nodiscard]] static bool canConstructInDedicatedWorker();
    /// The addSourceBuffer method.
    /// [`MediaSource.addSourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/addSourceBuffer)
    SourceBuffer addSourceBuffer(const jsbind::String& type);
    /// The removeSourceBuffer method.
    /// [`MediaSource.removeSourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/removeSourceBuffer)
    jsbind::Undefined removeSourceBuffer(const SourceBuffer& sourceBuffer);
    /// The endOfStream method.
    /// [`MediaSource.endOfStream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/endOfStream)
    jsbind::Undefined endOfStream();
    /// The endOfStream method.
    /// [`MediaSource.endOfStream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/endOfStream)
    jsbind::Undefined endOfStream(const EndOfStreamError& error);
    /// The setLiveSeekableRange method.
    /// [`MediaSource.setLiveSeekableRange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/setLiveSeekableRange)
    jsbind::Undefined setLiveSeekableRange(double start, double end);
    /// The clearLiveSeekableRange method.
    /// [`MediaSource.clearLiveSeekableRange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/clearLiveSeekableRange)
    jsbind::Undefined clearLiveSeekableRange();
    /// The isTypeSupported method.
    /// [`MediaSource.isTypeSupported`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSource/isTypeSupported)
    static bool isTypeSupported(const jsbind::String& type);
};

} // namespace webbind