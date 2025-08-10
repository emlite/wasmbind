#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class TextUpdateEventInit;

/// Interface TextUpdateEvent
/// [`TextUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent)
class TextUpdateEvent : public Event {
    explicit TextUpdateEvent(Handle h) noexcept;
public:
    explicit TextUpdateEvent(const emlite::Val &val) noexcept;
    static TextUpdateEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TextUpdateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextUpdateEvent(..)` constructor, creating a new TextUpdateEvent instance
    TextUpdateEvent(const jsbind::String& type);
    /// The `new TextUpdateEvent(..)` constructor, creating a new TextUpdateEvent instance
    TextUpdateEvent(const jsbind::String& type, const TextUpdateEventInit& options);
    /// [`TextUpdateEvent.updateRangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/updateRangeStart)
    /// [`TextUpdateEvent.updateRangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/updateRangeStart)
    [[nodiscard]] unsigned long updateRangeStart() const;
    /// [`TextUpdateEvent.updateRangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/updateRangeEnd)
    /// [`TextUpdateEvent.updateRangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/updateRangeEnd)
    [[nodiscard]] unsigned long updateRangeEnd() const;
    /// [`TextUpdateEvent.text`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/text)
    /// [`TextUpdateEvent.text`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/text)
    [[nodiscard]] jsbind::String text() const;
    /// [`TextUpdateEvent.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/selectionStart)
    /// [`TextUpdateEvent.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/selectionStart)
    [[nodiscard]] unsigned long selectionStart() const;
    /// [`TextUpdateEvent.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/selectionEnd)
    /// [`TextUpdateEvent.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/selectionEnd)
    [[nodiscard]] unsigned long selectionEnd() const;
};

} // namespace webbind