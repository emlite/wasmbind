#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaSourceHandle;
class SourceBufferList;
class SourceBuffer;


class MediaSource : public EventTarget {
    explicit MediaSource(Handle h) noexcept;

public:
    explicit MediaSource(const emlite::Val &val) noexcept;
    static MediaSource take_ownership(Handle h) noexcept;

    MediaSource clone() const noexcept;
    MediaSource();
    MediaSourceHandle handle() const;
    SourceBufferList sourceBuffers() const;
    SourceBufferList activeSourceBuffers() const;
    ReadyState readyState() const;
    double duration() const;
    void duration(double value);
    jsbind::Any onsourceopen() const;
    void onsourceopen(const jsbind::Any& value);
    jsbind::Any onsourceended() const;
    void onsourceended(const jsbind::Any& value);
    jsbind::Any onsourceclose() const;
    void onsourceclose(const jsbind::Any& value);
    static bool canConstructInDedicatedWorker();
    SourceBuffer addSourceBuffer(const jsbind::DOMString& type);
    jsbind::Undefined removeSourceBuffer(const SourceBuffer& sourceBuffer);
    jsbind::Undefined endOfStream();
    jsbind::Undefined endOfStream(const EndOfStreamError& error);
    jsbind::Undefined setLiveSeekableRange(double start, double end);
    jsbind::Undefined clearLiveSeekableRange();
    static bool isTypeSupported(const jsbind::DOMString& type);
};

