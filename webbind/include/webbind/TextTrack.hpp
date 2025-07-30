#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class TextTrackCueList;
class TextTrackCue;
class SourceBuffer;


class TextTrack : public EventTarget {
    explicit TextTrack(Handle h) noexcept;

public:
    explicit TextTrack(const emlite::Val &val) noexcept;
    static TextTrack take_ownership(Handle h) noexcept;

    TextTrack clone() const noexcept;
    TextTrackKind kind() const;
    jsbind::String label() const;
    jsbind::String language() const;
    jsbind::String id() const;
    jsbind::String inBandMetadataTrackDispatchType() const;
    TextTrackMode mode() const;
    void mode(const TextTrackMode& value);
    TextTrackCueList cues() const;
    TextTrackCueList activeCues() const;
    jsbind::Undefined addCue(const TextTrackCue& cue);
    jsbind::Undefined removeCue(const TextTrackCue& cue);
    jsbind::Any oncuechange() const;
    void oncuechange(const jsbind::Any& value);
    SourceBuffer sourceBuffer() const;
};

