#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class TextTrack;


class TextTrackCue : public EventTarget {
    explicit TextTrackCue(Handle h) noexcept;

public:
    explicit TextTrackCue(const emlite::Val &val) noexcept;
    static TextTrackCue take_ownership(Handle h) noexcept;

    TextTrackCue clone() const noexcept;
    TextTrack track() const;
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    double startTime() const;
    void startTime(double value);
    double endTime() const;
    void endTime(double value);
    bool pauseOnExit() const;
    void pauseOnExit(bool value);
    jsbind::Any onenter() const;
    void onenter(const jsbind::Any& value);
    jsbind::Any onexit() const;
    void onexit(const jsbind::Any& value);
};

