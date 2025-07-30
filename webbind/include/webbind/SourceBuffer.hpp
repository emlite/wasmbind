#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class TimeRanges;
class AudioTrackList;
class VideoTrackList;
class TextTrackList;


class SourceBuffer : public EventTarget {
    explicit SourceBuffer(Handle h) noexcept;

public:
    explicit SourceBuffer(const emlite::Val &val) noexcept;
    static SourceBuffer take_ownership(Handle h) noexcept;

    SourceBuffer clone() const noexcept;
    AppendMode mode() const;
    void mode(const AppendMode& value);
    bool updating() const;
    TimeRanges buffered() const;
    double timestampOffset() const;
    void timestampOffset(double value);
    AudioTrackList audioTracks() const;
    VideoTrackList videoTracks() const;
    TextTrackList textTracks() const;
    double appendWindowStart() const;
    void appendWindowStart(double value);
    double appendWindowEnd() const;
    void appendWindowEnd(double value);
    jsbind::Any onupdatestart() const;
    void onupdatestart(const jsbind::Any& value);
    jsbind::Any onupdate() const;
    void onupdate(const jsbind::Any& value);
    jsbind::Any onupdateend() const;
    void onupdateend(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onabort() const;
    void onabort(const jsbind::Any& value);
    jsbind::Undefined appendBuffer(const jsbind::Any& data);
    jsbind::Undefined abort();
    jsbind::Undefined changeType(const jsbind::String& type);
    jsbind::Undefined remove(double start, double end);
};

