#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class OfflineAudioCompletionEventInit;
class AudioBuffer;

/// Interface OfflineAudioCompletionEvent
/// [`OfflineAudioCompletionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEvent)
class OfflineAudioCompletionEvent : public Event {
    explicit OfflineAudioCompletionEvent(Handle h) noexcept;
public:
    explicit OfflineAudioCompletionEvent(const emlite::Val &val) noexcept;
    static OfflineAudioCompletionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] OfflineAudioCompletionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new OfflineAudioCompletionEvent(..)` constructor, creating a new OfflineAudioCompletionEvent instance
    OfflineAudioCompletionEvent(const jsbind::String& type, const OfflineAudioCompletionEventInit& eventInitDict);
    /// [`OfflineAudioCompletionEvent.renderedBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEvent/renderedBuffer)
    /// [`OfflineAudioCompletionEvent.renderedBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioCompletionEvent/renderedBuffer)
    [[nodiscard]] AudioBuffer renderedBuffer() const;
};

} // namespace webbind