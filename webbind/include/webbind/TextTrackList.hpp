#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class TextTrack;


class TextTrackList : public EventTarget {
    explicit TextTrackList(Handle h) noexcept;

public:
    explicit TextTrackList(const emlite::Val &val) noexcept;
    static TextTrackList take_ownership(Handle h) noexcept;

    TextTrackList clone() const noexcept;
    unsigned long length() const;
    TextTrack getTrackById(const jsbind::DOMString& id);
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
    jsbind::Any onaddtrack() const;
    void onaddtrack(const jsbind::Any& value);
    jsbind::Any onremovetrack() const;
    void onremovetrack(const jsbind::Any& value);
};

