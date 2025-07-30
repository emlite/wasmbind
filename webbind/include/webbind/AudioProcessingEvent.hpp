#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class AudioBuffer;


class AudioProcessingEvent : public Event {
    explicit AudioProcessingEvent(Handle h) noexcept;

public:
    explicit AudioProcessingEvent(const emlite::Val &val) noexcept;
    static AudioProcessingEvent take_ownership(Handle h) noexcept;

    AudioProcessingEvent clone() const noexcept;
    AudioProcessingEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    double playbackTime() const;
    AudioBuffer inputBuffer() const;
    AudioBuffer outputBuffer() const;
};

