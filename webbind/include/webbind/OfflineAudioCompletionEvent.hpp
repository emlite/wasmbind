#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class AudioBuffer;


class OfflineAudioCompletionEvent : public Event {
    explicit OfflineAudioCompletionEvent(Handle h) noexcept;

public:
    explicit OfflineAudioCompletionEvent(const emlite::Val &val) noexcept;
    static OfflineAudioCompletionEvent take_ownership(Handle h) noexcept;

    OfflineAudioCompletionEvent clone() const noexcept;
    OfflineAudioCompletionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    AudioBuffer renderedBuffer() const;
};

