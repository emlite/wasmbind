#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AudioTrack;


class AudioTrackList : public EventTarget {
    explicit AudioTrackList(Handle h) noexcept;

public:
    explicit AudioTrackList(const emlite::Val &val) noexcept;
    static AudioTrackList take_ownership(Handle h) noexcept;

    AudioTrackList clone() const noexcept;
    unsigned long length() const;
    AudioTrack getTrackById(const jsbind::DOMString& id);
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
    jsbind::Any onaddtrack() const;
    void onaddtrack(const jsbind::Any& value);
    jsbind::Any onremovetrack() const;
    void onremovetrack(const jsbind::Any& value);
};

