#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class AudioBuffer;


/// The OfflineAudioCompletionEvent class.
/// [`OfflineAudioCompletionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEvent)
class OfflineAudioCompletionEvent : public Event {
    explicit OfflineAudioCompletionEvent(Handle h) noexcept;

public:
    explicit OfflineAudioCompletionEvent(const emlite::Val &val) noexcept;
    static OfflineAudioCompletionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] OfflineAudioCompletionEvent clone() const noexcept;
    /// The `new OfflineAudioCompletionEvent(..)` constructor, creating a new OfflineAudioCompletionEvent instance
    OfflineAudioCompletionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `renderedBuffer` attribute.
    /// [`OfflineAudioCompletionEvent.renderedBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEvent/renderedBuffer)
    [[nodiscard]] AudioBuffer renderedBuffer() const;
};

